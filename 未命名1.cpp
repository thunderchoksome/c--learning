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
	cout << "����������" << endl;
    
	scanf ("%[^\n]]",m);
	
	cout << "������kֵ" << endl;
	cin >> k;
	
	
   
	
	
	
	n=strlen(m) ;
	for (int i = 0; i<n; i++)
		{
		    d[i] = k+m[i];
		}
	cout << "�������" << endl;
	
	
	for (int i = 0; i<n; i++)
	{
		cout << d[i];
		
	}
	cout << endl;
	
	cout << "����ǰ����" << endl;
	
	for (int i = 0; i<n; i++)
	{
		cout << m[i];
		
			
	}
	cout << endl;
	



	return 0;
}
