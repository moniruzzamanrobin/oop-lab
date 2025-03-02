#include<iostream>
using namespace std;
#define PI 3.1416
#define AREA(r)(PI*(r)*(r))

int main(){
    double Radius = 5.5;
    cout<<"Area of circle is: "<<AREA(Radius)<<endl;

    return 0;
}
