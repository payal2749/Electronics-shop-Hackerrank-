#include <bits/stdc++.h>
using namespace std;

int func(vector <int> keyb,vector <int> mou,int b)
{
    int k=0,flag=0;
    int sum;
    for(size_t i=0;i<keyb.size();i++)
    {
       for(size_t j=0;j<mou.size();j++)
       {
           sum=keyb[i]+mou[j];
           if((sum<b) && (k<sum))
           {
               k=sum; 
               flag=1;
               
           }
           
       }    
    }
    if(flag==1)
        return k;
    else
        return -1;
    
  
}



int main()
{
   vector <int> keyb{3,1};
   vector <int> mou{5,2,8};
   int b=10;
   cout<<func(keyb,mou,b);
   return 0;
    
    
}