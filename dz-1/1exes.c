#include <stdio.h>

float rost, ves, kof;

int main(int argc, char **argv){

	printf("Введите рост( например: 1 метр 80 см. = 1.80 ): ");
	scanf("%f", &rost);
	if(rost < 0.5 || rost > 2.4){
		printf("\nЭто аномальный рост!\n");
		return 0;
	}

	printf("\nВведите вес(кг.): ");
	scanf("%f", &ves);
	if(ves < 25 || ves > 200){
		printf("\nЭто аномальный вес!\n");
		return 0;
	}
		
	kof = ves/(rost*=rost);
	printf("\nКоэфициент по формуле I = m / (h * h) равен: %.2f\n", kof);

return 0;
}
