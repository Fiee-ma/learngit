#include <iostream>
#include <stdio.h>
#include <string.h>
#include <vector>

class A{
    public:
        void test();
};
int main() {
    int length = strlen("\naaa");
    std::cout << "length=" << length << std::endl;
    std::vector<int> vec;
    A a;
    a.test();
}
