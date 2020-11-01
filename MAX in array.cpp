#include <iostream>

using namespace std;

int main()
{
int number,x,maximum,i;
cin>>number;
int numbers[number];
maximum=0;
for(int c=0;c<number;c++){
    cin>>x;
    numbers[c]=x;
    if(numbers[c]>maximum){
         maximum=numbers[c];
         i=c;
    }
}
cout<<maximum<<endl;
maximum=0;
numbers[i]=0;
for(int c=0;c<number;c++)
        if(numbers[c]>maximum){
         maximum=numbers[c];
         }

    cout<<maximum;
}

