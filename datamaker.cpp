#include<bits/stdc++.h>
using namespace std;
int main()
{
	string s;
	
	//����Ҫ���Ե�cpp���ļ�����������׺ 
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
		
		
		//����������һ�����ݵķ�ʽ 
		
		
		
		
		int x=1900+rand()%201;
		int y=rand()%12+1;
		
		
		int d=rand()%28+1;
		
		cout<<x<<' '<<y<<' '<<d;
		
		
		/*
		����� 
		int xx2=rand()%100;
		
		double y2=1.0*xx2/100;
		
		
		long long y1=rand()%10000000000;
		
	
		double y=y1+y2;
		
		if(i==38)
			y=0.00;
		if(i==37)
			y=0.02;
			
		if(i==36)
			y=1.20;
		
		if(i==35)
			y=1.01;
		
		if(i>40&&y<3000000000)
			y+=2000000000;
		*/
		//cout<<y;
		cout<<endl;
		cout<<endl;
		
	}
	
	return 0;
}
