#ifndef ch13_18_h
#define ch13_18_h

#include <string>
using std::string;

class Employee{
public:
    Employee(); //默认构造函数
    Employee(const string& name);//合成构造函数

    const int id() const{return id_;}

private:
    string name_;
    int id_;
    static int s_increment;
};

#endif