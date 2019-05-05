#include <stdio.h>

int num = 20; 
int val = 3; 
int sum = 0; // количество полученых значений = 20
int funk =0; // число запущеных рекурсивных функций

void recurs(int);

int main(int argc, char **argv){

	printf("\n* * Умножить на 2 или прибавить 1 * *\n");
	recurs(val);
	printf("\nЧисло програм равных числу %d, будет: %d. Всего запущеных функций %d\n",num, sum, (funk+sum));


return 0;
}

void recurs(int x){
	if(x > num )
		funk++;
	else if(x == num ){
			sum++;
		}
	else{
		int tmp = x;
		int y = 0;
		x += 1;
		recurs(x);
		tmp *= 2;
		y = tmp;
		recurs(y);
	}
}
