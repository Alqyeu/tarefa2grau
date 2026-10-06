#include <stdio.h>
#include <math.h>
#include <cmath>

int main() {
	float a;
	float b;
	float c;
	printf("Bem vindo, Voce ira calcular as raizes de uma equacao de segundo grau, por favor escolha os valores de A, B, e C respectivamente.");
	printf("\nValor de A: ");
	scanf("%f", &a);
	printf("\nValor de B: ");
	scanf("%f", &b);
	printf("\nValor de C: ");
	scanf("%f", &c);
	if (a == 0)
		printf("\nInvalido xDDD");
	else {
		float delta;
		delta = (pow(b, 2) - 4 * a * c);
		printf("\nValor de delta: %.2f ", delta);
		if (delta < 0)
			printf("\nNão existem raizes reais nesta equacao");
		else if (delta == 0) {
			printf("\nExiste apenas 1 raiz nesta equacao");
			float raizdelta;
			raizdelta = sqrt(delta);
			float numerador;
			float denominador;
			float x1;
			numerador = -(b)+raizdelta;
			denominador = 2 * a;
			x1 = numerador / denominador;
			printf("\nA raiz desta equação eh %.2f ", x1);
		}
		else {
			float raizdelta;
			float numeradorpos;
			float numeradorneg;
			float denominador;
			float x1;
			float x2;
			raizdelta = sqrt(delta);
			numeradorpos = -(b)+raizdelta;
			denominador = 2 * a;
			x1 = numeradorpos / denominador;
			numeradorneg = -(b)-raizdelta;
			x2 = numeradorneg / denominador;
			printf("\nAs raizes desta equacao sao %.2f x1 e %.2f x2 ", x1, x2);
		}
	}
	return 0;
}