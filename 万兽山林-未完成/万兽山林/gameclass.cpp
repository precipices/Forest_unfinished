#include<iostream>
using namespace std;
#include<string>
#include<ctime>
#include<conio.h>
//#include"func.h"
char get_ca(char c[],int n)
{
	char sel;
	while(1)
	{
		sel=_getch();
		for(int i=0;i<n;i++)
		{
			if(sel==c[i])
				return c[i];
		}
	}
}

class Point
{
private:
	int x,y;
public:
	Point(){}
	Point(int x,int y):x(x),y(y){}
	//Point east(){return Point(x+1,y);}
	//Point west(){return Point(x-1,y);}
	//Point south(){return Point(x,y-1);}
	//Point north(){return Point(x,y+1);}
	Point &getPoint(){return *this;}
};
//string diradj[]={"¶«","ÄÏ","Î÷","±±","¶«ÄÏ","¶«±±","Î÷ÄÏ","Î÷±±"};
//string coladj[]={"³à","ºç","Çà","À¼","»Æ","ºÚ","´ä","","","","","","","","",""};
//string aninoun[]={"Áú","»¢","ÀÇ","·ï","¹í",""};
//"Ëé","¶³","ÁÑ","¶Ï","Èý","Æß","´Ô","¸Û","µØ","µ×","Éý","Ì«","Ð¡","Ó¢","Âù","Íõ","Àû","±©","Ëø","Ï÷","Ò°","¸£","¹â","ÈÕ","´ä","É³","Æ½","»Æ","¸ß","¹ñ","Ñý","À¼","·Ï","µç"
//""","""","""","""","""","""","""","""","""",""10,"""","""","""","""","""","""","""","""","""",""10,"""","""","""","""","""","""","""","""","""9
string adj1[]=
{"Èð","Çå","ÁÒ","Ñ×","º®","°µ","³à","ºç","Çà","×Ï","°×","Ðþ","Âä","Çç","Ìú","¶ñ","Ìì","Áé","Éñ","Ä§","Ê´","Àë","Ñª","ÓÄ","Á¶","Ò¹","ÃÖ","Î×","¾²","¹Â","éâ","´¹","èó","ÁÓ","»Ä"};
string noun1[]=
{"Òõ","Ó°","Ñô","ÐÇ","ÔÂ","ÑÒ","Ê¯","ÔÆ","Óê","Í©","Áú","»¢","ÀÇ","¹í","Ó¥","»Ê","·ï","·ç","»ê","ÆÇ","¹Ç","ÍÓ"};
string land[]=
{"ÆÖ","¹È","Ôó","ºþ","¶´","Ñ¨","É½","ÁÖ","Ðæ","Èª","¶¥","·å","Ì²","Ì¶","ÑÂ","±Ú","Ï¿","Çð","ÆÂ","²´","¹µ","ÛÖ","ºÓ","Ì¨","¸Ô","Áë","’","ÅèµØ","²ÝÔ­","Ô­Ò°","Ð¡¾¶"};
class Gamemap
{
private:
	//int ID;
	int x;
	int y;
	Point po;
	int monID[8];
	int npcID;
	static int map_count;
	static int map_num;
	static Gamemap *map;
	bool map_open;
	Gamemap *nmap;//±±
	Gamemap *smap;//ÄÏ
	Gamemap *wmap;//Î÷
	Gamemap *emap;//¶«
	string name;
public:
	Gamemap()
	{
		name=adj1[rand()%35]+noun1[rand()%22]+land[rand()%31];
		po=Point(x,y);
	}
	Gamemap(int x,int y)
	{
		name=adj1[rand()%35]+noun1[rand()%22]+land[rand()%31];
		po=Point(x,y);
	}
	Gamemap east(){return Gamemap(x+1,y);}
	void shownext()
	{
		char sel;
		cout<<"[W/w]\nÏò±±×ß[S/s]ÏòÄÏ×ß\n[A/a]ÏòÎ÷×ß\n[D/d]Ïò¶«×ß"<<endl;
		char c[8]={'W','w','S','s','A','a','D','d'};
		sel=get_ca(c,8);
		switch(sel)
		{
		case 'W':
		case 'w':break;
		}
	}
	string getname(){return name;}
	void meet()
	{
		int k=0;
		system("cls");
		cout<<"ÄãÓöµ½ÁË£º"<<endl;
		if(rand()%80)
			cout<<"["<<k++<<"]"<<endl;
	}
};
int Gamemap::map_count=0;
int Gamemap::map_num=10;
Gamemap *Gamemap::map=new Gamemap[map_num];

int main()
{
	srand(unsigned(time(NULL)));
	Gamemap map[1000];
	for(int i=0;i<1000;i++)
	{
		cout<<map[i].getname()<<((i+1)%6?'\t':'\n');
	}	

	system("pause");
	return 0;
}
/**/