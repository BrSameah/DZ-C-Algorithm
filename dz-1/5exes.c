#include <stdio.h>

int num;

int main(int argc, char **argv){

	printf("Введите номер месяца(1-12): ");
	scanf("%d", &num);
	if(num == 1 || num == 2 || num == 12)
		printf("\nВремя года - зима!\n");
	else if(num == 4 || num == 3 || num == 5)
		printf("\nВремя года - весна!\n");
	else if(num == 6 || num == 7 || num == 8)
		printf("\nВремя года - лето!\n");
	else if(num == 9 || num == 10 || num == 11)
		printf("\nВремя года - осень!\n");
	else
		printf("\nВведен некорректный номер месяца!\n");
return 0;
}
