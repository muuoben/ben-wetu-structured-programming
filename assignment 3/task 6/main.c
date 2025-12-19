#include <stdio.h>
void incrementbyvalue(int x){
    x++;
}
void incrementbyreference(int *x){
    (*x)++;
}
int main(){
    int num=10;

    incrementbyvalue(num);
    printf("after pass by value: %d\n", num);

    incrementbyreference(&num);
    printf("after pass by reference: %d\n", num);

    return 0;




}
