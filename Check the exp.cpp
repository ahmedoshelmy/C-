#include <math.h>
#include <iostream>
using namespace std;

double poly(double x, int n,int m){
if(n<m){
    return x/n*(1+poly(x,n+1,m));
}else
   return x/n;
}
int main()
{
    double x;
    int n;
char ans= 'Y';
while(ans == 'y' || ans == 'Y'){
    cout<<"Enter the value of the integer you want to check \n";
    cin>>x>>n;
    cout<<"The output is "<<1+poly(x,1,n)<<endl;
    cout<<"The output of the function exp() is  "<<exp(x)<<endl;
    cout<<"Enter Y/y for checking again \n";
    cin>>ans;
}
}
