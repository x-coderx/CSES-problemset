#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define vt vector
#define ar array
#define pb push_back
#define all(v) v.begin(),v.end()

int main()
{
    int n;
    cin>>n;
    vector<int> v(n+1,0);
    for(int i=0;i<n-1;i++)
    {
        int temp;
        cin>>temp;
        v[temp] = 1;
    }

    for(int i=1;i<=n;i++)
    {
        if(!v[i])
        {
            cout<<i;
            break;
        }
    }

    return 0;
}

