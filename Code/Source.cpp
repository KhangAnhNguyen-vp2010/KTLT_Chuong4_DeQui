#include <stdio.h>
#include <conio.h>
#include <math.h>

int tinhMu(int m, int n)
{
	if (n==1)
	{
		return m;
	}
	else return m*tinhMu(m,n-1);
}

int main()
{
	int m, n;
	printf("Nhap m:");
	scanf("%d", &m);
	printf("Nhap n:");
	scanf("%d", &n);
	printf("Ket qua phep toan: %d", tinhMu(m,n));
	getch();
	return 0;
}