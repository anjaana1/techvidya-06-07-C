// 1. Write a program to swap two numbers by using a function.
// 2. Write a program to calculate the area and perimetr of a circle. (pi*r*r). - Try with Pointers
// Library include
// function prototype



// Pointers ->
// Address -> &
//Pointers -> *
//int *p;
//int x = 8;

//p = &x;
//*p

//1000,1002,65525,65524

#include <stdio.h>

void main()
{
    int *p1; // pointer to an integer
    float *p2;  // pointer to a floating-point value
    double *p; // pointer to a double type value
    char *p3;  // pointer to a character
    int i = 10;
    float f = 10.5;
    char c = 'a';
    printf("Integer Value: %d\n", i);
    printf("Float Value: %f\n", f);
    printf("Character Value: %c\n", c);
    printf("\n");
    p1 = &i;
    p2 = &f;
    p3 = &c;
    printf("Address of %d is %u\n",i,p1);
    printf("Address of %f is %u\n",f,p2);
    printf("Address of %c is %u\n",c,p3);
    printf("\n");
    printf("Value present on %u address:%d\n",p1, *p1);
    printf("Value present on %u address:%f\n",p2, *p2);
    printf("Value present on %u address:%c\n",p3, *p3);
    printf("\n");
}
