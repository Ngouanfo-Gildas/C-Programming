#include <stdio.h>
#include <stdlib.h>
#include <math.h>

struct EquationD2{
	float coefA;
	float coefB;
	float coefC;
};

void solveEquation(struct EquationD2 equa){
	float sol1 = 0.0;
	float sol2;
	double disc = 0.0;
	disc = equa.coefB*equa.coefB - 4*equa.coefA*equa.coefC;	
	if (disc < 0){
		printf("L'équation %.1fX^2 + %.1fX + %.1f = 0 n'a pas de solution réelle, car le discriminant est négatif.\n", equa.coefA, equa.coefB, equa.coefC);
	} else if (disc == 0){
		sol1 = (-1)*equa.coefB / 2*equa.coefA;
		printf("L'équation %.1fX^2 + %.1fX + %.1f = 0 a une unique solution:\n\t S = {%.1f}\n", equa.coefA, equa.coefB, equa.coefC, sol1);
	} if (disc > 0){
		sol1 = (-1)*equa.coefB - sqrt(disc) / 2*equa.coefA;
		sol2 = (-1)*equa.coefB + sqrt(disc) / 2*equa.coefA;
		printf("L'équation %.1fX^2 + %.1fX + %.1f = 0 a deux solutions distinctes:\n\t S = {%.1f et %.1f}\n", equa.coefA, equa.coefB, equa.coefC, sol1, sol2);
	}
}

int main (int argc, char *argv[]){
	struct EquationD2 equa1;
	
	printf("We are going to resolve degree 2 equation: Ax^2 + Bx + C = 0\n");
	printf("Enter coeficient A : ");
	scanf("%f",&equa1.coefA);
	
	printf("Enter coeficient B : ");
	scanf("%f",&equa1.coefB);
	
	printf("Enter coeficient C : ");
	scanf("%f",&equa1.coefC);
	
	solveEquation(equa1);
	
	return 0;
}
