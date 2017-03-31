#include <iostream>
#include <climits>

using namespace std;

int main()
{
    int numReq, numProp, numRFP=1, met;
    float price, lowest_price;
    string tmp, name, result;
    int highest_comp;
    while(cin>>numReq>>numProp)
    {
        if(numRFP>1 && numReq!=0 && numProp!=0) cout<<endl;
        else if(numReq ==0 && numProp==0) break;
        highest_comp = 0;
        lowest_price = INT_MAX;
        getline(cin,tmp);
        for(int i=0; i<numReq; i++)
        {
                getline(cin, tmp);
        }
        for(int i=0; i<numProp; i++)
        {
            getline(cin,name);
            cin>>price>>met;
            getline(cin,tmp);
            if(met > highest_comp)
            {
                result = name;
                highest_comp = met;
                lowest_price = price;
            }
            else if(met == highest_comp && price < lowest_price)
            {
                result = name;
                highest_comp = met;
                lowest_price = price;
            }
            for(int j=0; j<met; j++) getline(cin,tmp);
        }
        cout<<"RFP #"<<numRFP<<endl;
        cout<<result<<endl;
        numRFP += 1;
    }
    return 0;
}
