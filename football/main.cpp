#include <iostream>
#include <string.h>
using namespace std;

int main()
{
    string inp;
    int c0=0;
    int c1 = 0;
    cin >> inp;
    for(int i = 0; i <inp.length(); i++){

        if (inp[i] == '0'){
            c0++;
            c1 = 0;
        }
        else{
            c1++;
            c0 = 0;
        }
        if(c0 == 7 || c1 == 7){
            cout <<"YES";
        return 0;
        }

    }

    cout <<"NO";
   return 0;
}
