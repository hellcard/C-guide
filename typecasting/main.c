#include <stdio.h>

int main(){
	int a, b;
	printf("Enter a: "); scanf("%d",&a);
	printf("Enter b: "); scanf("%d",&b);
	
	float c, d;
	c = a/b;
	d = (float) a / (float) b; // a (int) -> a (float) | b (int) -> b (float)
	
	printf("\nA = %d\nB = %d\nC = A / B (but A & B - int)\nC = %f\nD = A / B (but A & B - float)\nD = %f",a,b,c,d);
	return 0;
}
