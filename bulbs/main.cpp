#include <iostream>

using namespace std;

int main()
{
    int n,m;
    cin >> n >> m;
    int no_con;
    int j;
    int c = 0;
    int c1 = 0;
     int arr_bulbs[10000];
    for (int i=0; i < n; i++){
        cin >> no_con;
        c1+= no_con;
        j = 0;
        while (j < no_con){
            cin >> arr_bulbs[c];
            j++;
            c++;
        }
    }
    c =0;

    for (int i =1; i <= m; i++){
        for (int j = 0; j < c1; j++){
            if (arr_bulbs[j] == i){
                    c++;
                break;
            }
        }
          if (c == 0){
                cout<<"NO";
                return 0;
            }
            c =0;

    }
        cout << "YES";

    return 0;
}
