/*
1奇偶个数（5分）
题目内容：

你的程序要读入一系列正整数数据，输入-1表示输入结束，-1本身不是输入的数据。程序输出读到的数据中的奇数和偶数的个数。



输入格式:

一系列正整数，整数的范围是（0,100000）。如果输入-1则表示输入结束。



输出格式：

两个整数，第一个整数表示读入数据中的奇数的个数，第二个整数表示读入数据中的偶数的个数。两个整数之间以空格分隔。



输入样例：

9 3 4 2 5 7 －1 



输出样例：

4 2

时间限制：500ms内存限制：32000kb

2数字特征值（5分）
题目内容：

对数字求特征值是常用的编码算法，奇偶特征是一种简单的特征值。对于一个整数，从个位开始对每一位数字编号，个位是1号，十位是2号，以此类推。这个整数在第n位上的数字记作x，如果x和n的奇偶性相同，则记下一个1，否则记下一个0。按照整数的顺序把对应位的表示奇偶性的0和1都记录下来，就形成了一个二进制数字。比如，对于342315，这个二进制数字就是001101。



这里的计算可以用下面的表格来表示：



数字

3

4

2

3

1

5

数位

6

5

4

3

2

1

数字奇偶

奇

偶

偶

奇

奇

奇

数位奇偶

偶

奇

偶

奇

偶

奇

奇偶一致

0

0

1

1

0

1

二进制位值

32

16

8

4

2

1



你的程序要读入一个非负整数，整数的范围是[0,1000000]，然后按照上述算法计算出表示奇偶性的那个二进制数字，输出它对应的十进制值。



提示：将整数从右向左分解，数位每次加1，而二进制值每次乘2。



输入格式:

一个非负整数，整数的范围是[0,1000000]。



输出格式：

一个整数，表示计算结果。



输入样例：

342315



输出样例：

13

时间限制：500ms内存限制：32000kb

*/ 

#include<stdio.h> 
#include<stdlib.h>
#include<math.h>
 
int oddeven(void){
	int odd=0,even=0,num;
	while(scanf("%d",&num)){
		if(num==-1){
			break;
		}else if(num%2){
			even++;
		}else{
			odd++;
		}
	}
	printf("%d %d",odd,even);
	return 0;
}

int numT(void){
	int num,x=0,sum=0,temp=0,count=0;
	scanf("%d",&num);
	temp=num;								//变量temp取num值做运算 
	do{
		count++;							//count从0开始并且每次循环都++,比较temp最后一位的数字与count的奇偶性，if循环只有1==1或者0==0会执行 
		x=temp%10;							//如果if循环被执行，那count不等于1的时候则会进行加等2的count-1次方，如果count为1那么sum只能是1证明输入只有1位 
		if(x%2==count%2){					// 
			if(count!=1){
				sum=sum+pow(2.0,count-1);
			}else{
				sum=1;
			}
		}
		temp=temp/10;
	}while(temp>0);
	printf("%d",sum);
}
 

int main(void){
	oddeven(); 
	numT();
	return 0;
}
	
