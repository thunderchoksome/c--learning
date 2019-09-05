#include <iostream>
#include <cstring>
#include <string>
using namespace std;




int main()
{
	int n=0;
	int k;
	char m[200];
	char d[200];
	cout << "请输入明文" << endl;
    
	scanf ("%[^\n]]",m);
	
	cout << "请输入k值" << endl;
	cin >> k;
	
	
   
	
	
	
	n=strlen(m) ;
	for (int i = 0; i<n; i++)
		{
		    d[i] = k+m[i];
		}
	cout << "密文输出" << endl;
	
	
	for (int i = 0; i<n; i++)
	{
		cout << d[i];
		
	}
	cout << endl;
	
	cout << "加密前明文" << endl;
	
	for (int i = 0; i<n; i++)
	{
		cout << m[i];
		
			
	}
	cout << endl;
	



	return 0;
}
