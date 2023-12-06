/*
 * Aplicação de Criptografia e Descriptografia de Texto
 *
 * Copyright (c) 2023 Marcelo De Araújo and Davison Lucas Mendes Viana
 * 
 * Permission is hereby granted, free of charge, to any person obtaining a copy 
 * of this software and associated documentation files (the "Software"), to deal
 * in the Software without restriction, including without limitation the rights 
 * to use, copy, modify, merge, publish, distribute, sublicense, and/or sell 
 * copies of the Software, and to permit persons to whom the Software is 
 * furnished to do so, subject to the following conditions: 
 * The above copyright notice and this permission notice shall be included in all 
 * copies or substantial portions of the Software. 
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR 
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY, 
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE 
 * AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER 
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM, 
 * OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.

 * Contato: marcelo.araujo02@aluno.ifce.edu.br
 *
 * Este programa permite formatar, encriptar e desencriptar texto com base em uma chave de criptografia.
 * O código é desenvolvido como parte de um trabalho acadêmico da disciplina Sistemas Embarcados
 * no Instituto Federal do Ceará - Campus Fortaleza e tem como objetivo demonstrar conceitos de 
 * programação para embarcados.
 *
 * Modo de Uso:
 * gcc cifraDeVigenereArquivos.c -o cifra
 * ./cifra
 *
 * Entradas:
 * - Nenhuma entrada interativa; o texto é manipulado internamente no código.
 * 
 * Saídas:
 * - Texto original formatado.
 * - Texto encriptado.
 * - Texto desencriptado.
 *
 * Autores/Estudantes:
 * - Marcelo de Araújo
 * - Davison Lucas Mendes Viana
 *
 * Data de Desenvolvimento: 06/11/2023 - 27/11/2023
 *
 * Contexto do Desenvolvimento:
 * - Disciplina: Sistemas Embarcados
 * - Professor: Dr. Elias Teodoro da Silva Junior
 * - Universidade: Instituto Federal do Ceará - Campus Fortaleza
 * - Plataforma Alvo: MbedOS
 *
 */

#include <stdio.h>
#include <string.h>
#include <ctype.h>

void exibirTextoOriginalFormatado(int inicio, char *buffer) {
    char texto[8000] = "";
    char chave[20] = "PIZZA";

    while (inicio < 8000) {

        int j = 0;

        for (int i = 0; i < 500; i++) {

            char c = texto[inicio + i];

            if (c == '\0') {
                break; // Fim do vetor
            }

            if(c != ' ') { 
                buffer[j] = toupper(c);
                j++;
            }
        }

        buffer[j] = '\0';
        printf("%s", buffer);
        inicio += 500; //Incrementa o inicio da parte
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
        texto[i] = texto[i] > 64 ? (texto[i] - letraChave + 26) % 26 + 65 : texto[i];
    }
}


void wrapEncriptar(int inicio, char *buffer){
    char texto[8000] = "";    
    char chave[20] = "PIZZA";

    while (inicio < 8000) {

        int j = 0;

        for (int i = 0; i < 500; i++) {

            char c = texto[inicio + i];

            if (c == '\0') {
                break; // Fim do vetor
            }
      
        buffer[i] = c;

        }
        encriptar(chave, buffer);
        printf("%s", buffer); // Imprimir parte na porta serial
        inicio += 500; //Incrementa o inicio da parte
    }

}

void wrapDesencriptar(int inicio, char *buffer){
    char textoDes[8000] = "";    
    char chave[20] = "PIZZA";

    while (inicio < 8000) {
        for (int i = 0; i < 500; i++) {

            char c = textoDes[inicio + i];
            if (c == '\0') {
                break; // Fim do vetor
            }
            buffer[i] = c;
        }
        desencriptar(chave, buffer);
        printf("%s", buffer); // Imprimir parte na porta serial
        inicio += 500; //Incrementa o inicio da parte
    }
}

void esvaziarMem(){
    char c[8000];

    for (int i = 0; i <= 8000; i++){
        c[i] = ' ';
    }
}

int main() {

    int inicio = 0; // da parte
    char buffer[501]; // +1 para o caractere nulo
    buffer[500] = '\0'; // Garanta que a string seja terminada corretamente

    printf("Texto inicial formatado: \n");
    exibirTextoOriginalFormatado(inicio, buffer);
  
    printf("\n");

    printf("Texto encriptado: \n");
    wrapEncriptar(inicio, buffer);
    esvaziarMem();

    printf("\n");

    printf("Texto desencriptado: \n");
    wrapDesencriptar(inicio, buffer);
    return 0;
}