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
		
		int n=rand()%10+1;
		char src,dst;
		if(i<15)
			src='A',dst='B';
		if(i<25)
			src='B',dst='C';
		else
			src='C',dst='A';
			
		cout<<n<<'\n';
		cout<<src<<'\n';
		cout<<dst<<'\n';
		
		cout<<endl;
		cout<<endl;
		
	}
	
	return 0;
}
