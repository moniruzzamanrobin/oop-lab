#include<iostream>
using namespace std;
class contruct
{
public:
    int num1,num2;
    contruct()
    {
        num1 = 10;
        num2 = 20;
    }
};
int main()
{
    contruct obj;
    cout<<"First Number is: "<<obj.num1<<endl;
    cout<<"Second Number is: "<<obj.num2<<endl;

    return 0;
}
