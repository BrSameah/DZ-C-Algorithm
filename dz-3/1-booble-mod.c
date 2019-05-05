/*
 * Написать алгоритм booble, и подсчитать 
 * кол-во опрераций. Затем оптимизировть
 * его и снова посчитать кол-во операций.
 */

#include <stdio.h>

void printma(int *, int); // вывод массива

int mas [] = { 0, 1, 30, 12, 2, 5, 45, 13, 99, 17 };

int co1 = 0; // Счётчик операций для обычного пузырька
int co2 = 0; // Счётчик операций для продвинутого пузырька

int main(int argc, char **argv){
	int N = sizeof(mas)/sizeof(int);
	printf("\nНесортированный вывод:\n");
	 printma(mas, N);

/* Обычный пузырек */
	int i, j, k, to;
	for(i = 0; i < N; i++){
		for(j = 0, k = 1; k < N; j++, k++){
			if(*(mas+j) > *(mas+k)){
				to = *(mas+j);
				*(mas+j) = *(mas+k);
				*(mas+k) = to;
			} co1++;
		}
	}
	printf("\nКоличество операций обычного booble: %d\n", co1);
	printma(mas, N);

/* Продвинутый пузырек */
	
	for(i = 0; i < (N - i); i++){
		for(j = 0, k = 1; k < (N - i); j++, k++){
			if(*(mas+j) > *(mas+k)){
				to = *(mas+j);
				*(mas+j) = *(mas+k);
				*(mas+k) = to;
			} co2++;
		}
	}
	printf("\nКоличество операций для booble+ %d\n", co2);
	printma(mas, N);


return 0;
}

void printma(int *x, int n){
	int i = 0;
	// printf("N = %d\n", n);
	while(i < n){
		printf("%d ", *(x+i++));
	}
	printf("\n");
}

