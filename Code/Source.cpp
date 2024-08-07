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

int timKiemNhiPhan(int arr[], int left, int right, int x) {
    if (right >= left) {
        int mid = left + (right - left) / 2;
        
        // Nếu phần tử nằm ở giữa
        if (arr[mid] == x) {
            return mid;
        }

        // Nếu phần tử nhỏ hơn giá trị ở giữa, tìm ở nửa trái
        if (arr[mid] > x) {
            return timKiemNhiPhan(arr, left, mid - 1, x);
        }

        // Nếu phần tử lớn hơn giá trị ở giữa, tìm ở nửa phải
        return timKiemNhiPhan(arr, mid + 1, right, x);
    }
    
    // Nếu phần tử không có trong mảng
    return -1;
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
	printf("\n---------------------------------\n");
	int arr[] = {2, 3, 4, 10, 40};
	for (int i = 0; i < 5; i++)
	{
		printf("%d ", arr[i]);
	}
	printf("\n");
	int x;
	printf("Nhap x can tim:");scanf("%d", &x);
	int result = timKiemNhiPhan(arr, 0, 5-1, x);
    
    if (result != -1) {
        printf("Phan tu duoc tim thay o chi so %d\n", result);
    } else {
        printf("Phan tu khong co trong mang\n");
    }
	getch();
	return 0;
}