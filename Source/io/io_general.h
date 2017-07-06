#include <stdlib.h>
#include <stdio.h>
#include <string.h>

#include "../etc/messages.h"

#define STRING "%s"
#define STRING_LINE "%s\n"
#define FLOAT "%f"
#define FLOAT_LINE "%f\n"
#define BUFFER_SIZE 255
#define ENDLINE "\n"
#define true 1
#define false 0

void showInitialMessage();

char * ask(char * buffer);

void print(char message[]);
void println(char message[]);
void printFloat(float number);
void printlnFloat(float number);