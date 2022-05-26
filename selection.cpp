


#include<iostream>
using namespace std;
int main()
{
   int Arr[7], i,j;
   for(int i=0;i<6;i++)
   {
       cin>>Arr[i];
   }

   for(int i=0;i<6;i++)
   {

       int Min= Arr[i];
       
       for (int j= i+1; j<6 ; j++)
       {
           if(Arr[j]<Min)
           {
               
                break;

           }

       }
       int swap= Arr[i];
       Arr[i]= Arr[j];
       Arr[j]= swap;
   }
for(int i=0;i<6;i++)
   {
       cout<<Arr[i]<<" ";
   }

    return 0;
}