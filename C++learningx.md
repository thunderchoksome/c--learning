#C++练习1
---
第一步：输入一段文本，统计文本的行数，单词数及字符数。假定单词之间以空格、跳格或换行符间隔，且文本没有空行。将所输入的内容保存和统计结果输出到文件Text.txt中。
第二步：显示菜单1.全部大写2.全部小写3.单词首字母大写。要求：菜单以函数实现，并进行选项输入合法性的判断；对新的文本文档进行存储，文件名为Textout1.txt Textout2.txt Textout3.txt

代码实现：
```

	#include <fstream>
	#include <iostream>
	using namespace std;
	int textin();
	int textmenu();
	int Mtext();
	int mText();
	int MwordText();
	char chchangem(char i);
	char chchangeM(char i);

	int textin()//文本输入和统计，并输出到Text.txt 
	{
		int ch;
		int nline=0,nword=0,nch=0;
		int isword=0;
		ofstream Text;
		Text.open("Text.txt");
		char chin;
		cout<<"输入一段文本（无空行）以：` 为结束"<<endl;
		Text<<"原文"<<endl;
		do{
			ch=cin.get();
			chin=char(ch);
			Text<<chin;
			if(ch=='\n') nline++;
			if(ch!=' ' && ch!='\t' && ch!='\n' && ch!='`')
			{
				if(!isword) nword++;
				nch++;
				isword=1;
			}
			else isword=0;
	
		}while(ch!='`');
				Text<<"---------------------------------------"<<endl;
		Text<<"统计结果"<<endl;
		Text<<"行数："<<nline<<endl;
		Text<<"单词数："<<nword<<endl;
		Text<<"字符数："<<nch<<endl;
		Text.close();
		return 0;

	}
	int textmenu()//菜单 
	{
		cout<<"功能菜单"<<endl;
		cout<<"(1)全部大写"<<endl;
		cout<<"(2)全部小写"<<endl;
		cout<<"(3)单词首字母大写"<<endl;
		return 0;
	
	
	}
	int Mtext()//全大写 
	{
		char ch;
		int nline=0,nword=0,nch=0,i=0;
			char chout,chin;
			int isword=0;
			ifstream Text;
		Text.open("Text.txt");
		ofstream Textout1;
		Textout1.open("Textout1.txt");
		do
		{
			Text.get(ch);
		}while (ch!='\n');//过滤标题 
		
		Textout1<<ch;
		do{
			chin=Text.get();
			chout=chchangeM(chin);
			Textout1<<chout;
		}while(chin!='`');
		Textout1<<"-------------------------------------------	-------------"<<endl;
		Textout1.close();
		Text.close();
	
	}
	int mText()//全小写 
	{
		char ch;
		int i=0;
		char chout,chin;
		int isword=0;
		ifstream Text;
		Text.open("Text.txt");
		ofstream Textout2;
		Textout2.open("Textout2.txt");
		do
		{
			Text.get(ch);
		}while (ch!='\n');//过滤标题 
	
		Textout2<<ch;
		do{
			chin=Text.get();
			chout=chchangem(chin);
			Textout2<<chout;
		}while(chin!='`');
		Textout2<<"-------------------------------------------	-------------"<<endl;
		Textout2.close();
		Text.close();
		
	}
	int MwordText()//首字母大写 
	{
		char ch;
		int nword=0,i=0;
		char chout,chin;
		int isword=0;
		ifstream Text;
		Text.open("Text.txt");
		ofstream Textout3;
		Textout3.open("Textout3.txt");
		do
		{
			Text.get(ch);
		}while (ch!='\n');//过滤标题 
		Textout3<<ch;
		do{
			chin=Text.get();
			if(chin!=' ' && chin!='\t' && chin!='\n' && 	chin!='`')
			{
				if(!isword)
				{
					chout=chchangeM(chin);
					Textout3<<chout;
				}
				else
					Textout3<<chin;
				isword=1;
			}
			else 
			{
				isword=0;
				Textout3<<chin;
			}
			
			
		}while(chin!='`');
		Textout3<<"-------------------------------------------	-------------"<<endl;
		Textout3.close();
		Text.close();
	}
	char chchangem(char i)//大写转小写 
	{
		int sign;
		sign=int(i);
		if (sign>=65 && sign<=90)
			{
				sign=sign+32;
				i=char(sign);
				return i;
			}
		else
			return i;
		
	}
	char chchangeM(char i)//小写转大写 
	{
		int sign;
		sign=int(i);
		if (sign>=97 && sign<=122)
			{
				sign=sign-32;
				i=char(sign);
				return i;
			}
		else
				return i;
	
	}
	
	int main()
	{
		int sign;
		textin();
		textmenu();
		cout<<"请选择你所需要的功能（回复：1，2，3）："<<endl;
		cin>>sign;
		cout<<endl;
		if(sign>0 && sign<4){
		
		switch(sign)//功能选择 
		{
			case 1:Mtext();break;
				case 2:mText();break;
			case 3:MwordText();break;
		}
		}
		else
		{
			cout<<"您输入的格式不正确"<<endl; 
		}
		
		return 0;
	
	}

```

good!!!继续努力！以后要注意程序的规范！！！