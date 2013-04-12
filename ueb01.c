#include <stdio.h>
#include "dateutils.h"
#include "tools.h"

int main()
{
	int D,M,Y;
	do
	{
		//clearScreen();
		if (getDate("Geben Sie bitte ein gueltiges Datum ein: ", &D, &M, &Y))
			printf("Das Datum %02i.%02i.%04i ist gueltig!\n", D, M, Y);
		else
			printf("Das eingegebene Datum ist ungueltig!\n");
	} while (askAgain());
		
	return 0;
}