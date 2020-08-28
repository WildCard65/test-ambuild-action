#include <iostream>

void my_god_function(int my_value)
{
    std::cout << "WE GOT A WARNING!" << std::endl;
}

static int my_ufunc() { return 52; }

int main()
{
    std::cout << "Test 3 built without fail!" << '\n';
    std::cout << "This program should've generated warnings." << '\n';

    my_god_function(72);

    return 0;
}
