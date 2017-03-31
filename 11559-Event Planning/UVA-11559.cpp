#include <iostream>
#include <climits>

using namespace std;

int main()
{
    int numPerson, numHotel, numWeek, numBed;
    long bedget, minCost, hotelPrice;
    bool stayHome;
    while(cin>>numPerson>>bedget>>numHotel>>numWeek)
    {
        stayHome = true;
        minCost = LONG_MAX;
        for(int i=0; i<numHotel; i++)
        {
            cin>>hotelPrice;
            for(int j=0; j<numWeek; j++)
            {
                cin>>numBed;
                if(numBed>= numPerson && bedget >= hotelPrice*numPerson)
                {
                    if(hotelPrice*numPerson < minCost)
                    {
                        minCost = hotelPrice*numPerson;
                        stayHome = false;
                    }
                }
            }
        }
        if(!stayHome) cout<<minCost<<endl;
        else cout<<"stay home"<<endl;
    }
    return 0;
}
