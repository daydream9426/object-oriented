#include<iostream>
#include <stdlib.h> 
#include <ctime>
#include<stack>
#include<string>
#include"operation.h"
#include"input.h"
#include"output.h"
using namespace std;

void output::printsummary()//��ӡ���ⱨ�� 
{
	cout << "----------------------------------------------" << endl;
	cout << "������" << questionnumber << endl;
	cout << "��ȷ������" << correctnumber << endl;
	cout << "����������" << wrongnumber << endl;
}

void output::printjudge()//�жϴ𰸶Դ��Ӷ�������η�����Ϣ 
{
	if (userans[i] == ans[i])
	{
		cout << "��ȷ" << endl;
		correctnumber++;
	}
	else
	{
		cout << "����" << endl;
		cout << "��ȷ���ǣ�" << ans[i] << endl;
		wrongnumber++;
	}
}

void output::setjudge(bool a)//�����ж�ֵ
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