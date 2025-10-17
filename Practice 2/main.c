#include <stdio.h>

void exerc1(void) {
    int x;
    printf("Exercise 1:");
    x = 31;
    printf("%d\n",x);
    x = 99;
    printf("%d\n",x);
}

void exerc2(void) {
    int distance,newDistance;
    printf("Exercise 2:");
    distance = 135;
    printf("%d\n", distance);
    newDistance = 429;
    distance = newDistance;
    printf("%d\n", distance);
}

void exerc3(void) {
    float salary, bonus, income;
    printf("Enter salary: ");
    scanf_s("%f", &salary);
    printf("Enter bonus: ");
    scanf_s("%f", &bonus);
    income = salary + bonus;
    printf("%.2f", income);
}

void exerc4(void) {
    int number1;
    double number2;

    scanf_s("%d", &number1);
    scanf_s("%lf", &number2);
    printf("%d\n%lf\n", number1, number2);
    printf("%.2lf", number2);
}

void exerc5(void) {
    int costPrice, sellingPrice;
    costPrice = 19;
    sellingPrice = 27;
    printf("Price: %d", sellingPrice - costPrice);

}

void exerc6(void) {
    int n, m; // n = Numbers of pen, m = Numbers of students;
    n = 14;
    m = 3;
    printf("Number of pens got each student: %d\n", n/m);
    printf("Numbers of pen left: %d\n", n%m);
}

void exerc7(void) {
    double celsius;
    scanf_s("%lf", &celsius);
    double fahrenheit = (celsius * 1.8) + 32;
    printf("%.2lf", fahrenheit);
}

void exer8(void) {
    int number;
    scanf_s("%d", &number);
    if (number % 5 == 0) {
        printf("%d", 1);
    }
    else {
        printf("%d",0);
    }
}

int main(void) {
    exer8();
    return 0;
}