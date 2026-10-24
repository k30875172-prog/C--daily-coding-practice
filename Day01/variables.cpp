#include <iostream>
using namespace std;

int main() {
    int age = 18;
    cout << age;

    return 0;
}

Same code but see diff in output:

#include <iostream>
using namespace std;

int main() {
    int age = 18;
    cout << "age";

    return 0;
}
