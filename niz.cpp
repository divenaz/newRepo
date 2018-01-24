#include <iostream>
using namespace std;
main()
{
    char tukanekfniz[80];
    bool isMoreThanOnce=false;
    cin.getline(tukanekfniz,80);
    for(int i=0;tukanekfniz[i];i++)
    {
        for(int j=i+1; tukanekfniz[j];j++ )
        {
            if(tukanekfniz[i]==tukanekfniz[j])
            {
                isMoreThanOnce=true;
                cout<<tukanekfniz[i]<<"  "<<i<<" "<<j;
                break;
            }
        }
        if(isMoreThanOnce)
        {
            break;
        }else{cout<<"No";}
    }
}
