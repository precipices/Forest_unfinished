#include<iostream>
using namespace std;
#include<conio.h>
#include<ctime>
#include<Windows.h>
//һ��ȫ���׹⣬ע�⣬ʹ�øú���������
void secondwhite()
{
	system("cls");
	system("color f7");Sleep(1000);system("color 07");
}
//�׹���˸��ע�⣬ʹ�øú���������
void flashwhite()
{
	system("cls");
	system("color f7");Sleep(100);system("color 08");Sleep(50);system("color f7");Sleep(100);system("color 07");
}
void background()
{
	char sel;
	system("cls");
	cout<<"�Ƿ�������Ϸ������\n[1]��\n[0]��"<<endl;
	do
	sel=_getch();
	while(sel!='1'&&sel!='0');
	if(sel=='1')return;
	system("cls");
	cout<<"������ϵ���۸��ӣ�����������ɢ�����治��"<<endl;_getch();
	cout<<"����ʱ�������ɱ����Ͷ��·���㣬�ӽ��˻�����Σ��������յء���"<<endl;_getch();
	cout<<"����ɽ�֣�"<<endl;_getch();
	cout<<"����ɢ����������ǣ�Ҳ��������ǿ�ڴ˵�����"<<endl;_getch();
	cout<<"���㣬������һ���أ�"<<endl;_getch();
	secondwhite();
}
void welcome()
{
	system("cls");
	cout<<"��ӭ������Ϸ������ɽ�֡������磡"<<endl;Sleep(1000);
	cout<<"ף����Ϸ��죡"<<endl;Sleep(1000);
	secondwhite();
}
bool gameexit()
{
	char sel;
	system("cls");
	cout<<"ȷ���˳���\n[1]ȷ��\n[0]����һ���"<<endl;
	do
	sel=_getch();
	while(sel!='1'&&sel!='0');
	if(sel=='1')return true;
	return false;
}
bool gameread()
{
	system("cls");
	cout<<"����"<<endl;_getch();
	return false;
}
void gamehelp()
{
	system("cls");
	cout<<"����"<<endl;_getch();
}
void makeInfo()
{
	system("cls");
	cout<<"����"<<endl;_getch();
}
int maint()
{
	char sel;
	welcome();
	while(1)
	{
		while(1)
		{
			system("cls");
			cout<<"������ɽ�֡�"<<endl;
			cout<<"[1]�µĿ�ʼ\n[2]��ȥ�Ĺ���\n[3]��Ϸ����\n[4]������Ϣ\n[0]�˳���Ϸ"<<endl;
			do
			sel=_getch();
			while(sel<'0'||sel>'4');
			switch(sel)
			{
			case '0':
				if(gameexit()) return 0;
				continue;
			case '1':
				system("cls");
				background();
				cout<<"����"<<endl;
				break;
			case '2':
				if(gameread())break;
				continue;
			case '3':
				gamehelp();
				continue;
			case '4':
				makeInfo();
				continue;
			}
		}
	}
	return 0;
}