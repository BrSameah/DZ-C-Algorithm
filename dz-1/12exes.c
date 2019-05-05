#include <stdio.h>

int i = 0;
int mas[3] = { 0 };

void func(int *, int);

int main(int argc, char **argv){

	while(i < 3){
		printf("Введите число: ");
		scanf("%d", &mas[i]);
		i++;
	} 
	
	func(mas, 3);

return 0;
}

void func(int *mas, int n){
	int j = *mas;
	for(int i = 0; i < n; i++){
		if(j < *(mas+i))
			j = *(mas+i);
	}

	printf("\nСамое большое число: %d\n", j);
}
