/*
 * @Author: JackChouis
 * @Date: 2022-03-15 23:58:26
 * @LastEditors: JackChouis
 * @LastEditTime: 2022-03-16 22:31:06
 * @FilePath: \VsCode\helloworld\helloworld.c
 * @Description: 指针的基本用法
 * 
 * Copyright (c) 2022 by JackChouis, All Rights Reserved. 
 */

#include<stdio.h>
#include<stdlib.h>
#define NUMELS 5

int findMax(int[],int);
int findMaxP(int *, int);

int main()
{
    int nums[] = {2, 18, 59, 47, 15};
    printf("最大值是%d\n",findMaxP(nums, (int)(sizeof(nums)/sizeof(int))));
    system("pause");
    return 0;
}
/**
 * @description: 求数组最大值
 * @param {int} vals
 * @param {int} numEls
 * @return {*}
 */
int findMax(int vals[],int numEls)
{
    int max = 0;
    for (int i = 0; i < numEls; i++)
    {
        max = vals[i] > max ? vals[i] : max;
    }      
    return max;
}


int findMaxP(int *p, int numEls)
{
    // int max = 0;
    // for (int i = 0; i < numEls; i++)
    // {
    //     max = *(p + i) > max ? *(p + i) : max;
    // }

    // return max;

    int max = 0;
    for (int i = 0; i < numEls;i++,p++)
    {
        max = max > *p ? max : *p;
    }
    return max;
}