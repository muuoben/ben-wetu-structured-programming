task 1
QN 1.
a. a normal variable stores direct value of specific data type for example integer, character or a floating number while a pointer memory stores a memory address.

b. in normal variable the access of memory is direct while in a pointer the access is indirect

c. in a normal variable reading the memory goes directly to the memory address assigned to the variable and reads the value stored while in pointer the computer must perform 2 steps , read the address inside the pointer and jump to that address to find the actual data

d.in modification using pointers the computer looks at the address inside ptr , travels to that location and changes the value at that distant address.

QN 2.
A variable declaration tells the compiler that a variable exists and its type but does not allocate memory
eg: extern int x;

a variable definition allocates memory for the variable
eg:  int x = 10;

a pointer is a variable that stores the address of another variable
e:  int *ptr;

a pointer definition assigns a valid address to the pointer  
eg:  int a=5;
     int *ptr=&a;

QN 3
deferencing a pointer is a act of accessing the data stored at the memory address held by a pointer.

#include <stdio.h>

int main() {
    int x = 10;
    int *ptr = &x;

    printf("Initial value of x: %d\n", x);
    printf("Value via pointer: %d\n", *ptr);

    *ptr = 50;   // modify x using dereferencing

    printf("Modified value of x: %d\n", x);

    return 0;
}


QN 4
pointers are useful when:
1.modifying variables inside functions
2.handling arrays and dynamic memory
examples are swapping values in a function and passing large data structures efficiently

QN 5
can cause segmentation faults 
memory leaks
harder to debug
dangling pointers

QN 6
in call by value copy of data is passed and original variable is unchanged while call for reference the address is passed and original variable can be modified

QN 7
 call by reference can be applied in swapping values and updating variables inside functions

call by value can be applied when data should not change and where simple calculations are involved.



















