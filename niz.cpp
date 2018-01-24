#include <iostream>
using namespace std;
main()
{
    char niz[80];
    bool isMoreThanOnce=false;
    cin.getline(niz,80);
    for(int i=0;niz[i];i++)
    {
        for(int j=i+1; niz[j];j++ )
        {
            if(niz[i]==niz[j])
            {
                isMoreThanOnce=true;
                cout<<niz[i]<<"  "<<i<<" "<<j;
                break;
            }
        }
        if(isMoreThanOnce)
        {
            break;
        }else{cout<<"No";}
    }
}
