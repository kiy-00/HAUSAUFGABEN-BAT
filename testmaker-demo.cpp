#include<bits/stdc++.h>
using namespace std;
int main()
{
	
	string s;
	cin>>s;
	
	string stxt=s;
	string sre=s;
	
	stxt+="-test-data.txt";
	sre+="-demo-result.txt";
	
	cout<<"get_input_data "<<stxt<<' '<<s<<"-000"<<" | "<<s<<"-demo"<<" >"<<sre<<endl;
	for(int i=1;i<=100;i++)
	{
		string sdata=s;
		
		int x1=i/100;
		int x2=i/10%10;
		int x3=i%10;
		sdata.push_back('-');
		sdata.push_back(x1+'0');
		sdata.push_back(x2+'0');
		sdata.push_back(x3+'0');
		
		cout<<"get_input_data "<<stxt<<' '<<sdata<<" | "<<s<<"-demo"<<" >>"<<sre<<endl; 
	}

	return 0;
}
