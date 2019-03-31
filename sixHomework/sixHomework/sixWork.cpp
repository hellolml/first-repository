#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
void mul(int n){
	int i, j;
	for (i = 1; i <= n; i++){
		for (j = 1; j <=i; j++){
			int sum = i*j;
			printf("%d*%d=%d", j, i, sum);
			printf(" ");
		}
		printf("\n");
	}
}

	int main(){
		int n;
		printf("请输入乘法口诀的列数\n");
		scanf("%d", &n);
		mul(n);
		system("pause");
		return 0;
	}