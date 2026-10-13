#include <stdio.h>
#include <stdlib.h>

struct Rectangle {
    int length;
    int width;
};

int main () {
    struct  Rectangle r={10,5};
    struct Rectangle *p=&r; // initialise and declaring
    r.length = 15; // doing normally
    p->length = 220;
    printf("%d\n", p->length);


    struct Rectangle *p1;
    p1 = (struct Rectangle *)malloc(sizeof(struct Rectangle));
    p1->length = 11005;
    p1->width = 2000;

    printf("%d\n", p1->length);

}