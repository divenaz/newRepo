#include <iostream>
using namespace std;
main()
{
    char tukanekfniz[80];
    bool isMoreThanOnce=false;
    cin.getline(tukanekfniz,80);
    for(int a=0;tukanekfniz[a];a++)
    {
        for(int j=a+1; tukanekfniz[j];j++ )
        {
            if(tukanekfniz[a]==tukanekfniz[j])
            {
                isMoreThanOnce=true;
                cout<<tukanekfniz[a]<<"  "<<a<<" "<<j;
                break;
            }
        }
        if(isMoreThanOnce)
        {
            break;
        }else{cout<<"No";}
    }
}
