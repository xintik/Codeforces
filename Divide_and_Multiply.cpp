#include<bits/stdc++.h>
using namespace std;
void solve()
{
	int n;
	cin >> n;
	vector < int > vec;
	int k=0;
	for(int i = 0; i< n;i++)
	{
		int x;
		cin >> x;
		
		if(x%2 == 0)
		{
			while( x%2 == 0)
			{
				x /= 2;
				k++;
			}
			vec.push_back(x);
		}
		else
		{
			vec.push_back(x);
		}
	}
	sort(vec.begin(),vec.end());
	long long sum = 0;
	for(int i=0;i<vec.size()-1;i++)
	{
		sum += vec[i];
	}
	long long ans = vec.back();
	cout << ans * (1LL << k) + sum << endl;
}
int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		solve();
	}
}