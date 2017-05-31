#include<iostream>
#include<string>
#include"operation.h"
#include"input.h"
using namespace std;

class output

{

private:

	bool judge;//判断用户答案是否错误 

	char expression[20];//运算式 

	int userans;//用户答案 

	int correctans;//正确答案 

public:

	void printsummary();//打印解题报告 

	void printjudge();//判断答案对错，从而决定如何反馈信息 

	void setjudge(bool a);//传入判断值

	void setuserans(int a);

	void setcorrectnum(int a);

}；