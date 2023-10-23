#include <iostream>

#include "template.h"

using std::cout;
using std::endl;

int main(int argc, const char** argv) {
    Template temp("Hello world");
    cout << temp.text() << endl;
    return 0;
}