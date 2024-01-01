#include <iostream>
#include <cmath>
using namespace std;

double squareArea(){
    cout<<"enter the height : ";
    double h, w;
    cin>>h;
    cout<<"enter the width : ";
    cin>>w;
    double sum;
    sum = w * h;
    cout<<"the result is ";
    return sum;
}

double requetangleArea(){

    cout<<"enter the height : ";
    double h, b, sum;
    cin>>h;
    cout<<"enter the base : ";
    cin>>b;
    cout<<"the result is : ";
    sum =  (h * b) / 2;
    return sum;

}

double cireclArea(){
    double r, sum;
    const float p = 3.14;
    cout<<"enter the raduis : ";
    cin>>r;
    cout<<"the result is : ";
    double pw = pow(r, 2);
    sum =  p * pw;
    return sum;
}

int main(int argc, char const *argv[])
{
    // cout<<squareArea();
    cout<<cireclArea();
    
    return 0;
}
