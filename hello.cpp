#include <iostream>
#include <vector>
//here is the comment
using namespace std;

int main() 
{
    int n;

    cout << "enter the size of ";
    cin >> n;

    vector<int> vector1(n);
    vector<int> vector2(n);

    cout << "enter elements of the r:";
    for (int i = 0; i < n; ++i)
     {
        cin >> vector1[i];
    }
   // stash with comments
    cout << "Enter elements of the second vector:"<<endl;
    for (int i = 0; i < n; ++i)
     {
        cin >> vector2[i]; 
    }
   // this is new change 
   int j;
    int Product = 0;
    for (int i = 0; i < n; ++i)
     {
        Product += vector1[i] * vector2[i];
    }
    // change for conflic in line 34 master branch

    cout << "The dot product is: " << Product << endl;

    return 0;
    // new change for github push
}
