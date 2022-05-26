#include<stdio.h>
#include<iostream>
using namespace std;


void FreqCount(int Arr[], int Size)
{
    int iCnt=1;
int i;
    for(i=1; i<Size; i++)
    {
       if(Arr[i-1]==Arr[i])
       {
          iCnt++;
       }
       else
       {
          cout<<Arr[i-1]<<" = "<<iCnt<<endl;
          iCnt=1;
       }
    }
          cout<<Arr[i]<<" = "<<iCnt<<endl;
}

int main()

{
int Arr[8]={10,10,30,30,50,50,60,60};

    for(int i=1; i<8; i++)
{
   cout<<Arr[i]<<endl;
}
FreqCount(Arr,8);



   return 0;
}