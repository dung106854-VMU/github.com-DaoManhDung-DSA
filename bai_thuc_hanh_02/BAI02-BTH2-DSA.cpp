#include<stdio.h>
#include<stdlib.h>
int main(){
		int n,m;
	scanf("%d%d",&n,&m);
	float **pt=(float**)malloc(n*sizeof(float*));
	for(int i=0;i<n;i++){
		pt[i]=(float*)malloc(m*sizeof(float));
	}
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			scanf("%f",*(pt+i)+j);
		}
	}
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			printf("%.2f  ",*(*(pt+i)+j));
			}
		printf("\n");	
	}
	free(*pt);
	return 0;
}
