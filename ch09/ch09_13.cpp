//c从一个list<int>和vector<int>初始化一个vector<double

#include<iostream>
#include<string>
#include<vector>
#include<list>

using std::list;
using std::vector;
using std::cout;
using std::endl;

int main()
{
    list<int> ilist(5,4);
    vector<int> ivec(5,5);

    vector<double> dvec(ilist.begin(),ilist.end());
    for(auto i:ilist) cout<<i;
    cout << endl;
    for(auto t:dvec) cout<<t;
    cout<<endl;

    vector<double> dvec2(ivec.begin(),ivec.end());
        for(auto i:ivec) cout<<i;
    cout << endl;
    for(auto t:dvec2) cout<<t;
    cout<<endl;

    return 0;
}