#include <stdio.h>

int val = 221;
int mas[16] = {0};
int i = 0;

void dvoich(int);

int main(int argc, char **argv){
	
	dvoich(val);
	printf("\nРезультат переревода числа %d, будет: ", val);
	for(; i >= 0 ; i--)
		printf("%d",mas[i]);
		printf("\n");
return 0;
}

void dvoich(int x){
	if(x == 1){
		mas[i] = 1;
	}
	else if(x == 0)
		mas[i] = 0;
	
	else{
		mas[i] = x % 2;
		i++;
		x /= 2;
		dvoich(x);	
	}
}
