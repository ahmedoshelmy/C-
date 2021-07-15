#include <iostream>

using namespace std;

int main(){
// Mountain means its value > all 8 neighbors

int n,m;
cin>>n>>m;
int arr[n][m];

for(int i=0;i<n;i++){
    for(int j=0;j<m;j++){
        cin>>arr[i][j];
    }
}

for(int i=0;i<n;i++){
    for(int j=0;j<m;j++){
      int cnt=0;
      //1.left
      if(j-1<0 || arr[i][j]>arr[i][j-1]){
        cnt++;
      }
      //2.right
        if(j+1>=n || arr[i][j]>arr[i][j+1]){
        cnt++;
      }  //3.down
        if(i-1<0 || arr[i][j]>arr[i-1][j]){
        cnt++;
      }  //4.up
        if(i+1>=n || arr[i][j]>arr[i+1][j]){
        cnt++;
      }  //5.up right
        if(i+1>=n||j+1>=n || arr[i][j]>arr[i+1][i+1]){
        cnt++;
      }  //6.up left
        if(j-1<0 ||i+1>=n|| arr[i][j]>arr[i+1][j-1]){
        cnt++;
      }  //7.down right
        if(j+1>=n||i-1<0 || arr[i][j]>arr[i-1][j+1]){
        cnt++;
      }  //8.down left
        if(i-1<0||j-1<0  || arr[i][j]>arr[i-1][j-1]){
        cnt++;
      }
      if(cnt == 8) cout<<i<<" "<<j<<endl;
    }
}

}
