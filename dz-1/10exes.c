#include <stdio.h>

long int num;
int result = 0;

int main(int argc, char **argv){

	printf("\nВведите число: ");
	scanf("%ld", &num);
	
	while (num > 0){
	result =  (num % 10);
	printf("%d ", result);
	num = (num / 10);
	result = result % 2; 
	if(result)
		printf("Нечетное!\n");
	else
		printf("Четное!\n");

	}


return 0;
}
