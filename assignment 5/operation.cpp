#include<iostream>
#include <stdlib.h> 
#include <ctime>
#include<stack>
#include<string>
#include"operation.h"
#include"input.h"
using namespace std;
char operation::random()//生成随机数 
{
	return rand() % 10 + 48;
}

void operation::setexpression()//生成运算式 
{}

bool operation::judgment()//判断结果是否是整数 
{}

void operation::bolan()//转成逆波兰表达式 
{}

int operation::calculate()//计算 
{}