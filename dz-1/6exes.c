#include <stdio.h>

int num, i;
int mas[] = { 1, 21, 31, 41, 51, 61, 71, 81, 91, 101, 121, 131, 141 };
int mas2[] = {2,3,4,22,23,24,32,33,34,42,43,44,52,53,54,62,63,64,72,73,74,82,83,84,92,93,94,102,103,104,122,123,124,132,133,134,142,143,144};

int main(int argc, char **argv){
	printf("Введите возраст человека(от 1 до 150 лет): ");
	scanf("%d", &num);

	if ((num < 1) || (num > 150)){
		printf ("\nВведен неверный возраст!\n");
		return 1;
	} 
	
	else  { 		
		for(i = 0; i < 12; i++){	
	       		if(num == mas[i]){
	       		printf("\nВозраст %d год!\n", num);
	       		return 0;
	       		}
		}

		for(i = 0; i < sizeof(mas2)/sizeof(int); i++){
			if(num == mas2[i]){
				printf("\nВозраст %d года!\n", num);
				return 0 ;
			}
		}
		printf("\nВозраст %d лет!\n", num);
	}	
	
return 0;
}
