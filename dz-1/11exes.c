#include <stdio.h>

int val = 1;
int j = 0;
int i = 0;
int k = 0;
int main(int argc, char **argv){

	while(val != 0){
		printf("Введите число.(Введите 0 для окончания ввода чисел): ");
		scanf("%d", &val);
		i = val % 10;
		if(i == 8){
		k+=val;	
		j++;
		}
	}	
	
	printf("\nСреднее арифметическое четных, с 8, равно: %.2f\n ", (float)(k/j));
	
return 0;
}
