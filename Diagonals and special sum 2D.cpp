#include <iostream>
using namespace std;

int main(){
int row,column;
int arr[100][100]={0};
int sum1,sum2,sum3,sum4=0;
sum1=sum2=sum3=0;
cin>>row>>column;
for(int i=0;i<row;i++)
    for(int j=0;j<column;j++)
        cin>>arr[i][j];

for(int i=0;i<row;i++)
    sum1+=arr[i][i];
cout<<"The sum of the left diagonal is "<<sum1<<endl;

int i=0,j=column;
    while(j>0){
        sum2+=arr[i++][--j];
    }

cout<<"The sum of the right diagonal is "<<sum2<<endl;

for(int i=0;i<row;i++)
    sum3+=arr[i][column-1];
cout<<"The sum of the last column is "<<sum3<<endl;


for(int i=0;i<column;i++)
    sum4+=arr[row-1][i];
cout<<"The sum of the last row is "<<sum4<<endl;
}
