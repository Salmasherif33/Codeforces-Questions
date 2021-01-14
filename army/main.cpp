#include <iostream>

using namespace std;

int main()
{
    int n,a,b;
    cin >> n;
    int c = 0;
    int year [100];
    for (int i = 0; i < n-1; i++){
        cin >> year[i];
    }
    cin >>a >> b;
    int i = a-1;
    int j = 0;
    while ( j < b-a){
        if (j == 0){
            c+=year[i];
            i++;
            j++;
        }
        else{
            c+=year[i];
            i++;
            }

    }
    cout << c;
    return 0;
}
