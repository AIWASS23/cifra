#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <time.h>
//#include "mbed.h"

void exibirTextoOriginalFormatado(int inicio, char *buffer) {
    char texto[8000] = "";
    char chave[20] = "PIZZA"; 

    while (inicio < 8000) { 
        int j = 0; 

        for (int i = 0; i < 500; i++) {

            char c = texto[inicio + i]; 

            if (c == '\0') { break; } 

            if(c != ' ') {  
                buffer[j] = toupper(c); 
                j++;
            }
        }
        buffer[j] = '\0'; 
        printf("%s", buffer); 
        inicio += 500; 
    }
}

void encriptar(char *chave, char* texto){
    int chaveLength = strlen(chave); 
    int textoLength = strlen(texto); 
  
    for (int i = 0; i < textoLength; i++) {
        char letraChave = chave[i % chaveLength]; 
        texto[i] = texto[i] > 64 ? (texto[i] + letraChave) % 26 + 65 : texto[i]; 
    }
}

void desencriptar(char *chave, char *texto){
    int chaveLength = strlen(chave); 
    int textoLength = strlen(texto); 
  
    for (int i = 0; i < textoLength; i++) {
        char letraChave = chave[i % chaveLength]; 
        // if flag
        texto[i] = texto[i] > 64 ? (texto[i] - letraChave + 26) % 26 + 65 : texto[i]; 
    }
}

void wrapEncriptar(int inicio, char *buffer) {
    //Timer tempo;
    char texto[8000] = "";
    char chave[20] = "PIZZA"; 

    //tempo.start();
    clock_t init, end;
    double time;
    init = clock();
    while (inicio < 8000) { 
        int j = 0; 

        for (int i = 0; i < 500; i++) {
            char c = texto[inicio + i]; 
            if (c == '\0') { break; } 
      
        buffer[i] = c; 

        }
        
        encriptar(chave, buffer); 
        
        //printf("%s", buffer); 
        inicio += 500; 
    }
    end = clock();
    //tempo.stop();
    //printf("\nTEMPO encriptar Mbed:\n%lld microsegundos",tempo.read_high_resolution_us());
    time = ((double) (end - init)) / CLOCKS_PER_SEC;
    printf("\nTEMPO: emcriptar \n%lf segundos",time);

}

void wrapDesencriptar(int inicio, char *buffer) {
    //Timer tempo;
    char textoDes[8000] = "";    
    char chave[20] = "PIZZA"; 

    //tempo.start();
    clock_t init, end;
    double time;
    init = clock();
    while (inicio < 8000) { 
        for (int i = 0; i < 500; i++) {

            char c = textoDes[inicio + i]; 
            if (c == '\0') { break; } 
            buffer[i] = c; 
        }
        
        desencriptar(chave, buffer); 
        
        //printf("%s", buffer); 
        inicio += 500; 
    }
    end = clock();
    //tempo.stop();
    //printf("\nTEMPO desencriptar Mbed:\n%lld microsegundos",tempo.read_high_resolution_us());
    time = ((double) (end - init)) / CLOCKS_PER_SEC;
    printf("\nTEMPO: desemcriptar \n%lf segundos",time);
}

void esvaziarMem(){
    char c[8000]; 
    for (int i = 0; i <= 8000; i++) { c[i] = ' '; } 
}

int main() {

    clock_t init, end;
    double time;
    //Timer tempo;

    int inicio = 0; 
    char buffer[501]; 
    buffer[500] = '\0'; 
//--------------------------------------------------------------------------------------------------------------------
    //printf("Texto inicial formatado: \n");
    //exibirTextoOriginalFormatado(inicio, buffer);
  
    //printf("\n");
//---------------------------------------------------------------------------------------------------------------------
    //printf("Texto encriptado: \n");
    //tempo.start();
    init = clock();

    wrapEncriptar(inicio, buffer); 


    //esvaziarMem(); 

    printf("\n");

    //printf("Texto desencriptado: \n");
    wrapDesencriptar(inicio, buffer); 

    end = clock();
    //tempo.stop();

    printf("\n");

    time = ((double) (end - init)) / CLOCKS_PER_SEC;
    printf("\nTEMPO:\n%lf segundos",time);
    //printf("\nTEMPO main Mbed:\n%lld microsegundos",tempo.read_high_resolution_us());
    return 0;
}