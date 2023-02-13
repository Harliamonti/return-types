#include <iostream>
#include <typeinfo>
#include <cmath>

template <typename T, typename T2>
auto add(T lhs, T2 rhs)
{
    return lhs + rhs;
}

template <typename T>
auto foo(T number)
{
    if (std::trunc(number) == number)
        return static_cast<int> (number);
}

int main()
{
    int a{ 5 };
    double b{ 5.5 };
    auto c = add(b, b);

    std::cout << c << std::endl;
    std::cout << typeid(c).name() << std::endl;

    auto d{ foo(c)} ;

    std::cout << d << std::endl;
    std::cout << typeid(d).name() << std::endl;

}