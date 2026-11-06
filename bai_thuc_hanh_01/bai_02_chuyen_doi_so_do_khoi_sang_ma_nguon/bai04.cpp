#include<stdio.h>
int main(){
	int a,b;
	scanf("%d%d",&a,&b);
	int x = a; int y = b;
	while (a != b){
		if (a > b){
			a = a - b;
		}else{
			b = b - a;
		}
	}
	int ucln = a;
	long long bcnn = ((long long)x/ucln)*y;
	printf("%lld",bcnn);
}
