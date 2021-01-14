#include <iostream>

using namespace std;

int main()
{
    string s;
    short int n;
    short int c=0;
    cin >> n;
    cin >> s;
    for(int i=0; i < s.length(); i++){
        if(s[i]== s[i+1]){
            c++;
        }
    }
    cout <<c;

    return 0;
}
