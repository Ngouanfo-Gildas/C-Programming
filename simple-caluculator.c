#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]){
	
	float num1, num2, result;
	char op;
	
	printf("\nEnter a number : ");
	scanf("%f", &num1);
	printf("\nEnter an operator : ");
	scanf(" %c", &op);
	printf("\nEnter another number : ");
	scanf("%f", &num2);
	
	if (op == '+'){
		result = num1 + num2;
	} else if (op == '-'){
		result = num1 - num2;
	} else if (op == '*'){
		result = num1 * num2;
	} else if (op == '/'){
		result = num1 / num2;
	} else {
		printf("Error: Invalid operator\n");
		exit(0);
	}
	printf("\n%f %c %f = %f\n",num1,op,num2,result);
	return 0;
}


