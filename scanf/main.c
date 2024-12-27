#include <stdio.h>
#include <string.h>

int main(){
	char word[40];
	int count;
	printf("Enter word: "); scanf("%s", &word);
	printf("Enter count: "); scanf("%d", &count); printf("---\n");
	for(int i=0; i<count; i++){ printf("%3d - %s\n",i+1,word); } printf("---");
	return 0;
}
