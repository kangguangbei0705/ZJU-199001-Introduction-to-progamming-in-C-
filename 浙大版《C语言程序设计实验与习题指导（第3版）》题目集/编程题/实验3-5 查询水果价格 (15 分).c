/*
给定四种水果，分别是苹果（apple）、梨（pear）、桔子（orange）、葡萄（grape），单价分别对应为3.00元/公斤、2.50元/公斤、4.10元/公斤、10.20元/公斤。

首先在屏幕上显示以下菜单：

[1] apple
[2] pear
[3] orange
[4] grape
[0] exit
用户可以输入编号1~4查询对应水果的单价。当连续查询次数超过5次时，程序应自动退出查询；不到5次而用户输入0即退出；输入其他编号，显示价格为0。

输入格式:
输入在一行中给出用户连续输入的若干个编号。

输出格式:
首先在屏幕上显示菜单。然后对应用户的每个输入，在一行中按格式“price = 价格”输出查询结果，其中价格保留两位小数。当用户连续查询次数超过5次、或主动输入0时，程序结束。

输入样例1:
3 -1 0 2
输出样例1:
[1] apple
[2] pear
[3] orange
[4] grape
[0] exit
price = 4.10
price = 0.00
输入样例2:
1 2 3 3 4 4 5 6 7 8
输出样例2:
[1] apple
[2] pear
[3] orange
[4] grape
[0] exit
price = 3.00
price = 2.50
price = 4.10
price = 4.10
price = 10.20
*/


#include<stdio.h>
#include<stdlib.h>	
#include<time.h>

double fruitCheck(int N)
{
	switch(N){
		case 1:
		printf("price = 3.00\n");
		break;
		case 2:
		printf("price = 2.50\n");
		break;
		case 3:
		printf("price = 4.10\n");
		break;
		case 4:
		printf("price = 10.20\n");
		break;
		default:
		printf("price = 0.00\n");
	}
}


int main()
{
	int i,N,count;
	double price,temp;
	printf("[1] apple\n[2] pear\n[3] orange\n[4] grape\n[0] exit\n");
	for(i=0;i<5;i++){
		scanf("%d",&N);
		if(N==0){
			break;
		}
		fruitCheck(N);
		}

	return 0;
}

/*
#include<stdio.h>
#include<stdlib.h>	
#include<time.h>

double fruitCheck(int N)
{double temp;
	switch(N){
		case 1:
		temp=3.00;
		return temp;
		case 2:
		temp=2.50;
		return temp;
		case 3:
		temp=4.10;
		return temp;
		case 4:
		temp=10.20;
		return temp;
		default:
		temp=0.00;
		return temp;
	}
}


int main()
{
	int i,N,count;
	double price,temp;
	printf("[1] apple\n[2] pear\n[3] orange\n[4] grape\n[0] exit\n");
	for(i=0;i<5;i++){
		scanf("%d",&N);
		if(N==0){
			break;
		}
		price =fruitCheck(N);
		printf("Price = %lf\n",price);
		
	}

	return 0;
}
*/
