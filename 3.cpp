//1. the Factorial
///a. using recursive
#include<bits/stdc++.h>
using namespace std;

#define vl vector<long long int>
#define vi vector<int>
#define pb push_back
#define all(x) (x).begin(), (x).end()

#define ll long long int
#define ld long double

#define fr(i,n) for (ll i=0;i<n;i++)
#define fr1(i,n) for(ll i=1;i<=n;i++)

#define endl '\n'

int factorial(int a)
{
    if(a == 0) return 1;
    else return a*factorial(a-1);
}

int main()
{
    ///Peace be with you.

    ll n;
    cout << "Enter the Number you want to FACTORIAL : ";
    cin >> n;

    ll ans = factorial(n);

    cout << endl;
    cout << "Factorial of " << n << " is :" << endl;
    cout << n << "! = " << ans << endl;

    return 0;
}


///b. using non-recursive
#include<bits/stdc++.h>
using namespace std;

#define vl vector<long long int>
#define vi vector<int>
#define pb push_back
#define all(x) (x).begin(), (x).end()

#define ll long long int
#define ld long double

#define fr(i,n) for (ll i=0;i<n;i++)
#define fr1(i,n) for(ll i=1;i<=n;i++)

#define endl '\n'

int factorial(int a)
{
    ll fact = 1;

    if(a == 0) return fact;
    else
    {
        for(ll i=1;i<=a;i++)
        {
            fact = i*fact;
        }
        return fact;
    }
}

int main()
{
    ///Peace be with you.

    ll n;
    cout << "Enter the Number you want to FACTORIAL : ";
    cin >> n;

    ll ans = factorial(n);

    cout << endl;
    cout << "Factorial of " << n << " is :" << endl;
    cout << n << "! = " << ans << endl;

    return 0;
}

//2. the nth term F(n) of the Fibonacci sequence
///a. using recursive
#include<bits/stdc++.h>
using namespace std;

#define vl vector<long long int>
#define vi vector<int>
#define pb push_back
#define all(x) (x).begin(), (x).end()

#define ll long long int
#define ld long double

#define fr(i,n) for (ll i=0;i<n;i++)
#define fr1(i,n) for(ll i=1;i<=n;i++)

#define endl '\n'

int fibonacci(int a)
{
    if(a == 0) return 0;

    else if(a == 1) return 1;

    else if(a > 1) return (fibonacci(a-1) + fibonacci(a-2));
}

int main()
{
    ///Peace be with you.

    ll n;
    cout << "Enter the Index Number of FIBONACCI Sequence : ";
    cin >> n;

    cout << endl;
    cout << n << "th term FIBONACCI Sequence is : ";
    for(ll i = 0; i<=n; i++)
    {
        cout << fibonacci(i) << " ";
    }

    ll ans = fibonacci(n);

    cout << endl;
    cout << n << "th term FIBONACCI Number is   : " << ans << endl;

    return 0;
}

///b. using non-recursive
#include<bits/stdc++.h>
using namespace std;

#define vl vector<long long int>
#define vi vector<int>
#define pb push_back
#define all(x) (x).begin(), (x).end()

#define ll long long int
#define ld long double

#define fr(i,n) for (ll i=0;i<n;i++)
#define fr1(i,n) for(ll i=1;i<=n;i++)

#define endl '\n'

int fibonacci(int a)
{
    int F[a+10] = {0};

    F[0] = 0, F[1] = 1;

    for(ll i=2; i<=a; i++)
    {
        F[i] = F[i-1] + F[i-2];
    }

    cout << endl;
    cout << a << "th term FIBONACCI Sequence is : ";
    for(ll i=0; i<=a; i++)
    {
        cout << F[i] << " ";
    }

    return F[a];
}

int main()
{
    ///Peace be with you.

    ll n;
    cout << "Enter the Index Number of FIBONACCI Sequence : ";
    cin >> n;

    ll ans = fibonacci(n);

    cout << endl;
    cout << n << "th term FIBONACCI Number is   : " << ans << endl;

    return 0;
}


//3. move n disks for Tower of Hanoi problem.
#include<bits/stdc++.h>
using namespace std;

#define vl vector<long long int>
#define vi vector<int>
#define pb push_back
#define all(x) (x).begin(), (x).end()

#define ll long long int
#define ld long double

#define fr(i,n) for (ll i=0;i<n;i++)
#define fr1(i,n) for(ll i=1;i<=n;i++)

#define endl '\n'

void TOH(ll n, char Beg, char Aux, char End)
{
    if(n==1)
    {
        cout << "Move Disk " << n << " : " << Beg << " --> " << End << endl;
        return;
    }

    TOH(n-1, Beg, End, Aux);

    cout << "Move Disk " << n << " : " << Beg << " --> " << End << endl;

    TOH(n-1, Aux, Beg, End);
}

int main()
{
    ///Peace be with you.

    ll n;
    cout << "Enter the NUMBER of disks : ";
    cin >> n;

    TOH(n,'A','B','C');

    return 0;
}


//4. value from Ackerman function.
#include<bits/stdc++.h>
using namespace std;

#define vl vector<long long int>
#define vi vector<int>
#define pb push_back
#define all(x) (x).begin(), (x).end()

#define ll long long int
#define ld long double

#define fr(i,n) for (ll i=0;i<n;i++)
#define fr1(i,n) for(ll i=1;i<=n;i++)

#define endl '\n'

int Ackermann(int m, int n)
{
    if (m == 0)
    {
        return n + 1;
    }
    else if((m != 0) && (n == 0))
    {
        return Ackermann(m - 1, 1);
    }
    else if((m != 0) && (n != 0))
    {
        return Ackermann(m - 1, Ackermann(m, n - 1));
    }
}

int main()
{
    ///Peace be with you.

    ll m,n;
    cout << "Enter the Value of m : " ;
    cin >> m ;

    cout << endl;
    cout << "Enter the Value of n : " ;
    cin >> n ;

    ll ans = Ackermann(m,n);

    cout << endl;
    cout << "A(" << m << "," << n << ") = " << ans << endl;
    return 0;
}

//5. insert and delete operations of a circular queue.
#include<bits/stdc++.h>
using namespace std;

#define vl vector<long long int>
#define vi vector<int>
#define pb push_back
#define all(x) (x).begin(), (x).end()

#define ll long long int
#define ld long double

#define fr(i,n) for (ll i=0;i<n;i++)
#define fr1(i,n) for(ll i=1;i<=n;i++)

#define endl '\n'

int Queue[6];
int Front = 0,Rear = 0;
int n = sizeof(Queue) / sizeof(Queue[0]) - 1;

void display()
{
    if(Front == 0)
    {
        cout << "Queue is EMPTY." << endl;
        return;
    }
    else
    {
        ll f = Front,r = Rear;
        cout << "Queue elements are : " << endl;
        // Normal Queue
        if(f <= r)
        {
            while(f <= r)
            {
                cout << "Queue[ " << f << " ] = " << Queue[f] << endl;
                f++;
            }
            cout << endl;
        }
        // Circular Queue
        else
        {
            while(f <= n)
            {
                cout << "Queue[ " << f << " ] = " << Queue[f] << endl;
                f++;
            }
            f = 1;
            while(f <= r)
            {
                cout << "Queue[ " << f << " ] = " << Queue[f] << endl;
                f++;
            }
            cout << endl;
        }
    }
    cout << endl;
}

void enqueue()
{
    if (((Front == 1) && (Rear == n)) || (Front == Rear+1))
    {
        cout << endl;
        cout << "Queue is Overflow." << endl;
        cout << endl;

        display();
        return;
    }
    else
    {
        if (Front == 0)
        {
            Front = 1;
            Rear = 1;
        }
        else if (Rear == n)
        {
            Rear = 1;
        }
        else
        {
            Rear = Rear + 1;
        }

        cout << "Enter the value you want to INSERT : ";
        ll item;
        cin >> item;
        cout << endl;
        Queue[Rear] = item;

        display();
    }
    return;
}


void dequeue()
{
    if (Front == 0)
    {
        cout << "Queue is Underflow." << endl;
        cout << endl;
        return;
    }

    int item = Queue[Front];
    cout << endl;
    cout << "Queue[ " << Front << " ] = " <<  item << " is DELETED." << endl;
    cout << endl;

    if (Front == Rear)
    {
        Front = 0;
        Rear = 0;
    }
    else if (Front == n)
    {
        Front = 1;
    }
    else
    {
        Front = Front + 1;
    }
    display();
    return;
}

int main()
{
    ///Peace be with you.

    while(1)
    {
        cout << "QUEUE Operations : " << endl;
        cout << "1) Insert."  << endl;
        cout << "2) Delete."  << endl;
        cout << "3) Display." << endl;
        cout << "4) Exit."    << endl;
        cout << endl;

        cout << "Choose An Option : " ;
        ll select;
        cin >> select;

        if(select == 1)
        {
            cout << endl;
            cout << "\t\t\t--------------" << endl;
            cout << "\t\t\t====INSERT====" << endl;
            cout << "\t\t\t--------------" << endl;
            cout << endl;

            enqueue();
        }
        else if(select == 2)
        {
            cout << endl;
            cout << "\t\t\t--------------" << endl;
            cout << "\t\t\t====DELETE====" << endl;
            cout << "\t\t\t--------------" << endl;
            cout << endl;

            dequeue();
        }
        else if(select == 3)
        {
            cout << endl;
            cout << "\t\t\t---------------" << endl;
            cout << "\t\t\t====DISPLAY====" << endl;
            cout << "\t\t\t---------------" << endl;
            cout << endl;

            display();
        }
        else if(select == 4)
        {
            cout << endl;
            cout << "\t\t\t------------" << endl;
            cout << "\t\t\t====EXIT====" << endl;
            cout << "\t\t\t------------" << endl;
            cout << endl;
            break;
        }
        else
        {
            cout << endl;
            cout << "\t\t\t-----------------" << endl;
            cout << "\t\t\t====WRONG KEY====" << endl;
            cout << "\t\t\t-----------------" << endl;
            cout << endl;
            cout << "\t\t Invalid OPTION." << endl << endl;
            cout << "\t\t Please, Choose Again." << endl << endl;
        }
    }

    return 0;
}

//6. insert and delete operations of a priority queue using linked-list.

//7. insert and delete operations of a priority queue using array.
#include<bits/stdc++.h>
using namespace std;

#define vl vector<long long int>
#define vi vector<int>
#define pb push_back
#define all(x) (x).begin(), (x).end()

#define ll long long int
#define ld long double

#define fr(i,n) for (ll i=0;i<n;i++)
#define fr1(i,n) for(ll i=1;i<=n;i++)

#define endl '\n'

#define N 10
int A[N+1][N+1], Front[N+1], Rear [N+1];


void display()
{
    int f,r;

    for(int i=1; i<=N; i++)
    {
        if(Front[i]!=0)
        {
            f = Front[i],r = Rear[i];
            if (f == 0)
            {
                cout << "Queue[ " << i << " ] is empty" << endl;
                return;
            }
            if(f <= r)
            {
                cout << endl;
                cout << "Elements in Queue of Priority " << i << " are : ";
                while(f <= r)
                {
                    cout << A[i][f] << " ";
                    f++;
                }
            }
            else
            {
                cout << endl;
                cout << "Elements in Queue of Priority " << i << " are : ";
                while(f <= N)
                {
                    cout << A[i][f] << " ";
                    f++;
                }
                f = 1;
                while(f <= r)
                {
                    cout << A[i][f] << " ";
                    f++;
                }
            }
        }
    }
    return;
}
// INSERTED IN QUEUE
void enqueue()
{
    int Priority, ITEM;

    cout << "Enter the PRIORITY NUMBER : ";
    cin >> Priority;
    cout << endl;

    if((Front[Priority] == 1 && Rear[Priority] == N ) || (Front[Priority] == Rear[Priority]+1))
    {
        cout << "Queue is Overflow." << endl;
        return;
    }

    cout << "Enter the NUMBER you want to INSERT in Queue[ " << Priority << " ] : ";
    cin >> ITEM;
    cout << endl;

    if(Front[Priority] == 0)
    {
        Front[Priority] = 1;
        Rear[Priority] = 1;
    }
    else if(Rear[Priority] == N)
    {
        Rear[Priority] = 1;
    }
    else
    {
        Rear[Priority] = Rear[Priority] + 1;
    }
    A[Priority][Rear[Priority]] = ITEM;
    display();
}
// DELETED FROM QUEUE
void dequeue()
{
    int Priority;
    for(int i=1; i<=N; i++)
    {
        if(Front[i]==0) continue;
        else
        {
            Priority = i;
            break;
        }
    }

    if(Front[Priority] == 0)
    {
        cout << "Queue is Underflow." << endl;
        return;
    }

    cout << endl;
    cout << "Deleted Item : " << A[Priority][Front[Priority]] << endl;

    if(Front[Priority] == Rear[Priority])
    {
        Front[Priority] = 0;
        Rear[Priority] = 0;
    }
    else if(Front[Priority] == N)
    {
        Front[Priority] = 1;
    }
    else
    {
        Front[Priority] = Front[Priority] + 1;
    }
    display();
}

int main()
{
    ///Peace be with you.

    while(1)
    {
        cout << "1) Insert."  << endl;
        cout << "2) Delete."  << endl;
        cout << "3) Exit."    << endl;
        cout << endl;

        cout << "Choose An Option : " ;
        ll select;
        cin >> select;

        if(select == 1)
        {
            cout << endl;
            cout << "\t\t\t--------------" << endl;
            cout << "\t\t\t====INSERT====" << endl;
            cout << "\t\t\t--------------" << endl;
            cout << endl;

//            cout << "Enter the value you want to INSERT : ";
//            ll item;
//            cin >> item;
            enqueue();
        }
        else if(select == 2)
        {
            cout << endl;
            cout << "\t\t\t--------------" << endl;
            cout << "\t\t\t====DELETE====" << endl;
            cout << "\t\t\t--------------" << endl;
            cout << endl;
            dequeue();
        }
        else if(select == 3)
        {
            cout << endl;
            cout << "\t\t\t------------" << endl;
            cout << "\t\t\t====EXIT====" << endl;
            cout << "\t\t\t------------" << endl;
            cout << endl;
            break;
        }
        else
        {
            cout << endl;
            cout << "\t\t\t-----------------" << endl;
            cout << "\t\t\t====WRONG KEY====" << endl;
            cout << "\t\t\t-----------------" << endl;
            cout << endl;
            cout << "Invalid OPTION." << endl << endl;
            cout << "Please, Choose Again." << endl << endl;
        }
    }


    return 0;
}

//8. create a Linked List of n elements and then display the list.
#include<bits/stdc++.h>
using namespace std;

#define vl vector<long long int>
#define vi vector<int>
#define pb push_back
#define all(x) (x).begin(), (x).end()

#define ll long long int
#define ld long double

#define fr(i,n) for (ll i=0;i<n;i++)
#define fr1(i,n) for(ll i=1;i<=n;i++)

#define endl '\n'


struct linked_list
{
    int info;
    struct linked_list *link;
};

typedef struct linked_list node;

int main()
{
    int n,i,item;
    node *start, *ptr;

    start = (node *) malloc(sizeof(node));
    ptr = start;

    printf("How many elements: ");
    scanf("%d",&n);

    for(i=1; i<=n; i++)
    {
        printf("Input a number: ");
        scanf("%d",&ptr -> info);
        if(i != n)
        {
            ptr -> link = (node *)malloc(sizeof(node));
            ptr = ptr -> link;
        }
    }
    ptr -> link = NULL;

    printf("\nElements in the Link list are: \n");
    ptr = start;
    int count = 0;
    while(ptr != NULL)
    {
        count  = count + 1;
        //printf("%d\n",ptr);
        printf("%d\n",ptr -> info);
        ptr = ptr -> link;
    }
    cout << "Total elements are : " << count << endl;
    return 0;
}


//9. create a Linked List of n elements and then search an element from the list.
#include<bits/stdc++.h>
using namespace std;

#define vl vector<long long int>
#define vi vector<int>
#define pb push_back
#define all(x) (x).begin(), (x).end()

#define ll long long int
#define ld long double

#define fr(i,n) for (ll i=0;i<n;i++)
#define fr1(i,n) for(ll i=1;i<=n;i++)

#define endl '\n'

struct linked_list
{
    int info;
    struct linked_list *link;
};

typedef struct linked_list node;

int main()
{
    int n, i, item ,count = 0;
    node *start, *ptr, *loc;

    start = (node *) malloc(sizeof(node));
    ptr = start;

    printf("How many elements: ");
    scanf("%d",&n);

    for(i=1; i<=n; i++)
    {
        printf("Input a number: ");
        scanf("%d",&ptr -> info);
        if(i != n)
        {
            ptr -> link = (node *)malloc(sizeof(node));
            ptr = ptr -> link;
        }
    }
    ptr -> link = NULL;

    cout << "Enter the NUMBER you want to SEARCH : ";
    cin >> item;

    ptr = start;
    while(ptr != NULL)
    {
        if(item == ptr -> info )
        {
            loc = ptr;

            cout << endl;
            cout << item << " is Found in LOCATION : " << loc  << " ." << endl;
            count = 1;
            break;
        }
        else ptr = ptr -> link;
    }

    if(count == 0) cout << endl << item << " is NOT FOUND ." << endl;

    return 0;
}


//10. create a Linked List of n elements and then insert an element to the list.
#include<bits/stdc++.h>
using namespace std;

#define vl vector<long long int>
#define vi vector<int>
#define pb push_back
#define all(x) (x).begin(), (x).end()

#define ll long long int
#define ld long double

#define fr(i,n) for (ll i=0;i<n;i++)
#define fr1(i,n) for(ll i=1;i<=n;i++)

#define endl '\n'

struct linked_list
{
    int info;
    struct linked_list *next;
};

typedef struct linked_list node;
node *start, *ptr, *Loc, *New, *save;

// Creating Linked List
Create()
{
    int Number,i;

    start = (node *) malloc(sizeof(node));
    ptr = start;

    printf("How many elements : ");
    scanf("%d",&Number);
    cout << endl;

    for(i=1; i<=Number; i++)
    {
        printf("Input a number: ");
        scanf("%d",&ptr -> info);

        if(i != Number)
        {
            ptr -> next = (node *)malloc(sizeof(node));
            ptr = ptr -> next;
        }
    }
    ptr -> next = NULL;
}

// Finding Location of Item
node *FindLoc(int item)
{
    ptr = start;
    if(start == NULL)
    {
        return NULL;
    }
    if(item < ptr->info)
    {
        return NULL;
    }
    save = start;
    while(ptr != NULL)
    {
        if(item < ptr->info)
        {
            return save;
        }
        save = ptr;
        ptr = ptr->next;
    }
    return save;
}

// Inserting Item
InsLoc(node *Loc, int item)
{
    New = (node *) malloc(sizeof(node));
    New->info = item;
    if(Loc == NULL)
    {
        New->next = start;
        start = New;
    }
    else
    {
        New->next = Loc->next;
        Loc->next = New;
    }
}

int main()
{
    int n,i,item;
    Create();

    cout << endl;
    cout << "Enter a number to insert : ";
    cin >> item;

    Loc = FindLoc(item);

    InsLoc(Loc,item);

    cout << endl;
    printf("Elements in the Link list are : \n");

    ptr=start;
    while(ptr != NULL)
    {
        printf("%d\n",ptr->info);
        ptr= ptr->next;
    }
    return 0;
}


//11. create a Linked List of n elements and then delete an element from the list.
#include<bits/stdc++.h>
using namespace std;

#define vl vector<long long int>
#define vi vector<int>
#define pb push_back
#define all(x) (x).begin(), (x).end()

#define ll long long int
#define ld long double

#define fr(i,n) for (ll i=0;i<n;i++)
#define fr1(i,n) for(ll i=1;i<=n;i++)

#define endl '\n'

struct linked_list
{
    int num;
    struct linked_list *next;
};

typedef struct linked_list node;
node *start, *ptr, *Loc, *LocPrev, *New, *save;

// Creating Linked List
Create()
{
    int Number,i;

    start = (node *) malloc(sizeof(node));
    ptr = start;

    printf("How many elements: ");
    scanf("%d",&Number);

    for(i=1; i<=Number; i++)
    {
        cout << endl;
        printf("Input a number: ");
        scanf("%d",&ptr->num);
        if(i!=Number)
        {
            ptr->next = (node *)malloc(sizeof(node));
            ptr = ptr->next;
        }
    }
    ptr->next = NULL;
}

// Finding Location of Item
node *FindLoc(int item)
{
    ptr = start;
    if(start == NULL)
    {
        LocPrev = NULL;
        return NULL;
    }
    if(ptr->num == item)
    {
        LocPrev = NULL;
        return start;
    }
    save = start;
    while(ptr != NULL)
    {
        if(ptr->num == item)
        {
            LocPrev = save;
            return ptr;
        }
        save = ptr;
        ptr = ptr->next;
    }
    return NULL;
}

// Deleting Item From Linked List
Delete(node *Loc, node *LocPrev, int item)
{
    ptr = start;
    if(Loc == NULL)
    {
        cout<<"Item is not in list"<<endl;
    }
    else if(LocPrev == NULL)
    {
        start = ptr->next;
    }
    else
        LocPrev->next = Loc->next;
}


int main()
{
    int n,i,item;

    Create();

    cout << "Enter a number to Delete : ";
    cin >> item;

    Loc = FindLoc(item);

    Delete(Loc,LocPrev,item);

    printf("\nElements in the Link list are: \n");

    ptr=start;
    while(ptr!=NULL)
    {
        printf("%d\n",ptr->num);
        ptr= ptr->next;
    }
    return 0;
}


//12. create a Circular Header Linked List of n elements and then display the list.
#include<bits/stdc++.h>
using namespace std;

#define vl vector<long long int>
#define vi vector<int>
#define pb push_back
#define all(x) (x).begin(), (x).end()

#define ll long long int
#define ld long double

#define fr(i,n) for (ll i=0;i<n;i++)
#define fr1(i,n) for(ll i=1;i<=n;i++)

#define endl '\n'

struct linked_list
{
    int num;
    struct linked_list *next;
};

typedef struct linked_list node;

int main()
{
    int n,i;
    node *start, *ptr,*header;

    start = (node *) malloc(sizeof(node));

    header = start;
    ptr = start;

    ptr->next = (node *) malloc(sizeof(node));

    printf("How many elements: ");
    scanf("%d",&n);

    for(i=1; i<=n; i++)
    {
        cout << endl;
        printf("Input a number: ");
        scanf("%d",&ptr->num);
        if(i != n)
        {
            ptr->next = (node *)malloc(sizeof(node));
            ptr = ptr->next;
        }
    }
    ptr->next=header;

    printf("\nElements in the Link list are: \n");
    ptr = header;

    do
    {
        cout << ptr->num << endl;
        ptr = ptr->next;
    }
    while(ptr!=header);


    return 0;
}


//13. create a Two way Linked List of n elements and then display the list.

//14. find the 100!(Factorial).
#include<bits/stdc++.h>
using namespace std;

#define vl vector<long long int>
#define vi vector<int>
#define pb push_back
#define all(x) (x).begin(), (x).end()

#define ll long long int
#define ld long double

#define fr(i,n) for (ll i=0;i<n;i++)
#define fr1(i,n) for(ll i=1;i<=n;i++)

#define endl '\n'

int main()
{
    int n;
    cin >> n;

    int q = 2;
    int arr[100000] = {0};
    arr[0] = 1;
    int len = 1;
    int x = 0;
    int num = 0;
    while (q <= n)
    {
        x = 0;
        num = 0;
        while (x < len)
        {
            arr[x] = arr[x] * q;
            arr[x] = arr[x] + num;
            num = arr[x] / 10;
            arr[x] = arr[x] % 10;
            x++;
        }
        while (num != 0)
        {
            arr[len] = num % 10;
            num = num / 10;
            len++;
        }
        q++;
    }
    len--;

    cout << endl;
    cout << "Factorial of " << n << " is :" << endl;
    cout << n << "! = " ;
    while (len >= 0)
    {
        cout << arr[len];
        len = len - 1;
    }
}

//15. the value of the nth Fibonacci number F(n) where F(n) = F(n–1) + F(n-2) and F(1) = F(2) = 1 and (n <= 500).
#include<bits/stdc++.h>
using namespace std;
#define optimize()            \
ios_base::sync_with_stdio(0); \
cin.tie(0);                   \
cout.tie(0);
const int maxn = 2e5+10;

#define vl vector<long long int>
#define vi vector<int>
#define pb push_back
#define all(x) (x).begin(), (x).end()

#define ll long long int
#define ld long double

#define fr(i,n) for (ll i=0;i<n;i++)
#define fr1(i,n) for(ll i=1;i<=n;i++)

#define endl '\n'

string add(string num1,string num2)
{
    string s1 = num1;
    string s2 = num2;

    reverse(s1.begin(),s1.end());
    reverse(s2.begin(),s2.end());

    if(s1.length()>s2.length()) swap(s1,s2);

    int carry = 0;
    string ans;
    //9999 porjonto add
    for(int i=0; i<s1.length(); i++)
    {
        int x=(s2[i]-'0')+(s1[i]-'0')+carry;
        ans+=x%10+'0';
        carry=x/10;
    }
    //9999 er por er add
    for(int i=s1.length(); i<s2.length(); i++)
    {
        int x=(s2[i]-'0')+carry;
        ans+=x%10+'0';
        carry=x/10;
    }
    if(carry) ans+=carry+'0';

    reverse(ans.begin(),ans.end());

    //cout << ans << endl;
    return ans;
}

string fibonacci(int a)
{
    string F[a+10];
    F[0] = "0", F[1] = "1";
    for(ll i=2; i<=a; i++)
    {
        F[i] = add(F[i-1],F[i-2]);
    }
    cout << endl;

    return F[a];
}

int main()
{
    ///Peace be with you.
    optimize();

    ll n;
    cout << "Enter the Index Number of FIBONACCI Sequence : ";
    cin >> n;
    cout << fibonacci(n) << endl;

    return 0;
}
