#include <stdio.h>
#include <stdlib.h>

int main(){
    int num=100;
    int *ptr=&num;

    printf("value of num: %d\n", num);
    printf("value stored in ptr(address of num): %p\n", ptr);
    printf("address of num: %p\n", &num);
    printf("value accessed using *ptr(dereferenced value): %d\n", *ptr);

    return 0;
}
