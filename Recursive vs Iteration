#include <math.h>
#include <iostream>

using namespace std;
double rec(int i);
double iterate(int i);
int main()
{
    int n;
cin>>n;
cout<<rec(n);
cout<<endl<<iterate(n);
}
double sum=0;
double iterate(int i){
for(int j=0;j<=i;j++)
    sum += (pow(2,j)+pow(3,j))/pow(6,j);

return sum;
}
double sum1=0;
double rec(int i){
        sum1 += (pow(2,i)+pow(3,i))/pow(6,i);
if(i>0){
    return rec(i-1);
}
else{
    return sum1;
}

}
