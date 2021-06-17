#include <bits/stdc++.h>
using namespace std;


void knapSack(int w, vector<int> &v1, vector<int> &v2)
{
	int n = v1.size();
	int dp[n+1][w+1];

	for (int i = 0; i <= n; i++) 
	{
		for (int j = 0; j <= w; j++) 
		{
			if (i == 0 || j == 0)
				dp[i][j] = 0;
			else if (v1[i - 1] <= j)
				dp[i][j] = max(v2[i - 1] + dp[i - 1][j - v1[i - 1]], dp[i - 1][j]);
			else
				dp[i][j] = dp[i - 1][j];
		}
	}

	cout<<"Answer : "<<dp[n][w]<<endl;
}

int main(void)
{
	int n;
	cin>>n;

	// weights
	vector<int> v1(n,0);
	for(int i=0;i<n;i++)
	{
		cin>>v1[i];
	}

	// values
	vector<int> v2(n,0);
	for(int i=0;i<n;i++)
	{
		cin>>v2[i];
	}

	int w;
	cin>>w;

	knapSack(w,v1,v2);
}