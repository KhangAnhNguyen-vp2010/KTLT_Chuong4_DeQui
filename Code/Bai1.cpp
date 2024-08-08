#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<math.h>
int SumS1(int n) {
	if (n == 1) return 1;
	else return n + SumS1(n - 1);
}
float SumS2(int n) {
	if (n == 1) return sqrt((float)n);
	else return sqrt((float)n+SumS2(n-1));
}
float SumS3(int n) {
	if (n == 1) return 0.5;
	else return (n * 1.0 / n + 1) + (SumS3(n - 1));
}
float SumS4(int n) {
	if (n == 1) return 1;
	else return 1.0 / (2 * n + 1) + SumS4(n - 1);
}
float SumS5(int n) {
	if (n == 1) return 2;
	else return n * (n + 1) + SumS5(n - 1);
}
int main() {
	int n = 10;
	printf("\nTong 1+2+3+...+n=%d", SumS1(n));
	printf("\nTong Can bac 2 cua n:%.2f", SumS2(n));
	printf("\nTong n/n+1=%.2f", SumS3(n));
	printf("\nTong cua 1/2n+1:%.2f", SumS4(n));
	printf("\nTong cua n(n+1):%.2f", SumS5(n));
}