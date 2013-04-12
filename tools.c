#include <stdio.h>
#include "tools.h"
//#include "escapesequenzen.h"

/*int InputOutput(int *Zeichenzaehler, unsigned char *Texteingabe)
{
	int i = 0;													//Counter um alle Positionen des strings durchzugehen
	int j = -1;													//Counter um alle ASCII-Zeichen auf auftreten im Zeichenzaehler zu pruefen
	int k =  0;													//Counter um die Zeilenumbrueche der Ausgabe-Tabelle zu steuern
	int r =  0;

	while (*(Texteingabe + i))
	{
		if(*(Texteingabe + i) >= 'A' && *(Texteingabe + i) <= 'Z')
		{
			*(Zeichenzaehler + *(Texteingabe + i) + 32) = *(Zeichenzaehler + *(Texteingabe + i) + 32) + 1;
			//Zeichenzaehler[Texteingabe[i]+32] = Zeichenzaehler[Texteingabe[i]+32] + 1;
		}

		else
		{
			*(Zeichenzaehler + *(Texteingabe + i)) = *(Zeichenzaehler + *(Texteingabe + i)) + 1;
			//Zeichenzaehler[Texteingabe[i]] = Zeichenzaehler[Texteingabe[i]] + 1;
		}
		i++;
	}
	*(Zeichenzaehler + *(Texteingabe + i)) = 0;

	printf("\nAnzahl der Zeichen:\n");
	printf("-------------------------------------------------------------\n");

	while (++j <= 256)
	{
		if (*(Zeichenzaehler + j) != -1 && j != 0 && j != 10)
		{
			if (j <= 32)
			{
				printf("|   (%#.2x): %2i ", j, *(Zeichenzaehler + j) + 1);
			} else
			{
				printf("| %c (%#.2x): %2i ", j, j, *(Zeichenzaehler + j) + 1);
			}
			k++;
			if (!(k % 4))
			{
				printf("|\n");
				k = 0;
				r++;
			}
		}
	}

	if (k > 0)
	{
		for ( ; k < 4; k++)
			printf("|              ");
		printf("|\n");
		r++;
	}

	printf("-------------------------------------------------------------\n");

	return r;

}*/

int askAgain()
{
	int weiter;
	int auswahlGetroffen;
	char eingabe;

	do
	{
		printf("Möchten Sie noch einmal j/n ");
		auswahlGetroffen = scanf("%c", &eingabe);

		if( eingabe!='\n')
		{
			clearBuffer();
		}
		if(!auswahlGetroffen)
		{
			printf("Sie haben nicht j oder n eingegeben");
		}
		else
		{
			switch (eingabe)
			{
				case 'j':
				case 'J':
				    weiter = 1; break;

				case 'n':
				case 'N':
				    weiter = 0; break;

				default:
					auswahlGetroffen = 0;
			}
		}
	} while (!auswahlGetroffen);
	return weiter;
}

void clearBuffer()
{
	char Dummy;
	do
	{
		scanf("%c", &Dummy);
	} while (Dummy != '\n');

}
