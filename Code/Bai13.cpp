#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<math.h>
int TinhX(int n);
int TinhY(int n);
int TinhX(int n) {
	if (n == 0) return 1; else return TinhX(n - 1) + TinhY(n - 1);
}
int TinhY(int n) {
	if (n == 0) return 0; else 3 * TinhX(n - 1) + 2 * TinhY(n - 1);
}
int main() {
	int n=10;
	int a = TinhX(n);
	int b = TinhY(n);
	printf("Gia tri cua so hang X(%d) = %d\n", n, a);
	printf("Gia tri cua so hang Y(%d) = %d\n", n, b);
}