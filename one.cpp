#include<iostream>
#include<map>
using namespace std;
int main()
{   
    map<int,int,less<int>> Map;
   int x=1;
   int j;
   int i;

   while(x)
   {    cout<<"Enter a number :"<<"\n";
       cin>>i>>j;
       Map.insert({i,j});
        cout<<"\n"<<"Enter a choice :"<<"\n";
        cin>>x;

   }
    
    map<int,int,greater<int>>:: iterator itr;  
    itr=Map.begin();
    int len=Map.size();
    while (len)
    {
        cout<<"\n"<<itr->first<<":"<<itr->second;

        itr++;
        len--;
    }
}
