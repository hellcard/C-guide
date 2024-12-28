#include <stdio.h>

int main(){
	char carray[3] = {'a','b','c'};
	int iarray[3] = {1,2,3};

	void *voidp; // univarsal pointer

	voidp = (void*) carray;

	for(int i=0;i<3;i++){
		printf("[char pointer] | %p | - %c\n",voidp,*((char*) voidp));
		voidp = (void*) ((char*) voidp+1);
	}

	voidp = (void*) iarray;

	for(int i=0;i<3;i++){
		printf("[integer pointer] | %p | - %d\n",voidp,*((int*) voidp));
		voidp = (void*) ((int*) voidp+1);
	}

	return 0;
}
