#ifndef CP5_ex7_24_h
#define CP5_ex_24_h

#include<string>

class Screen{
public:
    using pos=std::string::size_type;

    Screen &set(char);
    Screen &set(pos,pos,char);
    Screen() = default;
    Screen(pos ht, pos wd): height(ht),width(wd), contents(ht * wd, ' '){}
    Screen(pos ht, pos wd, char c): height(ht),width(wd), contents(ht*wd, c){}

    char get() const {return contents[cursor];}
    char get(pos r, pos c) const { return contents[r * width + c];}

private:
    pos cursor = 0;
    pos height = 0, width = 0;
    std::string contents;
};
inline Screen &Screen::set(char c)
{
    contents[cursor] = c;
    return *this; // 将this对象作为左值返回
}
inline Screen &Screen::set(pos r, pos col, char ch)
{
    contents[r*width + col] = ch;
    return *this;
}

#endif
