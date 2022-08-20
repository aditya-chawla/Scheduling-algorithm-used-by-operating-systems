#include <bits/stdc++.h>


using namespace std;

int main()
{
    int breads,eggSlice,total_king, total_regular;
    cin>>breads>>eggSlice;
    total_king=((breads/2)-eggSlice);
    total_regular=(eggSlice-total_king);
    
    if(4*total_king+2*total_regular==breads&&total_king+total_regular==eggSlice)
    {
        cout<<"["<<total_king<<","<<total_regular<<"]";
    }
    else
    {
        cout<<" ";
    }
    return 0;
}


