#include <stdio.h>
int mnoz(int a,int b) 
	{
	return a*b;
	}
int dodaj(int a, int b)
	{
	return a+b;
	}

int main(void)
{
	int a=2, b=5;
	char wybor='*';
	if(wybor =='*')
	{
	printf("Wynik mnozenia: %i\n", mnoz(a,b));
	}
	else
	{
	printf("Wynik dodawania: %i\n", dodaj(a,b));
	};
	return 0;
}

