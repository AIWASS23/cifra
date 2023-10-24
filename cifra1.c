#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

// Funcao para deteccao da Plataforma do sistema operacional
int so() {
    int SO;
#ifdef __linux__
    SO=0;
#endif
#ifdef _WIN32
    SO=1;
#endif
    return SO;
}

void cleanText(char *text) {
    int posW = 0;
    for (int posR = 0; text[posR] != '\0'; posR++) {
        if (isalpha(text[posR])) {
            text[posW] = toupper(text[posR]); // Converter para maiúsculas
            posW++;
        }
    }
    text[posW] = '\0'; // Terminar a string após o tratamento
}

// Funcao para conversao de string para maiuscula e eliminacao de espacos
char *strupr(char *str) {
    int posW = 0; 
    int posR = 0;
    unsigned char *p = (unsigned char *)str;
    
    while (*p) {
        *p = toupper(*p);
        p++;
    }
    for(int posR = 0; posR < strlen(str); posR++) {
        if(str[posR] == ' ')
            continue;
        str[posW] = str[posR];
        posW++;
    }
    str[posW] = '\0';
    return str;
}

int readStringFromFile(const char *filename, char *str, int maxLen) {
    FILE *file = fopen(filename, "r");
    if (file == NULL) {
        return 0; // Falha ao abrir o arquivo
    }
    
    if (fscanf(file, "%s", str) != 1) {
        fclose(file);
        return 0; // Falha ao ler a string
    }
    
    fclose(file);
    return 1; // Leitura bem-sucedida
}

//Funcao que encripta um texto usando a cifra de Vigenere//
void encript(char* Text, char* key) {
    int i = 0;
    int j;
    int lenText = 0; 
    int lenkey = 0;

    lenText = strlen(Text);
    char TextEncrypted[lenText];
    lenkey = strlen(key);
    char newkey[lenText];

    for(int i = 0; i < lenText; i++) {
        j = i % strlen(key);
        newkey[i] = key[j];
    }
    newkey[lenText] = '\0';
    printf("\n	TEXTO ORIGINAL = %s\n	CHAVE = %s\n",Text,key);
    printf("	TEXTO CIFRADO = ");

    for(int i = 0; i < lenText; i++) {
        TextEncrypted[i] = (Text[i] + newkey[i]) % 26+65;
        printf("%c",TextEncrypted[i]);
    }

    printf("\n");
}

//Funcao que decripta um texto usando a cifra de Vigenere

void decript(char* TextEncrypted,char* key){
    
    int lenTextEncrypted = strlen(TextEncrypted);
    char Text[lenTextEncrypted];
    char newkey[lenTextEncrypted];

    int h;
    int i;
    int j;

    for (int i = 0; i < strlen(TextEncrypted); i++) {
        j = i % strlen(key);
        newkey[i] = key[j];
    }

    printf("\n	TEXTO CIFRADO = %s\n	CHAVE = %s\n",TextEncrypted,key);
    printf("	TEXTO DESCIFRADO = ");

    for(int i = 0; i < lenTextEncrypted; i++) {
        Text[i]=(TextEncrypted[i] - newkey[i] + 26) % 26 + 65;
        printf("%c",Text[i]);
    }
    printf("\n");
}
//Funcao principal//

int main() {
    char Text[4000];
    char key[4000];

    // Ler o texto diretamente de um arquivo
    if (!readStringFromFile("text.txt", Text, sizeof(Text))) {
        fprintf(stderr, "Error reading TEXT from the file.\n");
        return 1;
    }

    // Ler a chave diretamente de um arquivo
    if (!readStringFromFile("key.txt", key, sizeof(key))) {
        fprintf(stderr, "Error reading KEY from the file.\n");
        return 1;
    }

    // Tratar o texto e chave
    strupr(Text);
    strupr(key);

    // Chamar a função de encriptação
    encript(Text, key);
    decript(Text, key);

    return 0;
}