///1. Largest number from a given list of integers.
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i =1; i<=n; i++)
    {
        cin>>arr[i];
    }
    for(int i =1; i<n+1; i++)
    {
        if(arr[1]<arr[i])
        {
            arr[1]=arr[i];
        }
    }
    cout<<"Largest Element = " <<arr[1];
    return 0;
}
///2. calculate the roots of the quadratic equation ax 2 + bx + c = 0
//where a, b and c are known.
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a,b,c;
    cin>>a>>b>>c;
    int d = b*b - 4*a*c;
    int r1,r2,r;
    if(d>0)
    {
        r1=(-b + sqrt(d))/ (2*a);
        r2=(-b - sqrt(d))/ (2*a);
        cout<<r1<<" "<<r2<<endl;
    }
    else if(d==0)
    {
        r=-b/(2*a);
        cout<<r<<endl;
    }
    else
        cout<<"Not a real number."<<endl;

    return 0;
}
///3. create an array of n elements to read the marks of n students
//and then count how many students passed [pass marks ≥ 40] in the examination.
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, cnt=0;
    cin>>n;
    int arr[n];
    for(int i =1; i<=n; i++)
    {
        cin>>arr[i];
    }
    for(int i =1; i<n+1; i++)
    {
        if(arr[i]>=40)
        {
            cnt++;
        }
    }
    cout<<"Passed student = " <<cnt;

    return 0;
}
///4. create an array of n elements and then insert an element to the list.
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, pos, val;
    cin>>n>>pos>>val;
    int arr[n];
    for(int i =0; i<n; i++)
    {
        cin>>arr[i];
    }
    for(int i =n-1; i>=pos-1; i--)
    {
        arr[i+1]=arr[i];
    }
    arr[pos-1]=val;

    for(int i =0 ; i<=n; i++)
    {
        cout<<arr[i]<<" ";
    }

    return 0;
}
///5. create an array of n elements and then delete an element from the list.
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, pos;
    cin>>n>>pos;
    int arr[n];
    for(int i =1; i<=n; i++)
    {
        cin>>arr[i];
    }
    for(int i =pos; i<n; i++)
    {
        arr[i]=arr[i+1];
    }

    for(int i =1 ; i<=n-1; i++)
    {
        cout<<arr[i]<<" ";
    }

    return 0;
}
///6. sort n numbers using Bubble Sort algorithm.
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, temp;
    cin>>n;
    int arr[n];
    for(int i =1; i<=n; i++)
    {
        cin>>arr[i];
    }

    for(int i =1 ; i<=n-1; i++)
    {
        for(int j=1 ; j<=n-1; j++)
        {
            if (arr[j]>arr[j+1])
            {
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
    for(int i =1 ; i<=n; i++)
    {
        cout<<arr[i]<<" ";
    }

    return 0;
}
///7. Linear Search algorithm.
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, index, cnt=0, num;
    cin>>n>>num;
    int arr[n];
    for(int i =1; i<=n; i++)
    {
        cin>>arr[i];
    }

    for(int i =1 ; i<=n-1; i++)
    {
        if (arr[i]==num)
        {
            index=i;
            cnt++;
            break;
        }
    }
    if(cnt==0)
    {
        cout<<"Not found";
    }
    else
        cout<<"Found at index "<<index;
    return 0;
}
///8. Binary Search algorithm.
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,x;
    cin>>n>>x;
    int arr[n];
    for(int i =1; i<=n; i++)
    {
        cin>>arr[i];
    }
    int l=1, r=n;
    bool found = 0;
    while(l<=r)
    {
        int m=(l+r)/2;
        if(arr[m] == x)
        {
            found= 1;
            break;
        }
        else if(x<arr[m])
            r=m-1;
        else
            l=m+1;
    }
    if(found)
    {
        cout<<"Yes"<<endl;
    }
    else
        cout<<"No"<<endl;


    return 0;
}
///9. Prime sieve

#include <bits/stdc++.h>
using namespace std;
#define N 32768

long long prime[N];
bool sieve()
{
    prime[N]= {};
    prime[0]=1;
    prime[1]=1;
    for(int i=2; i<=sqrt(N); i++)
    {
        if(prime[i]==0)
        {
            for(int j=i*i; j<=N; j+=i)
            {
                prime[j]=1;
            }
        }
    }
}
int main()
{
    sieve();
    long long n;
    cin>>n;
    if(prime[n])
    {
        cout<<"Not Prime";
    }
    else
    {
        cout<<"Prime";
    }
    return 0;
}

///10. 100 randomly generated integer

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    srand(time(0));
    FILE*fp;
    fp=fopen("RAND.DAT", "w");
    for(int i=1; i<=100; i++)
    {
        fprintf(fp,"%d ", rand());
    }
    fclose(fp);

    fp=fopen("RAND.DAT", "r");
    for(int i=1; i<=100; i++)
    {
        fscanf(fp,"%d", &n);
        cout<<n<<endl;
    }
    fclose(fp);

    return 0;
}




