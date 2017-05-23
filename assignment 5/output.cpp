#include<iostream>
#include <stdlib.h> 
#include <ctime>
#include<stack>
#include<string>
#include"operation.h"
#include"input.h"
#include"output.h"
using namespace std;

void output::printsummary()//打印解题报告 
{
	cout << "----------------------------------------------" << endl;
	cout << "总数：" << questionnumber << endl;
	cout << "正确题数：" << correctnumber << endl;
	cout << "错误题数：" << wrongnumber << endl;
}

void output::printjudge()//判断答案对错，从而决定如何反馈信息 
{
	if (userans[i] == ans[i])
	{
		cout << "正确" << endl;
		correctnumber++;
	}
	else
	{
		cout << "错误" << endl;
		cout << "正确答案是：" << ans[i] << endl;
		wrongnumber++;
	}
}

void output::setjudge(bool a)//传入判断值
{
	judge = a;
}

void output::setuserans(int a)
{
	userans = a;
}

void output::setcorrectnum(int a)
{
	correctnum = a;
}