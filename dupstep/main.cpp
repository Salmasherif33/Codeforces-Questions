#include <iostream>
#include<string>
using namespace std;

int main()
{
    string str;
    getline(cin,str);

    for(size_t i = 0; i < str.length();){
        if (str[i] == 'W' && str[i+1] == 'U'&& str[i+2] == 'B'){
            str.erase(i,2);
            if(i!=0 && i != str.length()-1)
            str[i] = ' ';
            else if(str[i] == 'B')
                str.erase(i,1);
                i = 0;
        }
        else
            i++;
    }
    cout <<str;
    return 0;
}
