#include<iostream>
#include <stdlib.h> 
#include <ctime>
#include<stack>
#include"random.h"
using namespace std;

void scan();//�ú����������û���������ȡ��������

int com(int a, int b);//������󹫱�������Լ��

int calculateResult(char *a);//���ڼ������ɵ�����ʽ�Ľ��

void generateExpression(int &an);//������������ʽ

void print(int s, int c, int w);//��ͳ�ƽ��������û�