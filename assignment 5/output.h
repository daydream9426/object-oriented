#include<iostream>
#include<string>
#include"operation.h"
#include"input.h"
using namespace std;

class output

{

private:

	bool judge;//�ж��û����Ƿ���� 

	char expression[20];//����ʽ 

	int userans;//�û��� 

	int correctans;//��ȷ�� 

public:

	void printsummary();//��ӡ���ⱨ�� 

	void printjudge();//�жϴ𰸶Դ��Ӷ�������η�����Ϣ 

	void setjudge(bool a);//�����ж�ֵ

	void setuserans(int a);

	void setcorrectnum(int a);

}��