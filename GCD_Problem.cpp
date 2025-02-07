#include<bits/stdc++.h>
using namespace std;
void solve()
{
	int n;
	cin >> n;
	if(n%2==0)
	{
		cout << "2" <<" "<<n-3<<" "<<"1"<<endl;

	}
	else
	{
		int k = n - 1;
		for ( int i = 3; i< k ; i+=2)
		{
			if(__gcd(i,k-i) == 1)
			{
				cout << i << " " << k-i<< " " << "1"<<endl;
				break;
			}
		}
    }
}
int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		solve();
	}
	return 0;
}