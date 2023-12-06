#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <time.h>
#include <stdlib.h>

void processarTexto(char *chave, char* texto, int chaveLength, int textoLength, int modo) {
    if (modo != 0 && modo != 1) {
        printf("Erro: O modo deve ser 0 para encriptar ou 1 para desencriptar.\n");
        return;
    }

    for (int i = 0; i < textoLength; i++) {
        char letraChave = chave[i % chaveLength]; 
        if (isalpha(texto[i])) { // Verifica se é um caractere alfabético
            if (modo == 0) { // Encriptar
                texto[i] = (toupper(texto[i]) + letraChave - 'A') % 26 + 'A';
            } else { // Desencriptar
                texto[i] = (toupper(texto[i]) - letraChave + 26 - 'A') % 26 + 'A';
            }
        }
    }
}

void processarTextoWrapper(int inicio, char *buffer, char *texto, int modo) {
    char chave[20] = "PIZZA";
    int textoLength = strlen(texto);
    
    while (inicio < textoLength) {
        int j = 0;

        for (int i = 0; i < 500 && inicio + i < textoLength; i++) {
            buffer[j++] = texto[inicio + i];
        }

        processarTexto(chave, buffer, strlen(chave), j, modo);

        inicio += 500;
    }
}

int main() {
    clock_t init, end;
    double time;

    int inicio = 0; 
    char buffer[501]; 
    buffer[500] = '\0';

    // Texto a ser encriptado e desencriptado
    char textoOriginal[8000] = "Texto a ser encriptado e desencriptado";

    printf("Texto original: %s\n", textoOriginal);

    // Encriptar o texto
    init = clock();
    processarTextoWrapper(inicio, buffer, textoOriginal, 0); // 0 indica encriptar
    end = clock();
    time = ((double) (end - init)) / CLOCKS_PER_SEC;
    printf("Texto encriptado: %s\n", textoOriginal);
    printf("Tempo para encriptar: %lf segundos\n", time);

    // Desencriptar o texto
    inicio = 0;
    init = clock();
    processarTextoWrapper(inicio, buffer, textoOriginal, 1); // 1 indica desencriptar
    end = clock();
    time = ((double) (end - init)) / CLOCKS_PER_SEC;
    printf("Texto desencriptado: %s\n", textoOriginal);
    printf("Tempo para desencriptar: %lf segundos\n", time);

    return 0;
}
