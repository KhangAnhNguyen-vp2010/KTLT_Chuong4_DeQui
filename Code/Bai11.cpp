#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<math.h>
int Fibo(int n) {
	if (n <= 2) return 1;
	else return Fibo(n - 1) + Fibo(n - 2);
}
void XuatFiBo(int n) {
	for (int i = 1; i < n; i++)
	{
		printf("%d\t", Fibo(i));
	}
}
int main() {
	int n = 10;
	XuatFiBo(n);
}