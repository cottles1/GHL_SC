/*
Author: Saya Cottle
Course: CS 125
Assignment: ic 10 
Date: 10/22/2025
References: Copied the variable names and function names from the HW for a basis, checked class slides and notes; Had Ryan help troubleshoot with me, I asked questions and learned how strcmp can work for integer checks, looked up examples using copilot and reverse engineered how atoi, argc, and arg v can work. 
*/


#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>

int add(int a, int b);
int subtract (int a, int b);
int multiply(int a, int b);
int divide(int a, int b);

int main(int argc, char *argv[])
{
   int A, B;
   
   printf("The program name is %s \n", argv[0]);
   
   if (argc != 4)
   {
     printf("Wrong amount of arguments \n");
     return 0;       
   }
   

   
   A = atoi(argv[1]); // using atoi to change a string to an integer 
   B = atoi(argv[3]);
   
   if ( A == 0 && strcmp(argv[1], "0") != 0) // checks to see if A is an integer; uses both the value of A & the validity using strcmp 
   {
     printf("The first number is invalid. Please put in an integer for the argument. \n");
     return 0;
   }
   
   if ( B == 0 && strcmp(argv[3], "0") != 0) // same thing with B 
   {
     printf("The second number is invalid. Please put in an integer for the argument. \n");
     return 0;
   }
   
   // comparing strings with strcmp, checking if the second argument is the right one. Goes through +, -, x, and / for each if else statement. 
   
   if (strcmp(argv[2], "+") == 0) 
   {
     add(A, B);
     printf("A = %d, B = %d, Operand = %s, RESULT = %d \n", A, B, argv[2], add(A, B));
   }
   else if (strcmp(argv[2], "-") == 0)
   {
     subtract(A, B);
     printf("A = %d, B = %d, Operand = %s, RESULT = %d \n", A, B, argv[2], subtract(A, B));
   }
   else if (strcmp(argv[2], "x") == 0)
   {
     multiply(A, B);
     printf("A = %d, B = %d, Operand = %s, RESULT = %d \n", A, B, argv[2], multiply(A, B));
   }
   else if  (strcmp(argv[2], "/") == 0)
   { 
       if (B == 0)
     {
       printf("Error \n");
       return 0;
     }
     
     else
     {
       divide(A, B);
       printf("A = %d, B = %d, Operand = %s, RESULT = %d \n", A, B, argv[2], divide(A, B));
     }
   }
   else
   {
     printf("This calculator isn't qualified for that.");
   }
   
   return 0;
   
}

int add(int a, int b)
{
  return a + b;
}
// end of add

int subtract (int a, int b)
{
  return a - b;
}
// end of subtract

int multiply(int a, int b)
{
  return a * b;
}
// end of multiply

int divide(int a, int b)
{
  return a/b;
}
// end of divide 