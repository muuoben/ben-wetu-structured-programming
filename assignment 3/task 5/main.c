#include <stdio.h>

void swapnumbers(int*x, int*y){
    int temp=*x;
    *x=*y;
    *y=temp;
}
int main(){
    int a=10, b=20;
    printf("before swapping; a=%d, b=%d\n", a, b);

    swapnumbers(&a, &b);

    printf("after swapping: a=%d, b=%d\n", a, b);

    return 0;


}
