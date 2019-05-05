#include <stdio.h>

int a, b, c;

int main(int argc, char **argv){

	printf("Введите целое значение для а: ");
	scanf("%d", &a);
	printf("Введите целое значение для b: ");
	scanf("%d", &b);
	printf("Меняем местами\n");
	c = a;
	a = b;
	b = c;
	printf("Результат: a = %d, b = %d\n", a, b);
	printf("Меняем обратно(без переменной с)\n");
	
	a=a^b;
	b=a^b;
	a=a^b;
	printf("Результат возврата: a = %d, b = %d\n", a, b);


return 0;
}
