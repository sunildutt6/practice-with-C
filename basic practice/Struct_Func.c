#include <stdio.h>
struct Rectangle {
    int length;
    int width;
};
void initialize (struct Rectangle *r, int l, int w) {
    r->length = l;
    r->width = w;
    printf("Length => %d\n", r->length);
    printf("Width => %d\n", r->width);
};

int area(struct Rectangle r) {
    printf("Area => %d\n", r.length * r.width);
    return r.length * r.width;
};

void changeLength(struct Rectangle *r, int l) {
    r->length = l;
    printf("New Length => %d\n", r->length);
}

int main () {
    struct Rectangle r;
    initialize (&r, 15, 25);
    area(r);
    changeLength(&r, 2000);
}