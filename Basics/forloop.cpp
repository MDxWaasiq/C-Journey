#include <iostream>
using namespace std;

int main() {

    int count = 0;

    int n;
    cout << "enter a starting num: ";
    cin >> n;

    int m;
    cout << "enter ending num: ";
    cin >> m;

    for (int n = 1; n <= m; n++) {
        count+=n;
    }
    cout << count << endl;

    return 0;
}
