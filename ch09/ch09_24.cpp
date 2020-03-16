#include<iostream>
#include<vector>

using std::vector;
using std::cout;

using std::endl;

int main()
{
    vector<int> v;
    cout<<v.at(0);
    cout<<v[0];
    cout<<v.front();
    cout<<*v.begin();

    return 0;
}