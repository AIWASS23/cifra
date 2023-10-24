#include <stdio.h>
#include <ctype.h>

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

int main() {
    char text[] = "Hello, 123 World!"; // Texto de exemplo

    printf("Texto original: %s\n", text);

    cleanText(text);

    printf("Texto tratado: %s\n", text);

    return 0;
}