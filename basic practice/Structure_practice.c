#include  <stdio.h>

struct Rectangle {
    int length;
    int width;

};

struct Complex {
    int real;
    int imaginary;
};

struct Student {
    int roll;
    char name[20];
    char department[20];
    char address[50];
};


struct Card {
    int face;
    int shape;
    int color;
};

int main() {
    struct Card card;
    struct Student student;
    struct Rectangle r1 = {10,5};
    struct Complex complex;

    r1.length = 15;
    r1.width =20;

    printf("%zu\n", sizeof(r1));
    printf("%d\n", r1.length);
    printf("%d\n", r1.width);;
}
