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

	char random();//��������� 

	void setexpression();//��������ʽ 

	bool judgment();//�жϽ���Ƿ������� 

	void bolan();//ת���沨�����ʽ 

	int calculate();//���� 

	void eornot(char *a);//�ж��û������Ƿ���e 

}