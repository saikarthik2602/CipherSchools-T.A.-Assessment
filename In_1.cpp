#include <bits/stdc++.h>
using namespace std;

int main(void)
{
	int n;
	cin>>n;
	vector<int> v;
	if(n%2==1)
	{
		n--;
		v.push_back(0);
	}	
	int temp = 1;
	while(n>0)
	{
		v.push_back(temp);
		n--;
		v.push_back(temp*-1);
		n--;
		temp++;
	}
	int s = 0;
	for(int i=0;i<v.size();i++)
	{
		cout<<v[i]<<" ";
		s=s+v[i];
	}
	cout<<endl;
	cout<<"Total sum : "<<s<<endl;
}