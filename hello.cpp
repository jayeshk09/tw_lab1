#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n;

    cout << "Enter the size of the vectors: ";
    cin >> n;

    vector<int> vector1(n);
    vector<int> vector2(n);

    cout << "Enter elements of the first vector:\n";
    for (int i = 0; i < n; ++i) {
        cin >> vector1[i];
    }

    cout << "Enter elements of the second vector:\n";
    for (int i = 0; i < n; ++i) {
        cin >> vector2[i];
    }

    int dotProduct = 0;
    for (int i = 0; i < n; ++i) {
        dotProduct += vector1[i] * vector2[i];
    }

    cout << "The dot product is: " << dotProduct << endl;

    return 0;
}
