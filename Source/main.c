#include "io/io_general.h"
#include "io/io_operations.h"

/***** MAIN *****/
int main()
{	
	char buffer[BUFFER_SIZE];									// Buffer usado em todo o programa (para o input)
	
	showInitialMessage();
	
	while(1) { doOperation(buffer); }							// S�o efetuadas as opera��es pedidas pelo utilizador
	
	return 0;													// Fim do programa
}