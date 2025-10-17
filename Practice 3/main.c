#include <stdio.h>


void ex1(void) {
    int age;
    printf("Insert age:");
    scanf_s("%d", &age);
    if (age >= 18) {
        printf("This person can vote!");
    }

}

void ex2(void) {
    int age;
    printf("Insert age:");
    scanf_s("%d", &age);
    if (age >= 18) {
        printf("This person can vote!");
    }
    else {
        printf("This person cannot vote!");
    }
}

void ex3(void) {
    int number;
    printf("Insert number:");
    scanf_s("%d", &number);

    if (number > 0) {
        printf("The number %d is positive!", number);
    }
    else if (number < 0) {
        printf("The number %d is negative!", number);
    }
    else {
        printf("The number is 0!");
    }

}

void ex4(void) { //This is also exercise 5, because this needs to be a function basically
    int number;
    scanf_s("%d", &number);

    if (number % 2 == 0) {
        printf("This number is even!");
    }
    else {
        printf("This number is odd!");
    }
}

void ex6(void) {
    int month;
    scanf_s("%d", &month);

    switch (month) {
        case 1:
            printf("January");
            break;
        case 2:
            printf("February");
            break;
        case 3:
            printf("March");
            break;
        case 4:
            printf("April");
            break;
        case 5:
            printf("May");
            break;
        case 6:
            printf("June");
            break;
        case 7:
            printf("July");
            break;
        case 8:
            printf("August");
            break;
        case 9:
            printf("September");
            break;
        case 10:
            printf("October");
            break;
        case 11:
            printf("November");
            break;
        case 12:
            printf("December");
            break;
        default:
            printf("Not a valid input!");
    }
}

void ex7(void) {
    int number;
    scanf_s("%d", &number);

    switch (number) {
        case 1:
        case 3:
        case 5:
        case 7:
        case 9:
            printf("Odd number");
            break;
        case 2:
        case 4:
        case 6:
        case 8:
        case 10:
            printf("Even number!");
            break;
        default:
            printf("Invalid number!");
    }
}

void ex8(void) {
    int i = 5;

    while (i > 0) {
        printf("%d\n",i);
        --i;
    }
}

void ex9(void) {
    signed int n;
    scanf_s("%d", &n);
    int total = 1;
    int i = 1;

    while (i <= n) {
        total = total * i;
        i++;
    }
    printf("%d", total);
}

void ex10(void) {
    for (int i = 5; i > 0; --i) {
        printf("%d\n", i);
    }
}

void ex11(void) {
    int n;
    scanf_s("%d", &n);
    int total = 1;

    for (int i = 1; i <= n; ++i) {
        total = total * i;
    }
    printf("%d", total);
}

void ex12(void) {
    signed int n;
    scanf_s("%d", &n);

    for (int i = 1; i <= n; ++i) {
        if (i % 2 != 0) {
            printf("%d is an odd number!\n", i);
        }
    }
}

void ex13(void) {
    int total = 0;
    int num;

    while (1) {
        scanf_s("%d", &num);
        if (num < 0) {
            printf("total:%d\n", total);
            break;
        }
        total+=num;
        printf("total:%d\n", total);
    }
}

void ex14(void) {
    int n;
    scanf_s("%d", &n);

    for (int i = 1; i <= n; ++i) {
        if (i % 2 == 0) {
            continue;
        }
        printf("%d\n", i);
    }
}

void ex15(void) {
    int n;
    scanf_s("%d", &n);
    for (int i = 6; i <= 9; i++) {
        printf("%d times 6 is %d\n", n, n * i);
    }
}

void ex16(void) {
    int number;
    while (1) {
        scanf_s("%d", &number);
        if (number >= 1 && number <= 100) {
            printf("%d", number);
        }
        else {
            break;
        }
    }
}

void ex17(void) {
    int number;
    scanf_s("%d", &number);
    int originalNumber = number;

    int sum = 0;

    while (originalNumber != 0) {
        int remainder = originalNumber % 10;
        int cube = remainder * remainder * remainder;
        sum = sum + cube;
        originalNumber = originalNumber / 10;
    }
    if (sum == number) {
        printf("Armstrong Number");
    }
    else {
        printf("Not an Armstrong Number");
    }
}

void ex18(void) {
    char op;
    scanf_s("%c", &op);
    double first, second;
    scanf_s("%lf %lf", &first, &second);

    switch (op) {
        case '+':
            printf("%.1lf", first + second);
            break;
        case '-':
            printf("%.1lf", first - second);
            break;
        case '*':
            printf("%.1lf", first * second);
            break;
        case '/':
            printf("%.1lf", first / second);
            break;
        default:
            printf("Error!");
    }
}

int main(void) {
    ex1();
    return 0;
}
