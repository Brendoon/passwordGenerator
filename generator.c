#include <stdio.h>
//testte
//tabela ascii (a..z)  = 97..122
//(A..Z) = 65..90
//(0..9) = 48..57
//Obrigado
int main()
{

	int pw[36];


	int j=0, x=0; 

	for (j = 97; j <= 122; j++)
	{
		pw[x] = j;
		x++;
	}

	for (j = 48; j<= 58; j++)
	{
		pw[x] = j; 
		x++;
	}


	int pwlen = 0,   upper = 2; //seting non-uppercase as default


	printf("Enter Password length: ");
	scanf("%d", &pwlen);



/*	printf("Deseja usar letras maiusculas:\n1-Sim\n2-Não\n\n "); 
	scanf("%d", &upper);  */ 

	printf("Your password generated is: ");

	int count, i;

	srand ( time(NULL) );
	for( count = 0; count <= pwlen  ;  count++){ 

		i = rand() % 36;
		printf("%c",pw[i]); 
	}
	printf("\n");
	for(i=0; i<=36; i++)
	{
		printf("%c ",pw[i]);
	}
	return 0;

}
