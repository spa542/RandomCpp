#include"Test.h"

Test::Test() : value{0} {
    
}

Test::Test(int val) : value{val} {

}

void Test::set_value(int val) {
    value = val;
}

void Test::print() {
    std::cout << value << std::endl;
}
