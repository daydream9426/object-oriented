#include<iostream>
#include"input.h"
#include<string>
using namespace std;
void input::setuserans(string a)
{
	userans = a;
}

void input::setquesnum(int a)
{
	quesnum = a;
}

int input::getquesnum()
{
	return quesnum;
}

string getuserans()
{
	return userans;
}

