#include <iostream>
#include <string>
using namespace std;

// int main() {
//     cout << "Hello world!" << endl;
//     return 0;
// }

// int main() {
//     int a, b, c;
//     cin >> a >> b >> c;
//     cout << a + b + c << endl;
//     return 0;
// }

int SUM(int a, int b, int c) {
    return a + b + c;
}

int PROD(int a, int b) {
    return a * b;
}

int main() {
    string command;
    cin >> command;

    if (command == "SUM") {
        int a, b, c;
        cin >> a >> b >> c;
        cout << SUM(a, b, c) << endl;
    } else if (command == "PROD") {
        int a, b;
        cin >> a >> b;
        cout << PROD(a, b) << endl;
    }

    return 0;
}