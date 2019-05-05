#include <stdio.h>

int i, num1, num2;

int main(int argc, char **argv){

	printf("Введите 1 число: ");
	scanf("%d",&num1);
	printf("Введите 2 число: ");
	scanf("%d",&num2);

	if(num2 < num1){
	num1 = num1^num2;
	num2 = num1^num2;
	num1 = num1^num2;
	}
	
	printf("\nВывод квадратов и кубов от %d до %d:\n ", num1, num2);
	
	i = num1;
	while(i >= num1 && i <= num2){
		printf("Квадрат %d: %d, Куб %d: %d\n",i,(i*i),i,(i*i*i));
		i++;
	}



return 0;
}
