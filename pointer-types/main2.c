#include <stdio.h>

int main(){
	char char_array[3] = {'a','b','c'};
	int int_array[3] = {1,2,3};

	char *charp;
	int *intp;

	charp = (char*) int_array;
	intp = (int*) char_array;

	for(int i=0;i<3;i++){
		printf("[integer pointer] | %p | - %c\n",intp,*intp);
		intp = (int*) ((char*) intp+1);
	}

	for(int i=0;i<3;i++){
		printf("[char pointer] | %p | - %d\n",charp,*charp);
		charp = (char*) ((int*) charp+1);
	}
	return 0;
}
