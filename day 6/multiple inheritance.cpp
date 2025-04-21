#include<iostream>
using namespace std;
class university
{
public:
    university()
    {
        cout<<"this is a university"<<endl;
    }
};
class student
{
public:
   student()
    {
        cout<<"i am a student"<<endl;
    }
};
class state : public university, public student
{

};
int main()
{
    state obj;
    return 0;
}

