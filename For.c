#include <stdio.h>
#include <stdlib.h>

int main(){
	
	//**Estrutura de repeticao For
	
	//**Ex 1 For
	
	int cont;
 	float n1, n2, n3, m;
 
  	for (cont = 1; cont <= 5; cont++) {  
 
    printf ("Digite 3 notas \n");
    scanf ("%f%f%f", &n1, &n2, &n3);
    m = (n1 + n2 + n3) /3;
    printf ("Media: %.2f\n", m); 
   }
   
   //** Ex 2 For
   
   int cont1, N, soma;
   soma = 0;
   printf ("Digite o valor de N:");
   scanf ("%d", &N);
 
   for (cont1 = 1; cont1 <= N; cont1++) {  
 
    soma = soma + cont1; 
   
  }
 
   printf ("Somatorio: %d\n", soma);
   system ("PAUSE");
}
