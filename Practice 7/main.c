#include <stdio.h>

void ex1() {
    int number = 32;
    int* pt;
    pt = &number;
    printf("%p", &pt);
}

void ex2() {
    int x;
    scanf_s("%d", &x);
    int* pt;
    pt = &x;

    printf("%d", *pt);
}

void ex3() {
    int numbers[5] = {55,64,75,80,65};
    int minNumber = numbers[0];
    int* ptr;
    ptr = numbers;
    for (int i = 0; i < 5; ++i) {
        if (*(ptr + i) < minNumber) {
            printf("%d", *(ptr+i));
        }
    }
    printf("%d", minNumber);
}

int findSquare(int* n) {
    *n = (*n) * (*n);
    return *n;
}

void ex4() {
    int number;
    scanf_s("%d", &number);
    findSquare(&number);
    printf("%d",number);
}

void ex5() {
    int numbers[5] = {2,3,5,7,11};
    int v;
    scanf_s("%d", &v);
    int* p;
    p = numbers;
    for (int i = 0; i < 5; ++i) {
        *(p+i) = (*(p+i)) * v;
        printf("%d\n", *(p+i));
    }
    for (int i = 0; i < 5; ++i) {
        printf("%d\n", numbers[i]);
    }
}

double divideNum(const double* num1, const double* num2, double* result) {
    *result = (*num1) / (*num2);
    return *result;
}

void ex6() {
    double number1;
    double number2;
    scanf_s("%lf %lf", &number1, &number2);
    double result;
    divideNum(&number1, &number2, &result);
    printf("%.2lf", result);

}

int main(void) {
    ex6();
    return 0;
}