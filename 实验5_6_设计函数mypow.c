#include <stdio.h>

int mypow(int x,int n);


int main(){
	int x, n;
	scanf("%d %d", &x, &n);
	
	printf("%d", mypow(x, n));
	
	return 0;
}

int mypow(int x,int n){
	int y = 1;
	for(int i = 1; i <= n; i++){
		y *= x;
	}
	return y;
}
