#include <iostream>
#include <string>
#include <vector>
#include <list>

int main()
{
    std::list<const char*> l{"Alice","Bob","Chalice"};
    std::vector<std::string> v;
    v.assign(l.cbegin(), l.cend());

    for(const auto& ch : v)
        std::cout<< ch <<std::endl;
    
    for(const auto& ch1 :l)
        std::cout<< ch1 <<std::endl;

    return 0;
}