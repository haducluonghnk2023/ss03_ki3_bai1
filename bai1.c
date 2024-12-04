#include<stdio.h>
long long factorial(int n){
	if( n == 0 ){
		return 1;
	}
	return n  * factorial(n-1);
}
int main(){
	int n;
	printf("nhap so nguyen duong:");
	scanf("%d",&n);
	if(n < 0){
		printf("khong co giai thua cho so am.");
	}else{
		printf("giai thua cua %d la: %d",n,factorial(n));
	}
return 0;
}

