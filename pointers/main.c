#include <stdio.h>
#include <string.h>

int main(){
	char str_x[25];
	char *point_1;
	char *point_2;
	strcpy(str_x,"just string\n");

	point_1 = str_x;
	printf(point_1); // pointer 1
	point_2 = point_1 + 3;
	printf(point_2); // pointer 2 = pointer 1 + 3

	strcpy(point_2," another str\n");
	printf("After strcpy:\n");
	printf(point_1); // pointer 1
	printf(point_2); // pointer 2
	printf(str_x); // string
	return 0;
}
