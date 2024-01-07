#include<iostream>
using namespace std;

int main()
{
    int x,y;
    cin>>x>>y;

    if(x==y)
    {
        cout<<"both qual number";

    }
    else{
        if(x>y)
        {
            cout<<"x greater than y";
        }
        else
        {
            cout<<"y greater than x";
        }
    }
    return 0;
}