#include <stdio.h>
#include <stdlib.h>

unsigned long int factotiel_itteratif(unsigned int n);
unsigned long int factotiel_reccurssive(unsigned int n);

int main(){
	unsigned int n;
	
	printf("Entrer un entier positif: ");
	scanf("%d",&n);
	unsigned long int f1 = factotiel_itteratif(n);
	unsigned long int f2 = factotiel_reccurssive(n);
	
	printf("Le factoriel de %d est %ld.\n",n, f1);
	printf("Le factoriel de %d est %ld.\n",n, f2);
	return 0;
}

unsigned long int factotiel_itteratif(unsigned int n){
	unsigned long int factoriel=1;
	if (n<0){
		printf("ERREUR: Veillez entrer un entier positif\n");
		exit(0);
	}
	else if (n==0){
		factoriel = 1;
	}
	else{
		for (int i=1; i<=n; i++){
			factoriel *= i;
		}
	}
	return factoriel;
}

unsigned long int factotiel_reccurssive(unsigned int n){
	if (n<0){
		printf("ERREUR: Veillez entrer un entier positif\n");
		exit(0);
	}
	else if (n==0){
		return 1;
	}
	else{
		return n*factotiel_reccurssive(n-1);
	}
}
