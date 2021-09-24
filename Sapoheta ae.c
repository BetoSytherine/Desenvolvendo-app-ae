#include <stdio.h>


int main()
{
    int paginas, horas;

   char nome[50];

   printf("\nAntes de comecarmos, qual o seu nome?\n ");
   scanf("%s", nome);

   printf("\nMuito bem, Entao %s vamos comecar\n", nome);

    printf("\nEae, espero poder te ajudar na sua leitura diaria, vamos la?\n");
    printf("\nQuantas paginas voce leu hoje? ");
    scanf("%d", &paginas);

if(paginas >=  10){

    printf("\nParabens continue buscar aprender mais e mais, ler eh fundamental para o seu crescimento.\n ");
}


else if( paginas <= 9 ){

    printf("\nEu acredito que voce consegue superar seus obstaculos\n");
}



printf("\nDigite 1 se voce esta lendo %d em UMA HORA ou MAIS, e 2 se voce esta lendo %d paginas em MENOS DE UMA HORA:", paginas, paginas);
scanf("%d", &horas);


if(horas >2, horas++){

printf("\nOpcao invalida, deigite apenas 1 se voce esta lendo %d em UMA HORA ou MAIS, ou 2 se voce esta lendo %d paginas em MENOS DE UMA HORA:", paginas, paginas);
scanf("%d", &horas);
}
switch (horas){
case 1:
printf("AEEEE");
break;

case 2:
printf("OPOHA");
break;
default:
printf("\nOpcao invalida, deigite apenas 1 se voce esta lendo %d em UMA HORA ou MAIS, ou 2 se voce esta lendo %d paginas em MENOS DE UMA HORA:", paginas, paginas);
scanf("%d", &horas);

}


    return 0;
    }









