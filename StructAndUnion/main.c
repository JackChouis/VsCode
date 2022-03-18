/*
 * @Author: JackChouis
 * @Date: 2022-03-17 01:08:39
 * @LastEditors: JackChouis
 * @LastEditTime: 2022-03-18 21:13:50
 * @FilePath: \VsCode\StructAndUnion\main.c
 * @Description: 
 * 
 * Copyright (c) 2022 by JackChouis, All Rights Reserved. 
 */
#include<stdio.h>
#include "test.h"
extern int add();
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
    //   printf("test%d",sizeof(data));
}
