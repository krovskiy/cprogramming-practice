#include <ctype.h>
#include <stdio.h>
#include <math.h>

void printNumbers() {
    printf("%d\n", 5);
    printf("%d\n", 100);
}

void addNumbers(float n1, float n2) {
    printf("%.2f\n%.2f\n", n1, n2);
}

int getProduct(int n1, int n2) {
    int sum = n1 * n2;
    return sum;
}

void conChar(char alphabet) {
    char lower = tolower(alphabet);
    printf("%c", lower);
}

int getLargestNumber(int n1, int n2, int n3) {
    if (n1 > n2 && n1 > n3) {
        return n1;
    }
    else if (n2 > n1 && n2 > n3) {
        return n2;
    }
    else {
        return n3;
    }
}

int ex7(void) {
    double numbers[4] = {3.5,8.9,1.6,-4.8};
    for (int i = 0; i < 4; ++i) {
        printf("%.2lf\n", numbers[i]);
    }
    return 0;
}

int ex8(void) {
    double numbers [5];

    for (int i = 0; i < 5; ++i) {
        scanf_s("%lf", &numbers[i]);
    }
    double sum = 0.0;
    for (int i = 0; i < 5; ++i) {
        sum += numbers[i];

    }
    sum /= 5;
    printf("%.2lf", sum);
    return 0;
}

int findProduct (int n1, int n2) {
    return n1 * n2;
}

double findAverage(double arr[]) {
    double sum = 0.0;
    for (int i = 0; i < 5; ++i) {
        sum = sum + arr[i];
    }
    double average = sum / 5;
    return average;
}

int findSmallest(int a[], int n) {
    int point = a[0];

    for (int i = 1; i < n; ++i) {
        if (point > a[i]) {
            point = a[i];
        }
    }
    return point;
}

void multElement(int a[], int b[]) {
    for (int i = 0; i <= 3; ++i) {
        b[i] = a[i]*10;
        printf("%d\n", b[i]);
    }
}

void multArray(int a[], int b[]) {
    for (int i = 0; i <= 3; ++i) {
        b[i] = a[i]*10;
        printf("%d\n", b[i]);
    }
}

void MeanHeight() {
    double heights[11];
    double a;
    for (int i = 0; i < 11; ++i) {
        scanf_s("%lf", &a);
        heights[i] = a;
    }
    double sum = 0.0;
    for (int j = 0; j < 11; ++j) {
        sum += heights[j];
    }
    double mean = sum / 11;
    printf("%.2lf", mean);
}

double calculateSD(double data[]) {
    double sum = 0.0;
    for (int i = 0; i < 5; ++i) {
        sum += data[i];
    }
    double mean = sum / 5;
    double result = 0.0;
    for (int i = 0; i < 5; ++i) {
        result += pow(data[i]-mean, 2);
    }
    return sqrt(result/5.0);
}

int main(void){
    //printNumbers();

    //addNumbers(3,4);

    // int n1, n2;
    // scanf("%d %d", &n1, &n2);
    // int result = getProduct(n1,n2);
    // printf("%d", result);
    // return 0;

    // int num;
    // scanf("%d", &num);
    // printf("%lf", cbrt(num));

    // char a;
    // scanf("%c", &a);
    // conChar(a);

    // int largestNumber = getLargestNumber(54, -78, 28);
    // printf("%d\n", largestNumber);
    //
    // int largestNumber2 = getLargestNumber(0, 11, 21);
    // printf("%d\n", largestNumber2);

    //ex7();
    //ex8();

    // int ages[4]= {4,9,2,7};
    // printf("%d",findProduct(ages[0],ages[3]));

    double marks[5]={54.8,59.8,48.7,42.6,60.1};
    double result = findAverage(marks);
    printf("%.2lf", result);

    // int numbers[5] = {55, 64, 25, 34, 34};
    // int smallest = findSmallest(numbers, 5);
    // printf("%d", smallest);

    // int numbers[4] = {43, 78, 23, 45};
    // int newNumbers[4];
    //
    // multElement(numbers, newNumbers);

    // int numbers[4] = {1, 2, 3, };
    // int newNumbers[4];
    //
    // multArray(numbers, newNumbers);

    //MeanHeight();

    // double numArray[5];
    //
    // for (int i = 0; i < 5; i++) {
    //     scanf_s("%lf", &numArray);
    // }
    // double sd = calculateSD(numArray);
    // printf("%.3lf", sd);
}
