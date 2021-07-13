#include <iostream>

using namespace std;

int main()
{
    int row,column,swap1,swap2,swapp;
    cin>>row>>column;
int arr[row][column];
for(int i=0;i<row;i++){
    for(int j=0;j<column;j++){
        cin>>arr[i][j];
    }
}
cin>>swap1>>swap2;
for(int i=0;i<row;i++){
    swapp=arr[i][swap1];
    arr[i][swap1]=arr[i][swap2];
    arr[i][swap2]=swapp;
}
for(int i=0;i<row;i++){
    for(int j=0;j<column;j++){
        cout<<arr[i][j];
    }
}



}
