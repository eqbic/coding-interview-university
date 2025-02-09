#include <catch2/catch_test_macros.hpp>
#include "MyVector/my_vector.h"

TEST_CASE("test setup")
{
    cu::MyVector vec = cu::MyVector();
    REQUIRE(vec.add(2, 5) == 9);
}