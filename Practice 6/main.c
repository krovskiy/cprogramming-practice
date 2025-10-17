#include <stdio.h>
#include <string.h>
#include <ctype.h>
void ex1() {
    char movie[] = "Snowpiercer";
    printf("%c", movie[3]);
}

void ex2() {
    char text[] = "Life is fun";
    for (int i = 0; i < strlen(text); i++) {
        printf("%c", text[i]);
    }
}

void ex3() {
    char text[100];
    fgets(text, sizeof(text), stdin);
    int count = 0;
    while (text[count] != '\0') {
        count += 1;

    }
    printf("%d\n", count);
}

int findLength(char const text[100]) {
    int count = 0;
    while (text[count] != '\0') {
        count += 1;
    }
    return count;
}

void ex4() {
    char text1[100];
    char text2[100];

    fgets(text1, sizeof(text1), stdin);
    fgets(text2, sizeof(text2), stdin);

    int l1 = findLength(text1);
    int l2 = findLength(text2);

    if (l1 > l2) {
        printf("%s", text1);
    }
    else {
        printf("%s", text2);
    }
}

void ex5() {
    char str[100];
    fgets(str, sizeof(str), stdin);
    char a;
    int count = 0;
    scanf("%c", &a);
    for (int i = 0; i < strlen(str); i++) {
        if (str[i] == a) {
            count += 1;
        }
        else {
            continue;
        }
    }
    printf("%d", count);
}

void ex6() {
    char text1[100];
    char text2[100];
    scanf("%s", &text1);
    scanf("%s", &text2);

    strcat(text1, " ");
    strcat(text1, text2);

    printf("%s", text1);
}

int vowel(char c) {
    switch(tolower(c)){
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
            return 1;
        default:
            return 0;
    }
}

void ex7() {
    char text[150];
    int vowels = 0;
    fgets(text, sizeof(text), stdin);
    for (int i = 0; text[i] != '\0'; i++) {
        printf("%c", text[i]);
        if (vowel(text[i])) {
            vowels += 1;
        }
        else {
            continue;
        }
    }
    printf("%d", vowels);
}

struct Employee {
    int age;
    char name[50];
};

void ex8() {
    struct Employee employee1;
    fgets(employee1.name, sizeof(employee1.name), stdin);
    scanf("%d", &employee1.age);

    printf("%s", employee1.name);
    printf("%d", employee1.age);
}

typedef struct Complex {
    double real;
    double imag;
} complex;

void ex9(){
    complex c1, c2, result;
    scanf("%lf", &c1.real);
    scanf("%lf", &c1.imag);

    scanf("%lf", &c2.real);
    scanf("%lf", &c2.imag);

    result.real = c1.real - c2.real;
    result.imag = c1.imag - c2.imag;

    printf("%.2lf + %.2lf", result.real, result.imag);
}

struct Rectangle {
    int length;
    int breadth;
};

int findPerimeter(struct Rectangle rect) {
    return 2 * (rect.length + rect.breadth);
}

void ex10() {
    struct Rectangle rect1;
    scanf("%d %d", &rect1.length, &rect1.breadth);
    printf("%d", findPerimeter(rect1));
}

int main(void) {
    ex10();
    return 0;
}