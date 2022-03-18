/*
 * @Author: JackChouis
 * @Date: 2022-03-17 01:08:39
 * @LastEditors: JackChouis
 * @LastEditTime: 2022-03-18 22:13:11
 * @FilePath: \VsCode\StructAndUnion\main.c
 * @Description: 
 * 
 * Copyright (c) 2022 by JackChouis, All Rights Reserved. 
 */
#include<stdio.h>
#include "test.h"
#include"test2.h"
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
void main()
{
    int s = add();
    printf("s value is %d\n", s);

    int ss = minus();
       printf("ss value is %d\n", ss);
    //   printf("test%d",sizeof(data));
}
