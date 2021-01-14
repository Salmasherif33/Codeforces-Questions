#include <iostream>
#include <string.h>

using namespace std;

int main()
{
    char X[3];
    int x = 0;
    int n;
    cin >> n;
    while(n>0){

        for (int i = 0; i <=2; i++){
            cin >>X[i];
        }
            if(X[1] == '+')
                x++;

             if(X[1] =='-')
                    x--;
        n--;

    }

    cout << x;

    return 0;
}
