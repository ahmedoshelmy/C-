#include <iostream>
using namespace std;

int main(){
int r,c,max;
int oc,orr,cnt=0;
cin>>r>>c;
int arr[r][c];
max=-999999;
for(int i=0;i<r;i++){
    for(int j=0;j<c;j++){
            cin>>arr[i][j];
        if(max<arr[i][j]){
          max=arr[i][j];
          cnt=0;
        }
        else if(max==arr[i][j]){
            cnt++;
            orr=i;oc=j;
        }
    }
}
cout<<"The Max is :"<<max;
if(cnt) cout<<"It's last occurrence: Row:"<<orr<<"Column:"<<oc;

}
