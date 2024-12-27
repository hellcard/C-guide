#include <stdio.h>
#include <string.h> // for strcpy()

int main(){
	char str_x[20]; // array
	strcpy(str_x,"this is string"); // fills array
	printf(str_x);
	return 0;
}
