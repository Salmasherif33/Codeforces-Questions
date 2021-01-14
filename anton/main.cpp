#include <iostream>

using namespace std;

int main()
{
   int n;
   cin >> n;
   string mat;
   cin >> mat;
   int ca= 0;
   int cd = 0;

   for(int i = 0; i < mat.length(); i++){
    if(mat[i] == 'A')
        ca++;
    else if (mat[i] == 'D')
        cd++;
   }
   if (ca > cd)
    cout <<"Anton";
   else if (cd > ca)
    cout << "Danik";
   else
    cout<<"Friendship";
    return 0;
}
