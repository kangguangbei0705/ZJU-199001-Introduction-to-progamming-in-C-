/*
本题要求编写程序，计算摄氏温度26°C 对应的华氏温度。计算公式：F=9×C/5+32，式中：C表示摄氏温度，F表示华氏温度，输出数据要求为整型。

输入格式:
本题目没有输入。

输出格式:
按照下列格式输出

celsius = 26, fahr = 对应的华氏温度整数值
*/

#include<stdio.h>

int main(void){
    int fahr = 0,celsius = 26;
    fahr = 9*celsius/5.0+32;
    printf("celsius = %d, fahr = %d",celsius,fahr);
    return 0;
}
