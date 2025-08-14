#include<iostream>
using namespace std;
int solution(int input[] , int n)
{
   int num=0;
   for(int i=0;i<n;i++)
   {
       num=num + input[i]*(10^(n-(i+1)));
   }
   return(num);
}

int main()
{
    int arr[]={3,4,7};
    int size = sizeof(arr);
    cout<<"answer is = "<<solution(arr,size);
}practice data structers and algorithm problems
