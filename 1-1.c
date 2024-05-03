#include <stdio.h>

int sum(int n){
    if (n == 1) // this is bad
	return 1;
    else
	return n + sum(n - 1);
}

int main(){

    
    printf("%d", sum(3));
}
