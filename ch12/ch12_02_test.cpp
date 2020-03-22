#include "ch12_02.h"
#include <iostream>

int main()
{
    const StrBlob csb{"Hello","World","cx748"};
    StrBlob sb{"Hello","world","Moophy"};

    std::cout << csb.front() <<" "<<csb.back() <<std::endl;
    sb.back() = "cx748";
    std::cout << sb.front() <<" "<<sb.back()<<std::endl;
}