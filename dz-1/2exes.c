#include <stdio.h>

int i, max, a1, a2, a3, a4;

int main(int argc, char **argv){

	printf("\nВведите 1 число: ");
	scanf("%d",&a1);
	printf("\nВведите 2 число: ");
	scanf("%d",&a2);
	printf("\nВведите 3 число: ");
	scanf("%d",&a3);
	printf("\nВведите 4 число: ");
	scanf("%d",&a4);

	max = a1;
		if(max < a2)
			max = a2;
		if(max < a3)
			max = a3;
		if(max < a4)
			max = a4;
	printf("\nНаибольшее из всех чисел равно: %d\n", max);
return 0;
}
