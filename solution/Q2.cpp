/*
Q2 : Write a function that takes the radius of a circle as an argument and returns its area.
*/
#include<iostream>
using namespace std;
float area(float r)
{
    return 2*3.14*r;
}
int main()
{
    int r;
    cout<<"Enter the radius: "<<endl;
    cin>>r;

    
        cout<<"The area of circle is: "<<area(r)<<endl;
    }
