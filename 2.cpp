//1. interchange the row and column of a matrix.
#include<bits/stdc++.h>
using namespace std;

#define ll long long int
#define ld long double

int main()
{
    ///Peace be with you.

    ll row,colum;
    cout << "Numbers of rows  : ";
    cin >> row;
    cout << "Numbers of colum : ";
    cin >> colum;

    ll matrix[row+10][colum+10],transpose[row+10][colum+10];
    cout << endl << "Matrix : " << endl;
    for(ll i=0;i<row;i++)
    {
        for(ll j=0;j<colum;j++)
        {
            cin >> matrix[i][j];
        }
    }

    // Transpose of Matrix
    for(ll i=0;i<row;i++)
    {
        for(ll j=0;j<colum;j++)
        {
            transpose[j][i] = matrix[i][j];
        }
    }

    cout << endl << "Transpose Matrix : " << endl;
    for(ll i=0;i<colum;i++)
    {
        for(ll j=0;j<row;j++)
        {
            cout << transpose[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}

//2. add two matrices.
#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define ld long double

int main()
{
    /// Peace be with you.

    ll row,colum;
    cout << "Numbers of rows  : ";
    cin >> row;
    cout << "Numbers of colum : ";
    cin >> colum;

    ll matrix1[row + 10][colum + 10];
    ll matrix2[row + 10][colum + 10];
    ll sum[row + 10][colum + 10];
    cout << endl << "1st Matrix : " << endl;
    for (ll i = 0; i < row; i++)
    {
        for (ll j = 0; j < colum; j++)
        {
            cin >> matrix1[i][j];
        }
    }

    cout << endl << "2nd Matrix : " << endl;
    for (ll i = 0; i < row; i++)
    {
        for (ll j = 0; j < colum; j++)
        {
            cin >> matrix2[i][j];
        }
    }

    for (ll i = 0; i < row; i++)
    {
        for (ll j = 0; j < colum; j++)
        {
            sum[i][j] = matrix1[i][j] + matrix2[i][j];
        }
    }

    cout << endl << "SUM of Matrix : " << endl;
    for (ll i = 0; i < row; i++)
    {
        for (ll j = 0; j < colum; j++)
        {
            cout << sum[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}

//3. calculate the rowsum and columnsum of a matrix.
#include<bits/stdc++.h>
using namespace std;

#define ll long long int
#define ld long double

int main()
{
    ///Peace be with you.

    ll row,colum;
    cout << "Numbers of row : ";
    cin >> row;
    cout << "Numbers of colum : ";
    cin >> colum;

    cout << endl << "Matrix : " << endl;
    ll matrix[row+10][colum+10];
    for(ll i=1;i<=row;i++)
    {
        for(ll j=1;j<=colum;j++)
        {
            cin >> matrix[i][j];
        }
    }

    ll rowsum = 0;
    for(ll i=1;i<=row;i++)
    {
        for(ll j=1;j<=colum;j++)
        {
            rowsum = rowsum + matrix[i][j];
        }
        cout << "Sum of the " << i << " row is : " << rowsum << endl;
        rowsum = 0;
    }
    cout << endl;


    ll columsum = 0;
    for(ll j=1;j<=colum;j++)
    {
        for(ll i=1;i<=row;i++)
        {
            columsum = columsum + matrix[i][j];
        }
        cout << "Sum of the " << j << "row is : " << columsum << endl;
        columsum = 0;
    }
    return 0;
}

//4. calculate the multiplication of two matrices.
#include<bits/stdc++.h>
using namespace std;

#define ll long long int
#define ld long double

int main()
{
    ///Peace be with you.

    ll row1,colum1;
    cout << "Numbers of rows  : ";
    cin >> row1;
    cout << "Numbers of colum : ";
    cin >> colum1;

    ll matrix1[row1 + 10][colum1 + 10];
    cout << endl << "1st Matrix : " << endl;
    for (ll i = 0; i < row1; i++)
    {
        for (ll j = 0; j < colum1; j++)
        {
            cin >> matrix1[i][j];
        }
    }
    cout << endl;

    ll row2,colum2;
    cout << "Numbers of rows  : " << endl;
    cin >> row2;
    cout << "Numbers of colum : " << endl;
    cin >> colum2;

    ll matrix2[row2 + 10][colum2 + 10];
    cout << endl << "2nd Matrix : " << endl;
    for (ll i = 0; i < row2; i++)
    {
        for (ll j = 0; j < colum2; j++)
        {
            cin >> matrix2[i][j];
        }
    }

    ll result[row1 + 10][colum2 + 10];
    for (ll i = 0; i < row1; i++)
    {
        for (ll j = 0; j < colum2; j++)
        {
            result[i][j] = 0;
        }
    }

    // Multiplication of 2 Matrix
    for (ll i = 0; i < row1; i++)
    {
        for (ll j = 0; j < colum2; j++)
        {
            for(ll k = 0; k < colum1; k++)
            {
                result[i][j] = result[i][j] + (matrix1[i][k]*matrix2[k][j]);
            }
        }
    }

    cout << endl << "Multiple of 2 Matrix : " << endl;
    for (ll i = 0; i < row1; i++)
    {
        for (ll j = 0; j < colum2; j++)
        {
            cout << result[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}

//5. check if a Matrix is a Sparse Matrix.
#include<bits/stdc++.h>
using namespace std;

#define ll long long int
#define ld long double

int main()
{
    ///Peace be with you.

    ll row,colum;
    cout << "Numbers of row : ";
    cin >> row;
    cout << "Numbers of column : ";
    cin >> colum;

    ll matrix[row+10][colum+10];
    cout << endl << "Matrix : " << endl;
    for(ll i=0;i<row;i++)
    {
        for(ll j=0;j<colum;j++)
        {
            cin >> matrix[i][j];
        }
    }

    ll count = 0;
    for(ll i=0;i<row;i++)
    {
        for(ll j=0;j<colum;j++)
        {
            if(matrix[i][j] == 0) count++;
        }
    }

    ll half = (row*colum) / 2;

    if(count > half)
    {
        cout << "YES." << endl;
        cout << "This Matrix is a Sparse Matrix." << endl;
    }
    else
    {
        cout << "NO." << endl;
        cout << "This Matrix is not a Sparse Matrix." << endl;
    }

    return 0;
}

//6. implement the push and pop operation of a stack
#include<bits/stdc++.h>

#define ll long long int
#define ld long double

#define SIZE 5
int stack[SIZE+1],top = 0;

int menu(void)
{
    int choice;
    do
    {
        printf("\n1-push\n2-pop\n0-Exit\n");

        printf("Enter your choice: ");
        scanf("%d",&choice);

        if(choice<0||choice>2)
            printf("\nWrong...Choice again...\n");
    }

    while(choice<0||choice>2);
    return (choice);
}

void push()
{
    if(top == SIZE)
    {
        printf("\n Overflow \n");
    }
    else
    {
        printf("\n Enter a value to push : ");
        int item;
        scanf("%d",&item);

        top = top + 1;
        stack[top] = item;
    }
}

void pop()
{
    if(top == 0)
    {
        printf("\n Underflow \n");
    }
    else
    {
        int item;
        item = stack[top];
        printf("\n The item deleted from is : %d \n", item);
        top = top - 1;
    }
}

void display()
{
    if(top == 0)
    {
        printf("\n The Stack is Empty. \n");
    }
    else
    {
        printf("\n The Stack elements are : ");
        for (int i = 1; i <= top; i++)
        {
            printf("%d ", stack[i]);
        }
        printf("\n");
    }
}

int main()
{
    int choice;

    do
    {
        choice=menu();
        switch(choice)
        {
        case 1:
            push();
            display();
            break;
        case 2:
            pop();
            display();
            break;
        case 0:
            printf("End of operation\n");
            break;
        }
    }
    while(choice!=0);
    return 0;
}


//7. evaluate a Postfix expression.
#include<bits/stdc++.h>
using namespace std;

#define ll long long int
#define ld long double

int main()
{
    stack<string> stk;

    cout << "Postfix expression : " << endl;
    while(1)
    {
        string s;
        cin >> s;
        stk.push(s);

        if(stk.top() == "+")
        {
            stk.pop();
            int a = stoi(stk.top());
            stk.pop();
            int b = stoi(stk.top());
            stk.pop();

            string ans = to_string(b + a);
            stk.push(ans);
        }
        else if(stk.top() == "-")
        {
            stk.pop();
            int a = stoi(stk.top());
            stk.pop();
            int b = stoi(stk.top());
            stk.pop();

            string ans = to_string(b - a);
            stk.push(ans);
        }
        else if(stk.top() == "*")
        {
            stk.pop();
            int a = stoi(stk.top());
            stk.pop();
            int b = stoi(stk.top());
            stk.pop();

            string ans = to_string(b * a);
            stk.push(ans);
        }
        else if(stk.top() == "/")
        {
            stk.pop();
            int a = stoi(stk.top());
            stk.pop();
            int b = stoi(stk.top());
            stk.pop();

            string ans = to_string(b / a);
            stk.push(ans);
        }
        else if(stk.top() == "^")
        {
            stk.pop();
            int a = stoi(stk.top());
            stk.pop();
            int b = stoi(stk.top());
            stk.pop();

            int p = pow(b,a);

            string ans = to_string(p);
            stk.push(ans);
        }
        else if(stk.top() == ")")
        {
            stk.pop();
            cout << stk.top() << endl;
            break;
        }
    }

    return 0;
}

//8. convert an Infix expression into its equivalent Postfix expression.
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

int precedence(char c)
{
    if(c == '+' || c == '-') return 1;
    else if(c == '*' || c == '/') return 2;
    else if(c == '^') return 3;
    else return -1;
}

string InfixTOPostfix(stack<char>s,string infix)
{
    string postfix;

    for(ll i=0;i<infix.size();i++)
    {
        if((infix[i] >= 'a' && infix[i]<='z') || (infix[i] >= 'A' && infix[i] <= 'Z'))
        {
            postfix = postfix + infix[i];
        }
        else if(infix[i] == '(')
        {
            s.push(infix[i]);
        }
        else if(infix[i] == ')')
        {
            while((s.top() != '(') && (!s.empty()))
            {
                char temp = s.top();
                postfix = postfix + temp;
                s.pop();
            }
            if(s.top() == '(')
            {
                s.pop();
            }
        }
        else if(infix[i] == '+' || infix[i] == '-' || infix[i] == '*' || infix[i] == '/' || infix[i] == '^')
        {
            if(s.empty())
            {
                s.push(infix[i]);
            }
            else if((precedence(infix[i]) == precedence(s.top())) && (infix[i] == '^'))
            {
                s.push(infix[i]);
            }
            else
            {
                while((!s.empty()) && (precedence(infix[i]) <= precedence(s.top())))
                {
                    char temp = s.top();
                    postfix = postfix + temp;
                    s.pop();
                }
                s.push(infix[i]);
            }
        }
    }
    while(!s.empty())
    {
        char temp = s.top();
        postfix = postfix + temp;
        s.pop();
    }

    return postfix;
}

int main()
{
    ///Peace be with you.


    string infix_exp,postfix_exp;
    cout << "Enter a Infix Expression : " << endl;
    cin >> infix_exp;

    cout << "Infix Expression : " << infix_exp << endl;

    stack<char> stack;
    postfix_exp = InfixTOPostfix(stack,infix_exp);
    cout << endl;
    cout << "Postfix Expression : " << postfix_exp << endl;

    return 0;
}

/*
A+(B*C-(D/E^F)*G)*H
*/


//9. implement the following string operation without using any built in functions related to string.
///a) Find the length of a string S
#include<bits/stdc++.h>
using namespace std;

#define ll long long int
#define ld long double

int main()
{
    ///Peace be with you.


    cout << "Enter the String : ";
    string s;
    getline(cin, s);

    int count = 0;
    while(s[count] != '\0')
    {
        count++;
    }
    cout << "The Length of the string is: " << count;

    return 0;
}

///b) Copy string S2 to S1.
#include<bits/stdc++.h>
using namespace std;

#define ll long long int
#define ld long double

int main()
{
    ///Peace be with you.

    cout << "Enter the String : ";
    string s1, s2;
    getline(cin, s1);

    int len = 0;
    while(s1[len] != '\0')
    {
        len++;
    }

    for(ll i=0;i<len;i++)
    {
        s2 = s2 + s1[i];
    }
    cout << "The copied string is : " << s2;

    return 0;
}

///c) Concatenate string S2 to S1.
#include<bits/stdc++.h>
using namespace std;

#define ll long long int
#define ld long double

int main()
{
    ///Peace be with you.

    string s1,s2;
    cout << "Enter 1st string : ";
    getline(cin, s1);
    cout << "Enter 2nd string : ";
    getline(cin, s2);

    ll len1 = 0,len2 = 0;
    while (s1[len1] != '\0')
    {
        len1++;
    }
    while (s2[len2] != '\0')
    {
        len2++;
    }

    for(ll i=0;i<len2;i++)
    {
        s1 = s1 + s2[i];
    }
    cout << "After Concatenate,the string is : " << s1;

    return 0;
}

///d) Compare two strings S1 and S2
#include<bits/stdc++.h>
using namespace std;

#define ll long long int
#define ld long double

int main()
{
    ///Peace be with you.

    string s1, s2;
    cout << "Enter 1st string: ";
    getline(cin, s1);
    cout << "Enter 2nd string: ";
    getline(cin, s2);

    ll len1 = 0,len2 = 0;
    while (s1[len1] != '\0')
    {
        len1++;
    }
    while (s2[len2] != '\0')
    {
        len2++;
    }
    ll ok = 1;

    if(len1 != len2)
    {
        ok = 0;
    }
    else
    {
        for (ll i=0;i<len1;i++)
        {
            if (s1[i] != s2[i])
            {
                ok = 0;
                break;
            }
        }

    }

    if (ok)
        cout << endl << "Strings are equal" << endl;
    else
        cout << endl << "Strings are not equal" << endl;


    return 0;
}

///e) Reverse a string S.
#include<bits/stdc++.h>
using namespace std;

#define ll long long int
#define ld long double

int main()
{
    ///Peace be with you.

    string s1,s2;
    cout << "Enter the String: ";
    getline(cin,s1);

    int len = 0;
    while (s1[len] != '\0')
    {
        len++;
    }

    for (ll i=len;i>=0;i--)
    {
        s2 = s2 + s1[i];
    }
    cout << "String After Reverse: " << s2;

    return 0;
}

//10. insert a string S into a text T so that S begins in position K of T.
#include<bits/stdc++.h>
using namespace std;

#define ll long long int
#define ld long double

int main()
{
    string s1, s2;
    cout << "Enter the TEXT : ";
    getline(cin,s1);
    cout << "Enter the String You want to insert : ";
    getline(cin,s2);

    cout << "Enter the position You want insert : ";
    ll pos;
    cin >> pos;

    ll len1 = 0,len2 = 0;
    while (s1[len1] != '\0')
    {
        len1++;
    }
    while (s2[len2] != '\0')
    {
        len2++;
    }

    ll totalLen = len1 + len2;

    for (ll i=totalLen-1,j=len1-1;i>pos;i--,j--)
    {
        s1[i] = s1[j];
    }

    for (ll i=pos-1,j=0;j<len2;i++,j++)
    {
        s1[i] = s2[j];
    }

    cout << "After Inserting string : " ;
    for (ll i=0;i<totalLen;i++)
    {
        cout << s1[i];
    }
    return 0;
}

//11. A text T in memory. delete a string S of length L from Kth position in T.
#include<bits/stdc++.h>
using namespace std;

#define ll long long int
#define ld long double

int main()
{
    ///Peace be with you.

    string s1;
    cout << "Enter the TEXT : ";
    getline(cin , s1);

    ll len2;
    cout << endl << "Enter the Length of The STRING," ;
    cout << "You want to DELETE : ";
    cin >> len2;

    ll pos;
    cout << endl << "Enter the Position in the TEXT ," ;
    cout << "Where You Want to Delete : ";
    cin >> pos;

    ll len1 = 0;
    while (s1[len1] != '\0')
    {
        len1++;
    }

    for(ll i=pos-1;i<len1;i++)
    {
        s1[i] = s1[i+len2];
    }
    len1 = len1 - len2;

    cout << "After DELETING the STRING in the TEXT : " << s1;

    return 0;
}

//12. first occurrence of a pattern (P) in the string S.
#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s1;
    cout << "Enter the Text : " ;
    getline(cin , s1);

    string s2;
    cout << "Enter the Pattern You want to find : ";
    getline(cin , s2);

    int maxx = s1.size() - s2.size() + 1;
    int ans = 0;

    for (int i = 0; i < maxx; i++)
    {
        bool found = 0;

        for (int j = 0; j < s2.size(); j++)
        {
            if (s2[j] != s1[j + i])
            {
                found = 1;
            }
        }

        if (found == 0)
        {
            ans=i+1;
            break;
        }
    }

    if(ans>0)
    {
        cout << "The first occurrence of a Pattern in the TEXT. " << endl;
        cout << "Found at index: " << ans << endl;
    }
    else
    {
        cout << "Not found"<<endl;
    }

    return 0;
}

//13. replace the first occurrence of a pattern (P) in T by Q.
#include<bits/stdc++.h>
using namespace std;

#define ll long long int
#define ld long double

int main()
{
    string str1, str2, str3;
    cin >> str1 >> str2 >> str3;
    int len1 = str1.size();
    int len2 = str2.size();
    int len3 = str3.size();

    int tolen = len1 - len2 + len3;
    int l1 = len1 - len2 ;

    int maxx = str1.size() - str2.size() + 1;
    int pos;

    for (int i = 0; i < maxx; i++)
    {
        bool found = 0;

        for (int j = 0; j < str2.size(); j++)
        {
            if (str2[j] != str1[j + i])
            {
                found = 1;
            }
        }

        if (found == 0)
        {
            pos = i + 1;
            break;
        }
    }

    if (pos > 0)
    {
        for (int i = pos - 1; i < len1; i++)
        {
            str1[i] = str1[i + len2];
        }
        cout << str1 << endl;

        string s1;
        for (ll i = 0; i < pos - 1; i++)
        {
            s1[i] = str1[i];
        }
        ll l = pos - 1;
        for (ll i = 0; i < len3; i++)
        {
            s1[l] = str3[i];
            l++;
        }

        for (ll i = pos - 1; i < str1.size(); i++)
        {
            s1[l] = str1[i];
            l++;
        }

        for (int k = 0; k < (str1.size() + len3); k++)
        {
            cout << s1[k];
        }
    }
    else
    {
        cout << "Not found" << endl;
    }

    return 0;
}

//14. calculates the no. of occurrence of each letter of an input text.
#include<bits/stdc++.h>
using namespace std;

#define ll long long int
#define ld long double

int main()
{
    ///Peace be with you.

    string s;
    cout << "Enter the TEXT : " ;
    getline(cin , s);
    ll freq[10010]={0};

    ll len = s.size();
    for(ll i=0;i<len;i++)
    {
        freq[s[i]-'a']++;
    }

    for(ll i=0;i<26;i++)
    {
        cout << char(i + 'a') << " occurrence " << freq[i] << " times." << endl;
    }


    return 0;
}

//15. read a positive integer in base b (2 &lt;= b &lt;= 16) and convert it into base d (2 &lt;= d &lt;= 16 ).
#include<bits/stdc++.h>
using namespace std;

#define ll long long int
#define ld long double

int main()
{
    ///Peace be with you.

    int value,arr[200];
    cout << "Enter the integer : ";
    string s;
    cin >> s;

    ll b,d;
    cout << "Input Base : " ;
    cin >> b;
    cout << "Cnvert Base : ";
    cin >> d;

    int len = s.size();

    int m=1, decimal=0;
    for(int i=len-1;i>=0;i--)
    {
        if( ('0'<=s[i]) && (s[i]<='9')) value = (int)s[i]-'0';
        else value = (int)s[i]-'A'+10;

        decimal = decimal+(value*m);
        m = m*b;
    }

    int j=0;
    while(decimal)
    {
        arr[j++] = decimal%d;
        decimal = decimal/d;
    }

    cout << "After converting the integer : " ;
    for(int i=j-1;i>=0;i--)
    {
        if(arr[i] >= 10) cout << (char)(arr[i]-10+'A');
        else cout << arr[i];
    }

    return 0;
}

//16. the Greatest Common Divisor (GCD) & Least Common Multiple (LCM) of two given positive integers.
#include<bits/stdc++.h>
using namespace std;

#define ll long long int
#define ld long double

int main()
{
    int x, y, a, b, t, gcd, lcm;
    cin >> x >> y;
    a = x;
    b = y;
    while (b != 0)
    {
        t = b;
        b = a % b;
        a = t;
    }
    gcd = a;
    lcm = (x / gcd) * y;

    cout << gcd << endl;
    cout << lcm << endl;
    return 0;
}
