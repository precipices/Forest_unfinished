#include<iostream>
using namespace std;
#include<conio.h>
#include<ctime>
#include<Windows.h>
//一秒全屏白光，注意，使用该函数会清屏
void secondwhite()
{
	system("cls");
	system("color f7");Sleep(1000);system("color 07");
}
//白光闪烁，注意，使用该函数会清屏
void flashwhite()
{
	system("cls");
	system("color f7");Sleep(100);system("color 08");Sleep(50);system("color f7");Sleep(100);system("color 07");
}
void background()
{
	char sel;
	system("cls");
	cout<<"是否跳过游戏背景？\n[1]是\n[0]否"<<endl;
	do
	sel=_getch();
	while(sel!='1'&&sel!='0');
	if(sel=='1')return;
	system("cls");
	cout<<"修真界关系错综复杂，门派林立，散修生存不易"<<endl;_getch();
	cout<<"而这时，被仇家杀得走投无路的你，逃进了机遇与危机并存的险地——"<<endl;_getch();
	cout<<"凶兽山林！"<<endl;_getch();
	cout<<"无数散修在这里埋骨，也有无数豪强在此地崛起"<<endl;_getch();
	cout<<"而你，会是哪一个呢？"<<endl;_getch();
	secondwhite();
}
void welcome()
{
	system("cls");
	cout<<"欢迎进入游戏【凶兽山林】的世界！"<<endl;Sleep(1000);
	cout<<"祝您游戏愉快！"<<endl;Sleep(1000);
	secondwhite();
}
bool gameexit()
{
	char sel;
	system("cls");
	cout<<"确认退出？\n[1]确定\n[0]再玩一会儿"<<endl;
	do
	sel=_getch();
	while(sel!='1'&&sel!='0');
	if(sel=='1')return true;
	return false;
}
bool gameread()
{
	system("cls");
	cout<<"暂无"<<endl;_getch();
	return false;
}
void gamehelp()
{
	system("cls");
	cout<<"暂无"<<endl;_getch();
}
void makeInfo()
{
	system("cls");
	cout<<"暂无"<<endl;_getch();
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
			cout<<"【凶兽山林】"<<endl;
			cout<<"[1]新的开始\n[2]过去的故事\n[3]游戏帮助\n[4]制作信息\n[0]退出游戏"<<endl;
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
				cout<<"暂无"<<endl;
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