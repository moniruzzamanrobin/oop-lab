#include<iostream>
using namespace std;
class vehicle
{
public:
    vehicle()
    {
        cout<<"this is a vehicle"<<endl;
    }
};
class forewheeler
{
public:
   forewheeler()
    {
        cout<<"this is a 4 wheeler"<<endl;
    }
};
class car : public vehicle
{
public:
    car()
    {
        cout<<"this is a car"<<endl;
    }

};
class bus : public vehicle, public forewheeler
{

};
int main()
{
    bus obj1;
    car obj2;
    return 0;
}

