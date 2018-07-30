#include "Lab.h"
#include <vector>

using namespace std;

int main(int argc, char *argv[]) {
    unsigned int counter = 0;
    counter++;
    vector<int> nums;
    nums.push_back(counter++);
    cout << "counter is " << counter << endl;
    cout << "argument is " << argv[1] << endl;
}
