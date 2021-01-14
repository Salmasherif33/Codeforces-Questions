#include <iostream>
#include <string>

using namespace std;

int main()
{
    int n,t;
    cin >> n >> t;
    string s;
    cin >> s;

    for (int i = 0; i < t; i++){
        for (int j = 0; j < s.length() ; j++){
            if (s[j] == 'B' && s[j+1] == 'G' && j != n-1){
             s[j] = 'G';
             s[j+1] = 't';
            }


        }
         for (int k= 0 ; k < s.length(); k++){
                if (s[k] == 't')
                    s[k] = 'B';
            }
    }
    cout << s;
    return 0;
}
