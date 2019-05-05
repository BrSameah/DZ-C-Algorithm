#include <stdio.h>

int val = 3;
int step = 4;
int j, i = 0, g, bo;

void stepen(int); // Цикл
void recurs(int, int); // Рекурсия

int main(int argc, char **argv){

	stepen(val);
	bo = val;
	recurs(val, i);

return 0;
}

void stepen(int x){
	int tmp = x;
	for(j = 1; j <= (step-1); j++)
		x *= tmp;
	printf("\nЗначение %d в степени %d равно: %d\n", val, step, x);
}

void recurs(int y, int i){
	 if(i == (step-1))
		 printf("\nРекурсивно, значение %d степени %d, равно: %d\n", val, step, g);
	 else{	 
		y *= bo;
		g = y;
		i++;
		recurs(y, i);
	 }

}
