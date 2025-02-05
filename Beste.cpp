    #include<bits/stdc++.h>
    using namespace std;
    void solve()
    {
        int n;
        cin >> n;
        vector < int > vec;
        int g;
        for( int i = 0; i< n; i++)
        {
            int x;
            cin >> x;
           vec.push_back(x);
           if(i == 0)
           {
               g = x;
           }
           g = __gcd(x,g);
        }
        if(g==1)
        {
            cout << "0\n";
            return;
        }
        if(__gcd(g,n)==1)
        {
            cout << "1\n";
            return;
        }
        if(__gcd(g,n-1)==1)
        {
            cout << "2\n";
            return;
        }
        cout << "3\n";
        return ;
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