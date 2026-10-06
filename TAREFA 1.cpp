#include <stdio.h>
#include <math.h>
#include <cmath>

int main (){
	float a;
	float b;
	float c; 
	printf("Bem vindo, Voce ira calcular as raizes de uma equacao de segundo grau, por favor escolha os valores de A, B, e C respectivamente.\n PS: colocar em decimal caso necessario");	
	printf("\nValor de A: ");
	scanf("%f" , &a);
	printf("\nValor de B: ");
	scanf("%f" , &b);
	printf("\nValor de C: ");
	scanf("%f" , &c);
		if (a == 0 or b == 0 or c == 0)
		printf("\nInvalido xDDD");	
		else{
		float delta;
		delta = (pow(b , 2)- 4 * a * c);
		printf("Valor de delta: %.2f" , delta);
		float raizdelta;
		raizdelta = (sqrt(delta));
		float raizum;
		raizum = (-(b) + raizdelta );
		printf("A primeira raiz eh "%.2f " ,raizum)
		}
}
