#include <iostream>

using namespace std;

bool isPalindrome(string str)
{
    int i=0, j=str.length()-1;
    while(i<j)
    {
        if(str[i]!=str[j]) return false;
        i+=1;
        j-=1;
    }
    return true;
}

string reverseAdd(string a)
{
    string result, b;
    int carry = 0;
    for(int i=a.length()-1; i>=0; i--)
    {
        b.push_back(a[i]);
    }
    for(int i=a.length()-1; i>=0 ;i--)
    {
        int sum = a[i]-'0'+b[i]-'0'+carry;
        if(sum>=10)
        {
            sum%=10;
            carry = 1;
        }
        else carry = 0;
        result += sum+'0';
    }
    if(carry==1) result+=carry+'0';
    return result;
}
int main()
{
    int n, count;
    string numbers, reverse;
    cin>>n;
    while(n--)
    {
        count=0;
        cin>>numbers;
        while(!isPalindrome(numbers))
        {

            numbers = reverseAdd(numbers);
            count+=1;
        }
        cout<<count<<" "<<numbers<<endl;
    }
    return 0;
}
