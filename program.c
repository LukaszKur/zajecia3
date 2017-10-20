#include <stdio.h>
int mnoz(int a,int b) 
	{
	return a*b;
	}
int dodaj(int a, int b)
	{
	return a+b;
	}
int odejmij(int a, int b)
	{
	return a-b;
	}
int dziel(int a, int b)
	{
	if (b==0)
	{
	printf("Nie dziel cholero przez zero :)\n");
	}
	else
	{
	return a/b;
	}
	}
int main(void)
{
	int a=5, b=2;
	char wybor;
	scanf("%c", &wybor);
	if(wybor =='*')
	{
	printf("Wynik mnozenia: %i\n", mnoz(a,b));
	}
	else
	{
		if(wybor =='+')
		{
		printf("Wynik dodawania: %i\n", dodaj(a,b));
		}
		else
		{
			if(wybor =='-')
			{
			printf("Wynik odejmowania: %i\n",odejmij(a,b));
			}
			else
			{
				if(wybor =='/')
                        		{
                        		printf("Wynik dzielenia: %i\n",dziel(a,b));
					}
				else
				{
				printf("Dokonano niewlasciwego wyboru! \n");
				}
			}
		}
	};
return 0;
}

