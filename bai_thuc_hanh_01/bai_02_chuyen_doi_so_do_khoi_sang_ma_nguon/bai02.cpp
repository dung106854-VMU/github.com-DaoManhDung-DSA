#include<stdio.h>
#include<math.h>
int main(){
	int n;
	scanf("%d",&n);
	int count = 0;
	if(n < 2){
		count = 1;
	}else{
		for(int i = 2;i<=sqrt(n);i++){
			if(n%i==0){
				count = 1;
				break;
			} 
		}
		if(count ==0){
			printf("la so nguyen to");
		}else{
			printf("Khong la so nguyen to");
		}
	}
}
