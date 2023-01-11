#include<bits/stdc++.h>
using namespace std;


int main()
{
	srand((unsigned int)(time(0)));
	string s;
	
	//输入要测试的cpp的文件名，不含后缀 
	cin>>s;
	for(int i=0;i<=100;i++){
		int x1=i/100;
		int x2=i/10%10;
		int x3=i%10;
		string data=s;
		data.push_back('-');
		data.push_back(x1+'0');
		data.push_back(x2+'0');
		data.push_back(x3+'0');
		
		cout<<'['<<data<<']'<<endl;
		
		
	
			//以下是生成一组数据的方式 
		
		int f=1;
		
		int x;
		x=rand()&1;
		
		if(x)
			f=-1;
			
		cout<<f*rand()%1000000000;
		
		
		cout<<endl;
		cout<<endl;
		
	
	}
		
		
		
	
	return 0;
}
