
#include<iostream>
using namespace std;
class point
{
private:
    int x, y;
public:
    point(int x1, int y1)
    {
        x = x1;
        y = y1;
    }
    int getx()
    {
        return x;
    }
    int gety()
    {
        return y;
    }
};
int main()
{
    point obj(10, 15);
    cout<<"1st Value = "<<obj.getx()<<endl;
    cout<<"2nd Value = "<<obj.gety()<<endl;
    return 0;
}
