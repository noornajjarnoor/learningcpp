#include <iostream>
using namespace std;
class intpair{
    public:
    int m_a{};
    int m_b{};
    void set(int a,int b){
        m_a=a;
        m_b=b;
    }
    void print(){
        cout << "pair" <<"("<<m_a <<","<<m_b<< ")"<< endl;
    }
};
int main(){
    intpair p1;
    p1.set(1,1);
    intpair p2{2,2};
    p1.print();
    p2.print();
}
