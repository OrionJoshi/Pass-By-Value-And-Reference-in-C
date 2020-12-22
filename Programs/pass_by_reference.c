#include<stdio.h>


void swap(int *x, int *y) {

    int t;

    t = *x; /* assign the value at address x to t */

    *x = *y; /* put the value at y into x */

    *y = t; /* put the value at to y */
} 

int main() {

    int m = 10, n = 20;

    printf("Before executing swap m = %d n = %d\n", m, n);

    swap(&m, &n);

    printf("After executing swap m = %d n = %d\n", m, n);

 return 0;
}

/*

Output:

    Before executing swap m=10 n=20

    After executing swap m=20 n=10


*/