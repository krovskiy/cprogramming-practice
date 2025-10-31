#include <stdio.h>

void task1() {
    int num = 30;
    int *p;

    printf("the value is %d\n", num); // 30
    p = &num;
    printf("the value is %p\n", &num); //00000723bdffd64
    printf("the value is %p\n", p); //00000723bdffd64
    printf("the value is %d\n", *p);
    *p = 20;
    printf("%d", num); // 20
    //What will be printed in Step 1?
    //Check up
    //Will the values in Step 2 and Step 3 be the same?
    //No, because step 2 is declaration of a pointer and step 3 is the assignment of address num to p
    //What happens in Step 4? Why did the value of num change even though you did not modify the variable directly?
    //Since the variable is a pointer, any changes made to it, changes the variable it points

    //What does the operator & do?
    //Get addresses of different entities
    //What does the * operator do when dereferencing?
    //Access the data pointed to by the pointer
    //Why is it useful to use pointers instead of directly working with variables?
    //A pointer uses references to existing data, working directly with variables can mean an entire copy of data

    //(Optional)
    //Why *p and num show the same value?
    //Because of dereferencing
    //

    //because *p points to a variable, so changing the pointer in some manner changes the variable too
    //The relationship between a variable and its pointer is that they are related together
    //Yes, you can declare a pointer without initializing it, but it contains garbage memory address. It would show a compiler error if try to use it, without initializing.
}

void task2() {
    int a = 5;
    int *p1 = &a;
    int **p2 = &p1;

    printf("step 1: a=%d\n", a);
    printf("step 2: a=%p\n", &a);
    printf("step 3: p1 = %p (value of &a)\n", p1);
    printf("step 4: &p1 = %p (value of &a)\n", &p1);
    printf("step 5: p2 = %p (value of &a)\n", p2);

    **p2 =10;

    printf("something: %p", *p2);

    printf("step 5.1: p2 = %d\n", **p2);

    printf("step 7: a=%d\n", a);

    //What does a, p1, p2 represent?
    //a is an integer that stores the value of 5, p1 is a pointer to int that stores the address of a, p2 point to a pointer that stores the address of p1

    //What is the difference between p1 and &a? and between p2 and &p1?
    //&a is the address of a (expression), p1 pointer that stores the address of a (variable); &p1 us the address of p1 (expression), p2 is a VARIABLE that holds that address

    //What happens after executin **p2 = 10?
    //The value of a, p1 changes because they are related to each other.

    //Reflection

    //Why did the operation **p2 = 10 change the value of a?
    //Dereferenced value at address stored p1, which p1 hold the address of a, changes because we stored 10 inside **p2 which directly affected it

    //What happens if you print *p2 and **p2 separately?
    //*p2 points to the integer *, *p2 = p1, which holds the address of a

    //What does this example show about the levels of indirection?
    //That we can create a chain of pointers and help reuse data. Also, indirect access

    //Where can a pointer to a pointer be useful?
    //2d arrays, passing a pointer to afunction to modify it
}
void task3() {
    int grade = 80;
    double gradeD = 79.9;
    int grade1 = 80, grade2 = 90;

    //1-4: variables and expressions

    printf("sizeof variable grade = %zu\n", sizeof(grade));
    printf("sizeof variable gradeD = %zu\n", sizeof(gradeD));
    printf("sizeof variable grade1 + grade2 = %zu\n", sizeof(grade1+grade2));
    printf("sizeof variable sizeof(grade1 + grade2) = %zu\n", sizeof(grade1) + sizeof(grade2));

    // types and literals
    printf("sizeof variable double = %zu\n", sizeof(double));
    printf("sizeof variable char = %zu\n", sizeof(char));
    printf("sizeof variable int = %zu\n", sizeof(int));
    printf("sizeof variable float = %zu\n", sizeof(float));
    printf("sizeof variable 'a' = %zu\n", sizeof('a'));
    printf("sizeof variable a = %zu\n", sizeof("a"));


    //What is the type of expression (grade1 + grade2)? Why does that determine the result of line 3?
    //Addition, and promoting of data types, but in this case int + int = int. but int = 4, so it prints 4
    //Why is sizeof('a') typically equal to sizeof(int), not 1?
    //a is an int with the ASCII value of 97
    //Why is sizeof("a" equal to 2 on most systems? explain the role of terminating '\0'?
    //string literal is compsoed of A - char, and \0, which all string literals are terminated automatically so 1 + 1 =2
    //Why does lines 3 and 4 give different results even though both involve grade 1 and grade 2?
    // Because sizeof(grade1) is an int and results a 4, same thing with grade 2 -> 4 + 4 = 8
    //Why should we use %zu not % to print the result of sizeof?
    //The compiler expects the sizeof operator to return a size_t, which is unsigned
}


int main(void) {
    task3();
}