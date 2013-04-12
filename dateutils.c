#include "dateutils.h"
#include "tools.h"
#include <stdio.h>

int getDate(char * date, int * D, int * M, int * Y)
{
	char input[23];
	int i = 0;
	int j = 0;
	
	
	printf(date);
	
	scanf("%22[^\n]", input);
	printf(input);
	while(* date)
	{
		if (*(input + i) == '.')
		{
			j++;
			switch(j)
			{
				case 1:  D = input + i + 1;	break;
				case 2:	M = input + i + 1;	break;
				case 3:	Y = input + i + 1;	break;
			}
		}
		i++;
	}
	
	if (* Y + 4 != '\n')
		return 0;
	else
		return 1;
}

int isLeapYear(int Y)
{
	if(jahr % 400 == 0)
		return 1;
	else if (jahr % 4 == 0 && jahr % 100 != 0)
		return 1;
	else
		return 0;
}

int isDateValid(int * D, int * M. int * Y)
{
	if(* D < 1 || * Y < 1582)
		return 0;
	
	if(!(isLeapYear(* Y)))
		if(* M == 2)
			if(* D == 29)
				return 0;
	
	return 1;
		
}