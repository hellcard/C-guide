#include <stdio.h>

int main(){
	int a = 5;
	int *p=&a;
	printf("%p\n",p);
	printf("%d\n",a);
	*p=10;
	printf("%p\n",p);
	printf("%d\n",a);
	printf("%d\n",*p);
	return 0;
}
