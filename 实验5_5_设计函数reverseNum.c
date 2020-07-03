#include <stdio.h>

int reverseNum(int n);

int main(){
	int n;
	scanf("%d", &n);
	printf("The reverse form of number %d is %d.", n, reverseNum(n));
	return 0;
}

int reverseNum(int n){
	
	int res = 0, take, save_n, len = 0, digit = 1;
	
	save_n = n; 
	while(save_n > 0){
		save_n /= 10; 
		len++;
	}
	
	while(n > 0){
		take = n % 10;
		n /= 10;
		for(int i = 1; i <= len-1; i++){
			 digit = digit * 10;
		}
		len--;
		res = res + (take * digit);
		digit = 1;
	} 
	return res;
}
