#include <stdio.h>

void swap(int *x, int *y) {
   int temp;
    temp = *x;
    *x = *y;
    *y = temp;
}

int main () {
    int a , b;
    a = 15;
    b = 20;
    swap (&a, &b);
    printf ("a => %d\n", a);
    printf ("b => %d\n", b);

}