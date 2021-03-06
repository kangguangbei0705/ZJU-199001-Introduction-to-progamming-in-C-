
//要额外注意如果第二个时间分钟小于第一个时间的分钟数，需要进行补位

/*
本题要求根据火车的出发时间和达到时间，编写程序计算整个旅途所用的时间。

输入格式：
输入在一行中给出2个4位正整数，其间以空格分隔，分别表示火车的出发时间和到达时间。每个时间的格式为2位小时数（00-23）和2位分钟数（00-59），假设出发和到达在同一天内。

输出格式：
在一行输出该旅途所用的时间，格式为“hh:mm”，其中hh为2位小时数、mm为2位分钟数。

输入样例：
1201 1530
输出样例：
03:29
*/

#include<stdio.h>
#include<math.h>

int train(void){
	int ta,tb,tm,th;
	scanf("%d %d",&ta,&tb);
	th=tb/100-ta/100;
	tm=tb%100-ta%100;
	if(tm<0){
		th=th-1;
		tm=tm+60;
	}
	printf("%02d:%02d",th,tm);
	return 0;
}

int main(void){
    train();
	return 0;
}
