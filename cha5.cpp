#include <iostream>
#include <vector>
#include <string>

using namespace std;
using std::cout;
using std::cin;
using std::endl;
using std::vector;

/*int main()
{
    int val = 0;
    int sum = 0;
    while (val <= 10 )
    {
        sum+=val;
        ++val;
    }
} 
*/

/*exercise 5.5*/
/*
int main()
{
    vector<string> scores = {"F","D","C","B","A","A++"};

    int grade[0];
    while(cin >> grade)
    {
        string lettergrade;
        if(grade < 60)
            lettergrade = scores[0];
        else{
            lettergrade = scores[(grade-50)/10];
            if(grade!=100)
            {
                if(grade % 10 >7)
                    lettergrade +="+";
                else if(grade%10<3)
                    lettergrade +="-";
            }
        }
        cout << lettergrade <<endl;
    }
    return 0;
}
*/

/*
int main()
{
    unsigned aCnt = 0, eCnt = 0, iCnt = 0, oCnt = 0, uCnt = 0, spaceCnt = 0,
             tabCnt = 0, newLineCnt = 0, ffCnt = 0, flCnt = 0, fiCnt = 0;
    char ch, prech = '\0';
    while (cin >> std::noskipws >> ch) {
        switch (ch) {
        case 'a':
        case 'A':
            ++aCnt;
            break;
        case 'e':
        case 'E':
            ++eCnt;
            break;
        case 'i':
            if (prech == 'f') ++fiCnt;
        case 'I':
            ++iCnt;
            break;
        case 'o':
        case 'O':
            ++oCnt;
            break;
        case 'u':
        case 'U':
            ++uCnt;
            break;
        case ' ':
            ++spaceCnt;
            break;
        case '\t':
            ++tabCnt;
            break;
        case '\n':
            ++newLineCnt;
            break;
        case 'f':
            if (prech == 'f') ++ffCnt;
            break;
        case 'l':
            if (prech == 'f') ++flCnt;
            break;
        }
        prech = ch;
    }

    cout << "Number of vowel a(A): \t" << aCnt << '\n'
         << "Number of vowel e(E): \t" << eCnt << '\n'
         << "Number of vowel i(I): \t" << iCnt << '\n'
         << "Number of vowel o(O): \t" << oCnt << '\n'
         << "Number of vowel u(U): \t" << uCnt << '\n' << "Number of space: \t"
         << spaceCnt << '\n' << "Number of tab char: \t" << tabCnt << '\n'
         << "Number of new line: \t" << newLineCnt << '\n' << "Number of ff: \t"
         << ffCnt << '\n' << "Number of fl: \t" << flCnt << '\n'
         << "Number of fi: \t" << fiCnt << endl;

    return 0;
}
*/

/*
int main()
{
    vector<string> v={"how","now","now","now","cow","cow"};
    string word,pre_word,max_repeat_word;
    int repeat_times = 0, max_repeat_times = 0;
    while(cin >> word)
    {
        if(word == pre_word)
            ++repeat_times;
        else{
            repeat_times=1;
            pre_word=word;
        }

        if(max_repeat_times < repeat_times)
        {
            max_repeat_times = repeat_times;
            max_repeat_word = pre_word;
        }
    }

    if(max_repeat_times <= 1){
        cout <<"no word was repeated;";
    }else{
        cout<<"the word: "<<max_repeat_word<<"occurred "<<max_repeat_times<<"times"<<endl;
    }
}
/*
int main()
{
    vector<int> v1={0,1,1,2}, v2={0,1,1,2,3,5,8};
    auto size = v1.size() <v2.size() ? v1.size():v2.size();
    for(decltype(v1.size()) i=0; i != v1.size(); ++i)
    {
        if(v1[i] != v2[i]){
            cout << "false"<<endl;
            return 0;
        }
    }
    cout<<"true"<<endl;
    return 0;
}
*/

int main()
{
    string s1,s2;
    do
    {
        cout << "input two sting: ";
        cin >> s1 >> s2;
        cout <<( s1.size() < s2.size()? s1.size():s2.size());   /* code */
    } while (cin);
    
}