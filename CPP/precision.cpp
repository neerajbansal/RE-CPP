#include <iostream>
#include <boost/multiprecision/cpp_dec_float.hpp>

// Define a high-precision floating-point type with 50 decimal places.
using boost::multiprecision::cpp_dec_float_50;

int main() {
    // Create high-precision numbers
    cpp_dec_float_50 num1("123.4567890123456789012345678901234567890123456789012345");
    cpp_dec_float_50 num2("0.0000000000000000000000000000000000000001234567890123456789012345");

    // Perform operations
    cpp_dec_float_50 result = num1 + num2;

    // Print with 50 decimal places
    std::cout << std::fixed << result << std::endl;
    return 0;
}
