#include<stdio.h>
#include<math.h>
int main(){
	int a,b,c;
	scanf("%d%d%d",&a,&b,&c);
	if(a == 0){
		if(b== 0){
			if(c == 0){
				printf("VSN");
			}else{
				printf("VN");
			}
		}else{
			printf("%.2f",(double)-c/b);
		}
	}else{
		double delta = b * b - 4 * a * c;
		if(delta < 0){
			printf("VN");
		}else if( delta == 0){
			printf("PT co nghiem kep : x1 = x2 = %.2f",(double)-b/(2*a));
		}else{
			double x1 = (-b + sqrt(delta))/(2*a);
			double x2 = (-b - sqrt(delta))/(2*a);
			printf("PT co 2 nghiem x1 = %.2f\n x2 = %.2f\n",x1,x2);
		}
	}
}
