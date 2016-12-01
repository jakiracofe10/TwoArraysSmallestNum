#include <iostream>
#include <set>
#include <algorithm>

using namespace std;

int smallestNum(int *firstA, int *secondA, int n1, int n2) {
    set<int> second;
    for (int i=0; i<n2; i++) {
        second.insert(secondA[i]);
    }
    sort(firstA,firstA+n1);
    for (int i=0; i<n1; i++) {
        if (second.find(firstA[i]) == second.end()) {
            return firstA[i];
        }
    }
    return -1;

}

int main() {
    int firstA[] = {0,1,2,3,4,5};
    int secondA[] = {0,6,2,1,10};
    int firstSize = sizeof(firstA)/ sizeof(firstA[0]);
    int secondSize = sizeof(secondA)/ sizeof(secondA[0]);
    int result = smallestNum(firstA,secondA,firstSize,secondSize);
    cout << result;
}