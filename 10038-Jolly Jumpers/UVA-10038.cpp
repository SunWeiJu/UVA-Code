#include <iostream>
#include <cmath>

using namespace std;
int main()
{
    int n;
    long long nums[3002];
    while(cin>>n)
    {
        for(int i=0; i<n; i++) cin>>nums[i];
        long long check = n*(n-1)/2;
        for(int i=0; i<n-1; i++)
        {
            if(abs(nums[i]-nums[i+1])>=n || abs(nums[i]-nums[i+1]) ==0 )break;
            check -= abs(nums[i]-nums[i+1]);
        }
        if(check == 0) cout<<"Jolly"<<endl;
        else cout<<"Not jolly"<<endl;
    }
    return 0;
}
