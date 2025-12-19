#include <stdio.h>

int main(){
    int num1;
    int num2;
    int *ptr1=&num1;
    int *ptr2=&num2;

    printf("enter num1:\n");
    scanf("%d", &num1);
    printf("enter num2:\n");
    scanf("%d", &num2);

    int sum=*ptr1+*ptr2;


    printf("sum: %d\n", sum);

    return 0;


}
