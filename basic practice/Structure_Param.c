#include <stdio.h>
#include <stdlib.h>

struct Rectangle {
    int length;
    int width;
};
int area(struct Rectangle r1) {
    r1.length++;
    return r1.length * r1.width;
}
void changeLenght(struct Rectangle *p, int l) {
    p->length  = l;
    printf("Length => %d\n", p->length);
}

struct Rectangle *fun() {
    struct Rectangle *p;
    p = (struct Rectangle *)malloc(sizeof(struct Rectangle));

    p->length = 50;
    p->width = 100;
    return p;
}

int main () {

    struct Rectangle r = {20,5};
    printf("%d\n", area(r));

    changeLenght(&r, 34);

    struct Rectangle *ptr = fun();
    printf("%d\n", ptr->length);
    printf("%d\n", ptr->width);

    return 0;
}