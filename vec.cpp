#include <iostream>
#include <vector>

using namespace std;

int main() {
    vector<int> vec{10, 20, 30, 40};

    cout << "Vector elements: ";
    for (int i : vec) {
        cout << i << " ";
    }

    cout << "\nSize: " << vec.size() << ", Capacity: " << vec.capacity();

    vec.push_back(50);

    cout << "\nAfter adding element 50: ";
    for (int i : vec) {
        cout << i << " ";
    }

    vec.clear();

    cout << "\nAfter clearing, Size: " << vec.size() 
         << ", Capacity: " << vec.capacity() << endl;

    return 0;
}
