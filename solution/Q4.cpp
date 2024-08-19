/*
Q4: Write a function to count the number of digits in a number and then print the square of this number.
*/
#include<iostream>
using namespace std;
int count(int n)
{
    int c=0;
    while(n>0)
    {
        int a=n;
        a%=10; 
        c++;
        n/=10;
    }
    return c;
}
int square(int n)
{
    return n*n;
}
int main()
{
    int n;
    cout<<"Enter the number: "<<endl;
    cin>>n;
    cout<<"The number of digits are: "<<count(n)<<endl;
   cout<<"The square of the number is: "<<square(n);

}