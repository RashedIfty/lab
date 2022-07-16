1
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b;
    cin>>a>>b;
    if(a%b && b%a)cout<<"NO\n";
    else cout<<"YES\n";
}

2.
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a;
    cin>>a;
    for(int i=1; i<=a; i++)
    {
        for(int j=1; j<=a; j++)
        {
            if(i&1)cout<<'#';
            else cout<<'*';
        }
        cout<<endl;
    }
}

3.
#include<bits/stdc++.h>
using namespace std;
int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    int a,mx=-1,n;
    vector<int>v;
    cin>>n;
    for(int i=0; i<n; i++)
    {
        cin>>a;
        mx = max(a,mx);
        v.push_back(a);
    }
    for(int i=0; i<n; i++)
    {
        if(!v[i])
        {
            v[i] = mx;
        }
    }
    for(int i=0; i<n; i++)
    {
        cout<<v[i]<<" ";
    }

}

4
#include<bits/stdc++.h>
using namespace std;
int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    string s;
    cin>>s;
    for(int i=0; i<s.size(); i++)
    {
        if(s[i]=='a' || s[i]=='e' || s[i]=='i' ||s[i]=='o' ||s[i]=='u')s[i]='0';
    }
    for(int i=0; i<s.size()-2; i++)
    {
        if(s[i]=='0' && s[i+1]=='0' && s[i+2]=='0')
        {
            cout<<"YES" << endl;
            return 0;
        }
    }
    cout<<"NO"<<endl;
}

5.
#include<bits/stdc++.h>
using namespace std;
int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    string s;
    cin >> s;
    int a;
    cin >> a;
    while (a--)
    {
        int l, r,ans=0;
        cin >> l >> r;
        for (int i = l-1; i < r; i++)
        {
            if (s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u')
                ans++;
        }
        cout<<ans<<endl;
    }
}


6.
#include<bits/stdc++.h>
using namespace std;

int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    int a,x;
    cin >> a;
    map<int,int>mp;
    int c[100005] = {0};
    for (int i = 0; i < a; i++)
    {
        cin >> x;
        if(mp.find(x)!=mp.end())
        {
            mp.find(x)->second++;
        }
        else mp.insert({x,1});
    }
    map<int,int>::iterator it;
    for (it = mp.begin(); it!=mp.end(); it++)
    {
        if(it->second==1)
        {
            cout<<it->first<<" ";
        }
    }
}
