#include <iostream>
#include <set>

using namespace std;

// Function to check if sets A and B are disjoint
bool areDisjoint(const set<int>& A, const set<int>& B) {
    for (int element : A) {
        if (B.find(element) != B.end()) {
            return false; // Found a common element, sets are not disjoint
        }
    }
    return true; // No common elements found, sets are disjoint
}

int main() {
    // Create two sets A and B
    set<int> A = {1, 2, 3, 4};
    set<int> B = {5, 6, 7};

    // Check if sets A and B are disjoint
    if (areDisjoint(A, B)) {
        cout << "Sets A and B are disjoint." << endl;
    } else {
        cout << "Sets A and B are not disjoint." << endl;
    }

    return 0;
}

