#include <iostream>

void insaneError() {}

int main()
{
    std::cout << "Test 1 built without fail." << std::endl;
    insaneError(42);
    return 0;
}

EXTREME;
