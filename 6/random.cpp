#include<iostream>
#include <stdlib.h> 
#include <ctime>
#include<stack>
#include"random.h"
char randomNumber()//���������������
{
	return rand() % 10 + 48;
}
char randomOperation()//����������������
{
	int ope;
	ope = rand() % 3;
	if (ope == 0)
	{
		return '+';
	}
	else if (ope == 1)
	{
		return '-';
	}
	else if (ope == 2)
	{
		return '*';
	}
	else if (ope == 3)
	{
		return '/';
	}
}