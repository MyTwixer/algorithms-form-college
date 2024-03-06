#include <iostream>
using namespace std;

int main() {
    int A[20];
    int max = 0;

    cout << "Enter array: \n";

    for (int i = 0; i < 20; i++) {
        cout << "A[" << i << "] = ";
        cin >> A[i];
    }

    cout << "Array \n";

    cout << "A = { " << A[0] << ",";

    for (int i = 0; i < 20; i++) {
        if (i != 19)
        {
            cout << A[i] << ",";
        }
        else {
            cout << A[i] << "} \n";
        }

        if (A[i] > max) {
            max = A[i];
        }
    }

    cout << "Maximum positive element: " << max << endl;

    return 0;
}
