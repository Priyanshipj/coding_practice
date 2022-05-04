#include <iostream>

using namespace std;


int main()

{

int a[3],m[3],p[3];

cout<<"enter the elements of array a";

for(int i=0;i<=3;i++)

{

    cin>>a[i];

}

cout<<"enter the elemnts of array m";

for(int i=0;i<=3;i++)

{

    cin>>m[i];

}

for(int i=0;i<=3;i++)

{

    p[i]=a[i]+m[i];

    
}

for(int i=0;i<=3;i++)

{
  
  cout<<p[i];

}

}

