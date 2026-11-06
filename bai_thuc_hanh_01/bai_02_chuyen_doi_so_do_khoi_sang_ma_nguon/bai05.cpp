#include<stdio.h>
int ktra(int n){
	if(n <= 0) return 0;
	int S = 0;
	for(int i = 1; i <= n/2 ; i++){
		if(n % i == 0){
			S += i;
		}
	}
	if(S==n)return 1;
		return 0;
}
int main(){
	int n;
	scanf("%d",&n);
	if(ktra(n) == 0){
		printf("Khong la so hoan hao");
	}else{
		printf("la so hoan hao");
	}
}
