#include <stdio.h>
#include <stdlib.h>

int main(){
    int count=10;
    int *pCount=&count;

    *pCount=25;

    printf("updated value of count: %d\n, Count");

    return 0;

}
