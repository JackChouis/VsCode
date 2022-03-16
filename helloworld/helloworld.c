/*
 * @Author: JackChouis
 * @Date: 2022-03-15 23:58:26
 * @LastEditors: JackChouis
 * @LastEditTime: 2022-03-17 00:53:46
 * @FilePath: \VsCode\helloworld\helloworld.c
 * @Description: 指针的基本用法
 *
 * Copyright (c) 2022 by JackChouis, All Rights Reserved.
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int findMax(int *, int);

struct Arr
{
    int num;   //动态数组元素数量
    char *ptr; //存储指向数组的指针
};
void init_Arr(struct Arr *, int);

int main()
{
    int nums[] = {2, 18, 59, 47, 15};
    printf("最大值是%d\n", findMax(nums, sizeof(nums) / sizeof(int)));

    //字符串赋值声明的时候赋值
    char msg[] = "this is a message";
    char *msgP = "this is a  PPPP message";
    printf("%s\n", msgP);
    printf("%c\n", *msgP);
    //字符串赋值 使用strcpy函数
    char msgCpy[sizeof(msg) / sizeof(char)];
    strcpy(msgCpy, msg);
    printf("%s\n", msg);

    //动态分配数组
    // int *ptr;
    // int len = 8;
    // ptr = (int *)malloc(sizeof(int) * len);
    // free(ptr);//使用完必须释放内存
    // ptr = NULL;//使用完指针后置空 否则变成野指针

    //动态分配数组
    // struct Arr arr;
    // init_Arr(&arr, 20);
    // strcpy(arr.ptr, "hello world");
    // printf("%s\n", arr.ptr);
    // free(arr.ptr);
    // arr.ptr = NULL;

    //指针数组 是对一个单一字符串指针声明的扩展
    char *seasons[4];
    seasons[0] = "Winter";
    seasons[1] = "Spring";
    seasons[2] = "Summer";
    seasons[3] = "Fall";
    // or
    char *seasons2[4] = {"Winter", "Spring", "Summer", "Fall"};
    printf("%s\n", seasons);
    printf("%s\n", seasons[0]);
    printf("%c\n", *seasons);
    printf("%c\n", **seasons);
    printf("%c\n", *seasons[0]);
    return 0;
}

/**
 * @description: 求数组最大值
 * @param {int} *p
 * @param {int} numEls
 * @return {*}
 */
int findMax(int *p, int numEls)
{
    // int max = 0;
    // for (int i = 0; i < numEls; i++)
    // {
    //     max = *(p + i) > max ? *(p + i) : max;
    // }

    // return max;

    int max = 0;
    for (int i = 0; i < numEls; i++, p++)
    {
        max = max > *p ? max : *p;
    }
    return max;
}

/**
 * @description: 如果内存不足,则返回 NULL。若要返回指向非 void 类型的指针,请在返回值上使用类型转换
 * @param {Arr} *pArray
 * @param {int} len
 * @return {*}
 */
void init_Arr(struct Arr *pArray, int len)
{
    //申请0字节内存，函数并不返回NULL，而是返回一个正常的内存地址，但是无法使用
    if (len > 0)
    {
        pArray->ptr = (char *)malloc(sizeof(char) * len);
        if (pArray->ptr == NULL)
        {
            printf("动态分配%d字节内存分配失败\n", sizeof(char) * len);
        }
        else
        {
            pArray->num = len;
            printf("动态分配%d字节内存分配成功\n", pArray->num);
        }
    }
    else
    {
        printf("申请0字节内存,停止动态内存分配\n");
    }
}