#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<math.h>
int TinhY(int n) {
	if (n == 1) return 1; else if (n == 2) return 2; else if (n == 3) return 3; else return TinhY(n - 1) + 2 * TinhY(n - 2) + 3 * TinhY(n - 3);
}
int main() {
	int n=10;
	printf("\nGia tri cua Y(%d):%d", n, TinhY(n));
}