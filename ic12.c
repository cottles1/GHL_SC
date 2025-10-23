/*
Author: Saya Cottle
Course: CS 125
Assignment: ic 12  
Date: 10/22/2025
References: Had Ryan and Prof. Simcox help debug and whatnot; apparently you can use pointers for structs, which can make the function portions easier. I was able to get the base of it with some hints (apparently you can just use printf and scanf's). Note that when making the functions, you use '*', but when calling and assigning variables for the main func (and scanf's) you put in '&'. 
*/

#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

struct Student 
{
  char name[50];
  int age;
  char grade;
  int num_courses;
};

void input(struct Student *stu);
void output(struct Student *stu);

// end of struct 

int main()
{
  struct Student stu;
  
  input(&stu);
  output(&stu);
  
  return 0;
}

void input(struct Student *stu)
{ 
  printf("What is your name?\n");
  scanf("%s", stu->name);
  
  printf("How old are you?\n");
  scanf("%d", &stu->age);
  
  getchar();
  printf("What is your current grade on the A ~ F scale?\n");
  scanf("%c", &stu->grade);
  
  printf("How many courses are you taking?\n");
  scanf("%d", &stu->num_courses);
}

void output(struct Student *stu)
{
  printf("Student information: \n");
  printf("Name: %s \n", stu->name);
  printf("Age: %d \n", stu->age);
  printf("Grade: %c \n", stu->grade);
  printf("Number of Courses: %d \n", stu->num_courses);
}
