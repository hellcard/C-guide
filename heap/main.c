#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void *errorcheck(unsigned int);

int main(int argc, char *argv[]){
	char *charp;
	int *intp;
	int memory_size;

	if(argc<2) memory_size = 70;
	else memory_size = atoi(argv[1]);

	printf("%d bytes are divided in the heap for variable [charp]\n",memory_size);
	charp = (char*) errorcheck(memory_size);

	strcpy(charp,"hello, this memory in the heap");
	printf("[charp] | %p | - %s\n",charp,charp);

	printf("12 bytes are divided in the heap for variable [intp]\n");
	intp = (int*) errorcheck(12);

	*intp = 1337;
	printf("[intp] | %p | - %d\n",intp,*intp);

	printf("heap memory for variable [intp] has been removed\n");
	free(intp);

	printf("another 15 bytes are allocated for the variable [charp]\n");
	charp = (char*) errorcheck(15);

	strcpy(charp,"new memory");
	printf("[charp] | %p | - %s\n",charp,charp);

	printf("[charp & intp] heap memory has been removed\n"); 
	free(charp);
	return 0;
}
void *errorcheck(unsigned int size){
	void *ptr;
	ptr = malloc(size); // use for create heap
	if(ptr==NULL){
		fprintf(stderr,"ERROR: memory cannot be allocated on the heap\n");
		exit(1);
	}
	return ptr;
}
