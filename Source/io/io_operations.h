#include <stdlib.h>
#include <stdio.h>
#include <string.h>

#include "io_general.h"
#include "../etc/messages.h"

#define STRING "%s"
#define STRING_LINE "%s\n"
#define BUFFER_SIZE 500
#define ENDLINE "\n"
#define true 1
#define false 0
#define OPERATORS "+-*/"

void doOperation(char * buffer);
float executeOperation(char * buffer);

char getOperator(char * buffer, int operator_position);
int hasNoOperation(char * buffer, char * operator1);

char * getFirstOperand(char * buffer);