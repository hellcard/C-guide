#include <stdio.h>
#include <stdlib.h> // for exit()

void exit_error_less(char *nameprog){
	printf("Error: Pass a number equal 2 | %s use args less than 2\n",nameprog);
	exit(1);
}
void exit_error_more(char *nameprog){
	printf("Error: Pass a number equal 2 | %s use argc more than 2\n",nameprog);
	exit(1);
}

int main(int argc, char *argv[]){
	int repeat;

	if(argc<2){
		exit_error_less(argv[0]);
	}
	else if(argc>3){
		exit_error_more(argv[0]);
	}

	repeat = atoi(argv[2]);

	printf("type the %s %d times\n",argv[1],repeat);

	for(int i=0;i<repeat;i++){
		printf("%3d - %s\n",i+1,argv[1]);
	}
	return 0;
}
