#include<iostream>
using namespace std;

class key
{
public:
    virtual sum(int x,int y)=0;

};
class Engine:public key
{
    int sum(int x,int y)
    {
        return x+y;
    }
};
int main()
{  Engine E;
    key *k;
    k=&E;
    cout<<k->sum(10,10);
}
