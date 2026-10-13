#include <stdio.h>

struct Array {
    int A[20];
    int size;
    int length;
};

void Display (struct Array arr) {
    int i;
    printf("\nElements are\n ");
    for (i = 0; i < arr.length; i++) {
        printf("%d ", arr.A[i]);
    }
}

//Task1: Append method =>  O(1)
void Append(struct Array *arr,  int value) {

    if (arr->length < arr->size) {
        arr->A[arr->length++] =value;
    }
}

//Task2 : Insert method  => O(n)
void Insert(struct Array *arr, int index, int value ) {
    if (index > 0 || index <= arr->length) {
        for (int i = arr->length; i > index; i--) {
            arr->A[i] = arr->A[i - 1];
        }
        arr->A[index] = value;
        arr->length++;
    }
}

//Task 3: Delete method Best case O(1) and Worst Case O(n)
int Delete(struct Array *arr, int index) {
    int x;
    if (index > 0 || index < arr->length) {
        x = arr->A[index];
        for (int i = index; i < arr->length-1; i++) {
            arr->A[i] = arr->A[i+1];
        }
        arr->length--;
        return x;
    }
    return 0;
}
int main() {
    struct Array arr ={{2,3,4,5,6},20, 10};
    Append(&arr,50);
    Insert(&arr,6,200);
    Insert(&arr,10,201);
    printf(" Deleted value => %d\n", Delete(&arr,20));
    Display(arr);
    return 0;
}