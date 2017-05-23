#include<iostream>
#include <stdlib.h> 
#include <ctime>
#include<stack>
#include<string>
#include"input.h"
class operation
{

private:

	bool judge;

	char experssion[20];

	int correctans;

	int userans;

public:

	char random();//生成随机数 

	void setexpression();//生成运算式 

	bool judgment();//判断结果是否是整数 

	void bolan();//转成逆波兰表达式 

	int calculate();//计算 

	void eornot(char *a);//判断用户输入是否有e 

}