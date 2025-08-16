
#include <iostream>
#include <climits>
int getMax(int input[])
{
  int temp=INT_MIN;
  for(int itr=0;itr<5;itr++)
  {
     if(input[itr]>temp)
     {
         temp=input[itr];
     }
  }   
  return(temp);
}
int getMin(int input[])
{
    int temp=INT_MAX;
    for(int itr=0;itr<5;itr++)
    {
        if(input[itr]<temp)
        {
            temp=input[itr];
        }
    }
    return(temp);
}

void printarray(int array[])
{
  for(int i=0;i<5;i++)  
  {
    std::cout<<array[i]<<" ";
  }
  std::cout<<std::endl;
}
// int answer[5] ;
// int* reverse(int input[])
void reverse(int input[])
{
  int answer[5] ;
  for(int i=0;i<5;i++)
  {
      answer[i]=input[4-i];
  }
  for(int i=0;i<5;i++)
  {
    input[i]=answer[i];
  }
//   return(answer);
// printarray(answer);
}

void react(int input[])
{
    int j;
    for(int i=0;i<2;i++)
    {
        j=input[i];
        input[i]=input[4-i];
        input[4-i]=j;
    }
}
int main()
{
  int arr[]={5,79,111,-9,20};
  int arr2[]={67,89,88,74,34};
 int myMax=getMax(arr);
std::cout<<"maximum="<<myMax<<"\n";
  int myMin=getMin(arr);
  std::cout<<"minimum="<<myMin<<"\n";
  printarray(arr);
//   printarray(arr2);
//   reverse(arr);
react(arr);
  printarray(arr);
    return 0;
}


