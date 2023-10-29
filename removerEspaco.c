#include <stdio.h>
#include <string.h>

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

int main() {
    char texto[] = "Este é um exemplo de texto 47 com pontuações, como vírgulas, pontos e exclamações!";
    printf("Texto original: %s\n", texto);

    // Primeiro, removemos os espaços.
    removerEspacos(texto);
    printf("Sem Espaços: %s\n", texto);

    // Em seguida, removemos as pontuações.
    removerPontuacao(texto);
    printf("Sem Pontuação: %s\n", texto);

    removerNumeros(texto);
    printf("Sem Números: %s\n", texto);

    return 0;
}