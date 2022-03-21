/*
 * @Author: JackChouis
 * @Date: 2022-03-17 01:08:39
 * @LastEditors: JackChouis
 * @LastEditTime: 2022-03-21 17:48:17
 * @FilePath: \VsCode\practice\main.c
 * @Description: 
 * 
 * Copyright (c) 2022 by JackChouis, All Rights Reserved. 
 */
#include<stdio.h>
#include "test.h"
#include"test2.h"
#include<string.h>
#include<stdlib.h>
extern int add();
extern int minus();
int t = 0;
typedef struct 
{
    unsigned int Year;
    unsigned int month;
    unsigned int day;
    unsigned int hour;
    unsigned int minutes;
    unsigned int second;
}TypeTime;

union Data{
    int i;
    float f;
    char str[7];
    double d;
}data;

void getmemory(char* p)
{
    p= (char *)malloc(100);
    strcpy(p, "hello world");
}
void main()
{
 //   char *str;
    //  char *str = (char *)malloc(100);
 //   getmemory(str);
//    printf("%s\n", str);
 //   free(str);
//    str = NULL;
    // int s = add();
    // printf("s value is %d\n", s);

    // int ss = minus();
    //    printf("ss value is %d\n", ss);
    // //   printf("test%d",sizeof(data));

typedef struct
{
int a: 2;
int b: 2;
int c: 1;
} test;
test t;
t. a = 1;
t. b = 3;
t. c = 1;
printf("%d", t. a) ;
printf("%d", t. b) ;
printf("%d", t. c) ;
}
