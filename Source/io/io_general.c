#include "io_general.h"

/* Mostra uma mensagem ao abrir o programa */
void showInitialMessage() { println(INITIAL_MESSAGE); }

/* Serve para pedir a opção a ser seleccionada (seja pelo ficheiro ou pelo utilizador) */
char * ask(char * buffer) { return fgets(buffer,BUFFER_SIZE,stdin); }

/* Display de uma mensagem, label ou de uma opção */
void print(char message[]) {  printf(STRING,message);  }
void println(char message[]) { printf(STRING_LINE,message); }
void printFloat(float number) { printf(FLOAT,number); }
void printlnFloat(float number) { printf(FLOAT_LINE,number); }