#include<iostream>
using namespace std;

int main()
{
    char c;
    // int islowercasevowel,isupercasevowel;

    cout<<"enter the alphabate";
    cin>>c; 

    // islowercasevowel=(c=='a'||c=='e'||c=='i'||c=='o'||c=='u');

    // isupercasevowel=(c=='A'||c=='E'||c=='I'||c=='O'||c=='U');

    // if(islowercasevowel||isupercasevowel)
    // {
    //     cout<<c<<"is a vowel";
    // }
    // else
    // {
    //     cout<<c<<"is a constant";
    // }
    // return 0;

    if(c=='a'||c=='e'||c=='i'||c=='o'||c=='u')
    {
        cout<<c<<"is a vowel";
    }
    else

    {
        cout<<c<<"is a constant";
    }
    
   
    
}


    

    