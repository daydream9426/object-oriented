#include<iostream>
#include <stdlib.h> 
#include <ctime>
#include<stack>
#include<fstream> 
using namespace std;

void scan();//�ú����������û���������ȡ��������

int com(int a,int b);//������󹫱�������Լ��

int calculateResult(char *a);//���ڼ������ɵ�����ʽ�Ľ��

char* generateExpression();//������������ʽ

void print(int s,int c,int w);//��ͳ�ƽ��������û�

void writeFile_que(char *s, char * p, int correctans, int userans);

void writeFile_acc(char *s,int qusenum,int correctnum,int wrongnum);

int readFile(char * s);



