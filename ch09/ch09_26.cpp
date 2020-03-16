#include <iostream>
#include <vector>
#include <list>

using std::vector;
using std::list;
using std::cout;
using std::endl;
using std::end;

int main()
{
    int ia[]={0,1,2,4,5,6,7,8,9,21};

    vector<int> vec(ia,end(ia));
    list<int> lst(vec.begin(), vec.end());

    for(auto it = lst.begin();it !=lst.end(); )
    {
        if (*it % 2)
            it = lst.erase(it);
        else
        {
            ++it;
        }
        
    }
    for (auto it = vec.begin(); it != vec.end();)
    if (!(*it & 0x1))
        it = vec.erase(it);
    else
        ++it;

    for (auto i : lst) cout << i << " ";
    cout << "\nvector : ";
    for (auto i : vec) cout << i << " ";
    cout << std::endl;

    return 0;
}