#include <stdio.h>

int main(){
	int i;
	
	char char_array[3] = {'a','b','c'};
	int int_array[3] = {1,2,3};
	
	char *char_point;
	int *int_point;
	
	char_point = char_array;
	int_point = int_array;
	
	for(i=0;i<3;i++){
		printf("[integer pointer] | %p | - %d\n",int_point,*int_point);
		int_point+=1;
	}
	for(i=0;i<3;i++){
		printf("[char pointer]    | %p | - %c\n",char_point,*char_point);
		char_point+=1;
	} 
	return 0;
}
