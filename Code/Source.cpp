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

int capSoCong(int n, int a, int r)
{
	if (n==1)
	{
		return a;
	}
	else return r + capSoCong(n-1,a,r);
}

int tinhBieuThuc(int n)
{
	if (n<6)
	{
		return n;
	}
	else return tinhBieuThuc(n-5) + tinhBieuThuc(n-4) + tinhBieuThuc(n-3) + tinhBieuThuc(n-2) + tinhBieuThuc(n-1);
}

int main()
{
	int m, n;
	printf("Nhap m:");
	scanf("%d", &m);
	printf("Nhap n:");
	scanf("%d", &n);
	printf("Ket qua phep toan: %d", tinhMu(m,n));
	printf("\n---------------------------------\n");
	int a,r,n1;
	printf("Nhap gia tri phan tu n:");
	scanf("%d", &n1);
	printf("Nhap hang dau a:"); scanf("%d", &a);
	printf("Nhap cong sai r:"); scanf("%d", &r);
	printf("Ket qua cua cap so cong: %d", capSoCong(n,a,r));
	printf("\n---------------------------------\n");
	printf("Ket qua cua phep tinh bieu thuc S(n) la: %d", tinhBieuThuc(n1));
	getch();
	return 0;
}