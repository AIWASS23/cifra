#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <time.h>

void encriptar(char *chave, char* texto){
    int chaveLength = strlen(chave); 
    int textoLength = strlen(texto); 
  
    for (int i = 0; i < textoLength; i++) {
        char letraChave = chave[i % chaveLength]; 
        texto[i] = texto[i] > 64 ? (texto[i] + letraChave) % 26 + 65 : texto[i]; 
    }
}

void wrapEncriptar(int inicio, char *buffer) {
    char texto[8000] = "";    
    char chave[20] = "PIZZA"; 

    while (inicio < 8000) { 
        int j = 0; 

        for (int i = 0; i < 500; i++) {
            char c = texto[inicio + i]; 
            if (c == '\0') { break; } 
      
        buffer[i] = c; 

        }
        encriptar(chave, buffer); 
        inicio += 500; 
    }
}

int main() {

    clock_t start_time, end_time;
    double cpu_time_used;

    start_time = clock();

    int inicio = 0; 
    char buffer[501]; 
    buffer[500] = '\0'; 

    printf("Texto encriptado: \n");
    wrapEncriptar(inicio, buffer); 

    end_time = clock();

    cpu_time_used = ((double) (end_time - start_time)) / CLOCKS_PER_SEC;

    printf("\n");

    printf("Tempo de CPU usado: %f segundos\n", cpu_time_used);

    return 0;
}