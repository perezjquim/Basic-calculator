#include "io_operations.h"

/* Pede ao utilizador a opera��o e executa-a */
void doOperation(char * buffer)
{
	ask(buffer);
	printlnFloat(executeOperation(buffer));
}

/* Executa a opera��o aritm�tica */
float executeOperation(char * buffer)
{
	char * operand1 = getFirstOperand(buffer);
	int operand1_length = strlen(operand1);
	
	if(hasNoOperation(buffer,operand1)) return atof(operand1);
	
	char operator = getOperator(buffer,operand1_length);
	
	buffer += operand1_length+1;
	
	switch(operator)
	{
		case '+':
			return atof(operand1)+executeOperation(buffer);
			break;
		case '-':
			return atof(operand1)-executeOperation(buffer);
			break;
		case '*':
			return atof(operand1)*executeOperation(buffer);
			break;
		case '/':
			return atof(operand1)/executeOperation(buffer);
			break;
		default:
			print(SYNTAX_ERROR);
			break;
	}
	
	return 0;
}

/* Devolve o operador (+ ou - ou * ou /) */
char getOperator(char * buffer, int operator_position) { return buffer[operator_position]; }

/* Devolve 'true' caso o buffer s� contenha um n�mero */
int hasNoOperation(char * buffer, char * operator1) { return strlen(buffer) == strlen(operator1); }

/* Devolve o primeiro operando */
char * getFirstOperand(char * buffer)
{
	char * operand1 = malloc(sizeof(char*) * strlen(buffer));
	int operand1_length = strcspn(buffer,OPERATORS);
	strncpy(operand1,buffer,operand1_length);
	operand1[operand1_length]='\0';
	
	return operand1;
}



	
