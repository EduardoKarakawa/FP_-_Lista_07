#include <stdio.h>
#include <stdlib.h>

int main() {
	int mImp=0, ant, x;
	bool p = true;
	do {
		printf("Digite um numero inteiro:");
		scanf_s("%d", &x);
		ant = x;
		if ((ant % 2) == 1) {
			if (p) {
				mImp = ant;
				p = false;
			}
			else if(ant<mImp){
				
				mImp = ant;
			}
		}
	} while (((ant%2) != 0) || (x!=0));
	printf("O menor numero impar digitado foi %d\n", mImp);
	system("pause");
	return 0;
}