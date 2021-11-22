#include <iostream>
#include <stdio.h>

using namespace std;
int C(int n, int k)
{
   if(n==k)
   {
   		return 1;
   }
   if(k==0)
   {  	
   		return 1;
   }
   else
   {
   		return C(n-1,k-1)+C(n-1,k);	
   }
}
 
int main()
{
    int n,k;
    cout<<"Nhap n: ";
    cin>>n;
    cout<<"Nhap k: ";
    cin>>k;
    cout<<"Ham C co gia tri la: "<<C(n,k);
    cout<<endl;
    return 0;
}
