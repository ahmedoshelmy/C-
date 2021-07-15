#include <iostream>

using namespace std;

int main(){
int n,m,q,row1,row2;
bool smaller = true;
cin>>n>>m;
int arr[n][m];
for(int i=0;i<n;i++)
    for(int j=0;j<m;j++)
        cin>>arr[i][j];

cin>>q;

for(int i=0;i<q;i++){
        smaller =true;
    cin>>row1>>row2;
    for(int c=0;c<m;c++ ){
    if(arr[row1-1][c]>=arr[row2-1][c]){
        smaller = false;
        break;
    }
    }
    if(smaller) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
}

}
