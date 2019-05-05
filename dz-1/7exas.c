#include <stdio.h>

char mas[8][8] = {0};

int x1,x2,y1,y2;

int main(int argc, char **argv){

	mas[0][0] = "Черный";

	for(int i = 0; i < 8; i++ ){
		for(int j = 0; j < 8; j++){
			if(mas[i][j] == "Черный")
				mas[i][j+1] = "Белый";
			else
				mas[i][j+1] = "Черный";
		}
	}
/*
	printf("Введите координату 'х' для 1 поля: ");
	scanf("%d", &x1);
	printf("Введите координату 'y' для 1 поля: ");
	scanf("%d", &y1);
	printf("Введите координату 'х' для 2 поля: ");
	scanf("%d", &x2);
	printf("Введите координату 'y' для 2 поля: ");
	scanf("%d", &y2);
*/
	printf("%s\n", mas[1][1]);

	/*
	if(mas[x1][y1] == mas[x2][y2])
		printf("Поля совпадают! Цвет- %s\n", mas[x1][y1]);
	else
		printf("Цвета разные!\n");
	*/
return 0;
}
