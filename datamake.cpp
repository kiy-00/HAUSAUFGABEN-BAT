#include<iostream>
#include<time.h>
using namespace std;
int main()
{
	
	srand((unsigned int)time(0));
	
	for(int i=1;i<=10000;i++){
		int x=rand()%100000;
		cout<<x<<" \n"[i%10==0];
	}
	
	return 0;
}
