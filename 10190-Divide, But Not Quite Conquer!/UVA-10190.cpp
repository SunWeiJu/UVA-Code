#include <iostream>
#include <vector>

using namespace std;

int main()
{
    long n, m;
    vector<long> numbers;
    while(cin>>n>>m)
    {
        numbers.clear();
        if(n==0 || m == 0)
        {
            cout<<"Boring!"<<endl;
            continue;
        }
        if(m == 1 || n == 1)
        {
            cout<<"Boring!"<<endl;
            continue;
        }
        while(n>1)
        {
            if(n%m != 0)
            {
                cout<<"Boring!"<<endl;
                break;
            }
            else
            {
                numbers.push_back(n);
                n /= m;
            }
        }
        if(n==1)
        {
            numbers.push_back(1);
            for(int i=0; i<numbers.size(); i++)
            {
                if(i<numbers.size()-1)
                {
                    cout<<numbers[i]<<" ";
                }
                else
                {
                    cout<<numbers[i]<<endl;
                }
            }
        }
    }
    return 0;
}
