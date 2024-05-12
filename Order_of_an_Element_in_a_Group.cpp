
#include <iostream>// Function to calculate the order of an element in a group
int calculateOrder(int a, int groupSize) {
    int k = 1;
    int result = a;

    while (result != 1) {
        result = (result * a) % groupSize;
        k++;

        if (k > groupSize) {
            // Element does not have a finite order in this group
            return -1;
        }
    }

    return k;
}

int main() {
    int element, groupSize;
    std::cout << "Enter the element and the size of the group: ";
    std::cin >> element >> groupSize;

    int order = calculateOrder(element, groupSize);

    if (order == -1) {
        std::cout << "The element does not have a finite order in this group." << std::endl;
    } else {
        std::cout << "The order of element " << element << " in the group of size " << groupSize << " is " << order << std::endl;
    }

    return 0;
}

