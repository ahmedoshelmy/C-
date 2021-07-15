#include <iostream>

using namespace std;

int main(){
int n,lower=0,upper=0;
cin>>n;
int arr[n][n];

for(int x=0;x<n;x++){
    for(int y=0;y<n;y++)
        cin>>arr[x][y];
}
for(int j=0;j<n;j++){
    for(int i=0;i<=j;i++){
        upper+=arr[i][j];
    }
}
for(int j=0;j<n;j++){
    for(int i=n-1;i>=j;i--){
        lower+=arr[i][j];
    }
}
cout<<upper<<endl<<lower;
}
