#include<iostream>
#include <stdlib.h> 
#include <ctime>
#include<stack>
#include"random.h"
using namespace std;

void scan();//该函数用于与用户交互，获取输入数据

int com(int a, int b);//计算最大公倍数用以约分

int calculateResult(char *a);//用于计算生成的运算式的结果

void generateExpression(int &an);//用于生成运算式

void print(int s, int c, int w);//将统计结果输出给用户