#include<iostream>
using namespace std;
int square(int n)
{
    return n*n;
}
int main()
{
    int n;
    cout<<"Enter the number: "<<endl;
    cin>>n;

    for(int i=1;i<=n;i++)
    {
        cout<<"Square number of "<<i<<" is: "<<square(i)<<endl;
    }
}