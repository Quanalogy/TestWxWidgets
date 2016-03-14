#include <iostream>
#include "testWxwidgets.h"

using namespace std;

int main() {
    cout << "Hello, World!" << endl;
    testWxwidgets testWindow;
    testWindow.OnInit(); // Got problem on this line
    return 0;
}