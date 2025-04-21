#include<iostream>
using namespace std;
class state
{
public:
    state()
    {
        cout<< "this is a state university" << endl;
    }
};

class Dept : public state{

};
int main()
{
    Dept obj;
    return 0;
}
