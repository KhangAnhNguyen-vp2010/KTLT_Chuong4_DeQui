#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<math.h>
int QuyNap(int n) {
	if (n == 0) return 1;
	else if (n == 1) return 0; else if (n == 2) return -1;
	else return 2 * QuyNap(n - 1) - 3 * QuyNap(n - 2) - QuyNap(n - 3);
}
int main() {
	int n = 10;
	printf("\nCong thuc quy nap cua n=%d:%d",n, QuyNap(n));
}