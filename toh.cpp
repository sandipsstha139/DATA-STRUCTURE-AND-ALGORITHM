#include<conio.h>
#include<iostream>
using namespace std;
void transfer(int n,char from,char to,char temp)
{
    if(n==0)
    return;
    else 
   { transfer(n-1,from,temp,to);
    cout<<"\nMove disk from "<< from<<" to "<<to<<endl;
    transfer(n-1,temp,to,from);
   }
}
int main()
{
    int n;
    cout<<"Enter the number of disks: \n";
    cin>>n;
    transfer(n,'A','C','B');
    getch();
    return 0;
}

