#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<math.h>
int CSN(int a, int q,int n) {
	if (n == 1) return a;
	else return q * CSN(a, q, n - 1);
}
int main() {
	int a = 10,q=2,n=5;
	printf("\nCSN cua %d va cong sai %d voi n=%d:%d",a,q,n,CSN(a,q,n));
}