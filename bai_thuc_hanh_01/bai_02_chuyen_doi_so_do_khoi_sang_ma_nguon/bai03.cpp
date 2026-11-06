#include<stdio.h>
int main(){
	int n;
	scanf("%d",&n);
	int a[n];
	for(int i= 0 ; i< n ; i++){
		scanf("%d",&a[i]);
	}
	int vt = 0;
	int i = 1;
	for(i = 1; i < n;i++){
		if(a[i] > a[vt]){
			vt = i;
		}
	}
	printf("so lon nhat o vi tri thu %d co gia tri %d",vt,a[vt]);
}
