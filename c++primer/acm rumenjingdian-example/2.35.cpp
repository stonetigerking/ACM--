#include<iostream>
#include<typeinfo>
using namespace std;
int main()
{
    const int i=42;
    auto j=i;
    const auto &k=i;
    auto *p=&i;
    const auto j2=i,&k2=i;
    std::cout<<typeid(i).name()<<std::endl;
    std::cout<<typeid(j).name()<<std::endl;
    cout<<typeid(k).name()<<endl;
    cout<<typeid(p).name()<<endl;
    cout<<typeid(j2).name()<<endl;
    cout<<typeid(k2).name()<<endl;
    return 0;
}