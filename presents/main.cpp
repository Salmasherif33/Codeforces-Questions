#include <iostream>

using namespace std;

int main()
{
    short int n;
    cin >> n;
    short int c =1;
    short int arr [100];
    short int arr1[100];
    for(int i=0; i < n; i++){
        cin >>arr[i];

    }
    for (int i = 0; i < n;){
        if (arr[i] == c){
            arr1[c-1] = i+1;
            c++;
            i =0;
        }
        else{
            i++;
        }
    }
    for(size_t i = 0; i <n; i++){
        cout <<arr1[i]<<" ";
    }
    return 0;
}
