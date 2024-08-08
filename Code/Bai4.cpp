#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<math.h>
int UCLN(int a, int b) {
	if (a == b) return a;
	else if (a > b) return UCLN(b, a-b); else return UCLN(a, b-a);
}
int main() {
	int a = 10,b=20;
	printf("\nUCLN cua %d va %d:%d", a, b, UCLN(a, b));
}