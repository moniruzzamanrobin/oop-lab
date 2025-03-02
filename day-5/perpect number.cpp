#include<iostream>
#include<math.h>
using namespace std;
class number
{
public:
    void divisor()
    {
        int n;
        cin>>n;
        int sum = 1;
        for(int i = 2; i<=sqrt(n); i++){
            if(n%i == 0){
                sum=sum+i+n/i;
            }
        }
        if(sum == n){
            cout<<"is perpect number"<<endl;
        }else{
            cout<<"is not perpect number"<<endl;
        }
    }
};
int main()
{
    number obj;
    obj.divisor();
    return 0;
}
