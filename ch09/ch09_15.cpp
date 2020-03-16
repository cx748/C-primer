#include <vector>
#include <iostream>
using std::vector;

int main()
{
    vector<int> vec1{1,2,3,4,5};
    vector<int> vec2{1,2,3,4,5};
    vector<int> vec3{1,2,3,4};

    std::cout<<std::boolalpha<<(vec1==vec2)<<std::endl;
    std::cout<<std::boolalpha<<(vec1==vec3)<<std::endl;

    return 0;
}