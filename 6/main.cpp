#include<iostream>
#include <stdlib.h> 
#include <ctime>
#include<stack>
#include<string.h>
#include"operation.h"
#include"random.h"
using namespace std;
int main()
{
	int correctnumber = 0, wrongnumber = 0;
	srand((unsigned)time(0));
	scan();
	int questionnumber;
	cin >> questionnumber;
	int i;
	for (i = 0; i<questionnumber; i++)
	{

		cout << i + 1 << ",   ";
		 
		int userans, ans;

		generateExpression(ans);
		
		cin >> userans;
		if (userans == ans)
		{
			cout << "��ȷ" << endl;
			correctnumber++;
		}
		else
		{
			cout << "����" << endl;
			cout << "��ȷ���ǣ�" << ans << endl;
			wrongnumber++;
		}
	}
	print(questionnumber,correctnumber,wrongnumber);
	return 0;
}