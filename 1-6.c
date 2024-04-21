#include <stdio.h>



void hanoi(char s, char d, char e, int n){
    if (n <= 0){
	return ;
    }

    hanoi(s, e, d, n - 1);
    printf("move %d, %c -> %c\n", n, s, d);
    hanoi(e, d, s, n - 1);

}


int main(){
    int n;
    scanf("%d", &n);

    hanoi('s', 'd', 'e', n);


}
