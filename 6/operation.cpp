#include<iostream>
#include <stdlib.h> 
#include <ctime>
#include<stack>
#include"operation.h"
#include"random.h"
void scan()//该函数用于与用户交互，获取输入数据
{
	cout << "输入题目数量：" << endl;
	cout << "按e可终止答题" << endl;
}




int com(int a, int b)//计算最大公倍数用以约分 
{
	return a == 0 ? b : com(b%a, a);
}


int calculateResult(char *a)//用于计算生成的运算式的结果
{
	int up = 0, down = 1, i, count = 0, left, right;

	char bolan[30];
	stack<int>s1;
	stack<char>line;
	for (i = 0; i<7; i++)
	{
		if (a[i] >= '0'&&a[i] <= '9')
		{
			bolan[count] = a[i];
			count++;
		}
		else if (a[i] == '+' || a[i] == '-')
		{
			if (line.empty() == true)
				line.push(a[i]);
			else
			{
				while (line.empty() == false)
				{
					bolan[count] = line.top();
					count++;
					line.pop();
				}
				line.push(a[i]);
			}
		}
		else if (a[i] == '*' || a[i] == '/')
		{
			if (line.empty() == true)
				line.push(a[i]);
			else
			{
				while (line.empty() == false && (line.top() == '/' || line.top() == '*'))
				{
					bolan[count] = line.top();
					count++;
					line.pop();
				}
				line.push(a[i]);
			}
		}
	}
	while (line.empty() == false)
	{
		bolan[count] = line.top();
		count++;
		line.pop();
	}//生成逆波兰表达式 


	int l, r;

	for (i = 0; i<7; i++)
	{
		if (bolan[i] >= '0'&&bolan[i] <= '9')
		{
			s1.push(bolan[i] - '0');
		}
		else
		{
			r = s1.top();
			s1.pop();
			l = s1.top();
			s1.pop();
			if (bolan[i] == '+')
				s1.push(l + r);
			else if (bolan[i] == '-')
				s1.push(l - r);
			else if (bolan[i] == '*')
				s1.push(l*r);
		}
	}
	return s1.top();
}


void generateExpression(int &an)//用于生成运算式
{
	int i;
	char expression[7];
	for (i = 0; i<7; i++)
	{
		if (i % 2 == 0)
		{
			expression[i] = randomNumber();
		}
		else
		{
			expression[i] = randomOperation();
		}
		cout << expression[i];
	}
	cout << "=?";
	an= calculateResult(expression);
}


void print(int s, int c, int w)//将统计结果输出给用户
{
	cout << "----------------------------------------------" << endl;
	cout << "总数：" << s << endl;
	cout << "正确题数：" << c << endl;
	cout << "错误题数：" << w << endl;
}

