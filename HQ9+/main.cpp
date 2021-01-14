#include <iostream>
#include<string>

using namespace std;

int main()
{
    string HQ;
    cin >> HQ;
    for(int i = 0; i < HQ.length(); i++){
        if (HQ[i] == 'H' || HQ[i] == 'Q' || HQ[i] == '9'){
            cout <<"YES";
            return 0;
        }
    }
    cout<<"NO";
    return 0;
}
