/*
    Escrito por: 
        Davison Lucas Mendes Viana
        Marcelo de Araújo
    
    Disciplina: Sistemas embarcados - IFCE
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

FILE *f; // entrada
FILE *g; // encriptado
FILE *h; // chave
FILE *l; // desencriptado

//Detecção da Plataforma do sistema operacional
int so(){
    int SO;
#ifdef __linux__
    SO=0;
#endif
#ifdef _WIN32
    SO=1;
#endif
    return SO;
}

int ehPontuacao(char caractere) {
    // Verifica se o caractere é uma pontuação.
    if (caractere == '!' || caractere == ',' || caractere == '.' || caractere == ';' || caractere == '?' || caractere == ':' ||
        caractere == '(' || caractere == ')' || caractere == '[' || caractere == ']' || caractere == '{' || caractere == '}' ||
        caractere == '"' || caractere == '\'' || caractere == '-' || caractere == '_' || caractere == '<' || caractere == '>' ||
        caractere == '/' || caractere == '\\' || caractere == '|') {
        return 1; // É uma pontuação.
    } else {
        return 0; // Não é uma pontuação.
    }
}

int ehCaractereASCIIImprimivel(char caractere) {
    return (caractere >= 32 && caractere < 127);
}

int ehNumero(char caractere) {
    // Verifica se o caractere é um dígito numérico.
    if (caractere >= '0' && caractere <= '9') {
        return 1; // É um número.
    } else {
        return 0; // Não é um número.
    }
}

int ehCaractereEspecial(char caractere) {
    // Verifica se o caractere é um caractere especial com base em sua tabela ASCII.
    if ((caractere >= 0 && caractere <= 47) ||
        (caractere >= 58 && caractere <= 64) ||
        (caractere >= 91 && caractere <= 96) ||
        (caractere >= 123 && caractere <= 127)) {
        return 1; // É um caractere especial.
    } else {
        return 0; // Não é um caractere especial.
    }
}


void removerEspacos(char *texto) {
    int tamanho = strlen(texto);
    int i, j = 0;

    for (i = 0; i < tamanho; i++) {
        if (texto[i] != ' ') {
            texto[j] = texto[i];
            j++;
        }
    }

    texto[j] = '\0'; // Adicione o caractere nulo no final da nova string.
}

void removerPontuacao(char *texto) {
    int tamanho = strlen(texto);
    int i, j = 0;

    for (i = 0; i < tamanho; i++) {
        if (!ehPontuacao(texto[i]) && ehCaractereASCIIImprimivel(texto[i])) {
            texto[j] = texto[i];
            j++;
        }
    }

    texto[j] = '\0'; // Adicione o caractere nulo no final da nova string.
}

void removerNumeros(char *texto) {
    int tamanho = strlen(texto);
    int i, j = 0;

    for (i = 0; i < tamanho; i++) {
        if (!ehNumero(texto[i])) {
            texto[j] = texto[i];
            j++;
        }
    }

    texto[j] = '\0'; // Adicione o caractere nulo no final da nova string.
}


// Cria todos os arquivos, coso estes não existam.
void abrir_arquivos() {
    f = fopen("textoDeEntrada.txt", "r+");
    if (f == NULL) {
        f = fopen("textoDeEntrada.txt", "w+");
        if (f == NULL) {
            printf("\nNão foi possível criar o arquivo de entrada.\n");
            exit(1);
        }
    }


    g = fopen("textoEncriptado.txt", "r+");
    if (g == NULL) {
        g = fopen("textoEncriptado.txt", "w+");
        if (g == NULL) {
        printf("\nNão foi possível criar o arquivo de saída.\n");
        exit(1);
        }
    }


    h = fopen("chave.txt", "r+");
    if (h == NULL) {
        h = fopen("chave.txt", "w+");
        if (h == NULL) {
            printf("\nNão foi possível criar o arquivo de chave.\n");
            exit(1);
        }
    }

    l = fopen("textoDesEncriptado.txt", "r+");
    if (l == NULL) {
        l = fopen("textoDesEncriptado.txt", "w+");
        if (l == NULL) {
            printf("\nNão foi possível criar o arquivo de entrada.\n");
            exit(1);
        }
    }
}

//Fecha todos os arquivos abertos
void fechar_arquivos() {
    fclose(f);
    fclose(g);
    fclose(h);
    fclose(l);
}

//Funcao para conversao de string para maiuscula e eliminacao de espacos
char *strupr(char *str)
{
    int posW = 0, posR = 0;
    unsigned char *p = (unsigned char *)str;
    
    while (*p) {
        *p = toupper(*p);
        p++;
    }

    
    for(posR = 0; posR < strlen(str) - 1 ; posR++) {
        if(str[posR] == ' ')
            continue;
        str[posW] = str[posR];
        posW++;
    }
    str[posW] = '\0';
    return str;
}


//ler usando fgets
char *lerArquivo(FILE *arquivo) {
     if (arquivo == NULL) {
        printf("Erro ao abrir o arquivo.\n");
        exit(1);
    }

    char linha[8000];  // Tamanho máximo de cada linha (ajuste conforme necessário)
    char *conteudo = NULL;
    size_t tamanho = 0;

    while (fgets(linha, sizeof(linha), arquivo) != NULL) {
        
        tamanho += strlen(linha);
        conteudo = (char *)realloc(conteudo, tamanho + 1);
        if (conteudo == NULL) {
            printf("Erro na alocação de memória.\n");
            exit(1);
        }

        strcat(conteudo, linha);
    }

    return conteudo;
}

char *lerChave(FILE *arquivo) {
    if (arquivo == NULL) {
        printf("Erro ao abrir o arquivo de chave.\n");
        exit(1);
    }

    char linha[10]; // Tamanho máximo da chave (ajuste conforme necessário)
    if (fgets(linha, sizeof(linha), arquivo) == NULL) {
        printf("Erro ao ler a chave do arquivo.\n");
        exit(1);
    }

    // Remova a quebra de linha da chave, se presente
    char *quebraLinha = strchr(linha, '\n');
    if (quebraLinha != NULL) {
        *quebraLinha = '\0';
    }

    // Aplicar as funções para limpar a chave
    removerEspacos(linha);
    removerPontuacao(linha);
    removerNumeros(linha);

    strupr(linha); // Converte a chave para maiúsculas

    return strdup(linha);
}


void encriptArquivo() {
    abrir_arquivos();

    char *chaveCriptografia = lerChave(h);

    if (f == NULL || g == NULL) {
        printf("Erro ao abrir os arquivos de entrada e saída.\n");
        exit(1);
    }

    char *textoDeEntrada = lerArquivo(f);

    // Aplicar as funções para limpar o texto
    removerEspacos(textoDeEntrada);
    removerPontuacao(textoDeEntrada);
    removerNumeros(textoDeEntrada);

    char TextEncrypted[8000]; // Tamanho máximo de cada linha (ajuste conforme necessário)
    int i, j, lenText = strlen(textoDeEntrada);
    int lenkey = strlen(chaveCriptografia);
    char newkey[10];

    for (i = 0; i < lenText; i++) {
        j = i % lenkey;
        newkey[i] = chaveCriptografia[j];
    }
    newkey[lenText] = '\0';

    for (i = 0; i < lenText; i++) {
        TextEncrypted[i] = (textoDeEntrada[i] > 64) ? (textoDeEntrada[i] + newkey[i]) % 26 + 65 : 32;
    }

    TextEncrypted[lenText] = '\0';

    fprintf(g, "%s\n", TextEncrypted);

    fechar_arquivos();
    free(chaveCriptografia); // Libera a memória alocada para a chave
    free(textoDeEntrada); // Libera a memória alocada para o texto de entrada
}


void decriptArquivo() {
    abrir_arquivos();

    char *chaveDescriptografia = lerChave(h);

    if (g == NULL) {
        printf("Erro ao abrir os arquivos.\n");
        exit(1);
    }

    char *textoEncriptado = lerArquivo(g);

    // Aplicar as funções para limpar o texto encriptado
    removerEspacos(textoEncriptado);
    removerPontuacao(textoEncriptado);
    removerNumeros(textoEncriptado);

    char TextDecrypted[8000]; // Tamanho máximo de cada linha (ajuste conforme necessário)
    int i, j, lenText = strlen(textoEncriptado);
    int lenkey = strlen(chaveDescriptografia);
    char newkey[10];

    for (i = 0; i < lenText; i++) {
        j = i % lenkey;
        newkey[i] = chaveDescriptografia[j];
    }
    newkey[lenText] = '\0';

    for (i = 0; i < lenText; i++) {
        TextDecrypted[i] = (textoEncriptado[i] > 64) ? (textoEncriptado[i] - newkey[i] + 26) % 26 + 65 : 32;
    }

    TextDecrypted[lenText] = '\0';

    fprintf(l, "%s\n", TextDecrypted);

    fechar_arquivos();
    free(chaveDescriptografia); // Libera a memória alocada para a chave
    free(textoEncriptado); // Libera a memória alocada para o texto encriptado
}

int main() {

    encriptArquivo();
    decriptArquivo();

    return 0;
}
