#include <bits/stdc++.h>
using namespace std;

int main(void)
{
	int n;
	cin>>n;

	vector<int> v(n,0);
	for(int i=0;i<n;i++)
	{
		cin>>v[i];
	}

	// customer amount
	int p;
	cin>>p;

	// robot number
	int l;
	cin>>l;

	int cnt=0;
	for(int i=0;i<v.size();i++)
	{
		if(p%v[i]==0)
			cnt++;
	}
	if(cnt==l)
		cout<<"Right"<<endl;
	else
		cout<<"Wrong"<<endl;
}