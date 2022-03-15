/*
 * @Description: In User Settings Edit
 * @Author: your name
 * @Date: 2019-10-04 19:23:10
 * @LastEditTime: 2019-10-08 23:39:26
 * @LastEditors: Please set LastEditors
 */

#include<stdio.h>
#include<stdlib.h>
/**
 * @description: 
 * @param {type} 
 * @return: 
 */
int main()
{
    /**positon ：
     * 00 01 02    0 1 2 
     * 10 11 12    3 4 5 
     * 20 21 22    6 7 8 
     */
    //TODO:todotest haha
    int position = 0;
    for(;position<9;position++)
    {
        if (position%3 == 0)
        {
            printf("将：%d  帅： %d\n",position, position+1);
            printf("将：%d  帅： %d\n",position, position+2);
        }
    }
    

    system("pause");
    return 0;
}
