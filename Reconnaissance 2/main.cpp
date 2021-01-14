#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{
    short int n;
    cin >> n;
    int arr[100];
    int mn = 0;
    int mx = 0;
    int s0;
    int flag = 0;
    for (int i  = 0; i < n; i++ )
        cin >> arr[i];

    for(int i= 0; i < n; i++){

        if ( i == 0){
            mx = abs(arr[i] - arr[i + 1]);
            mn = mx;
            s0 = i+1;
        }
         else if (i == n-1 ){
           mx = abs(arr[i] - arr[0]);
           flag = 1;
         }
        else
        mx = abs(arr[i] - arr[i + 1]);


         if(mx < mn){
            mn = mx;
            s0 = i+1;
        }
    }
    if (flag = 1 && s0 == n)
        cout << s0 << ' '<< 1 ;
    else
        cout << s0 << ' ' << s0 + 1;
    return 0;
}
