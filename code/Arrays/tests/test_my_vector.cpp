#include <catch2/catch_test_macros.hpp>
#include "MyVector/my_vector.h"

TEST_CASE("vector can be sized and resized")
{
    SECTION("calling the default constructor")
    {
        cu::Vector vector = cu::Vector();
        REQUIRE(vector.capacity() == 0);
        REQUIRE(vector.size() == 0);
        REQUIRE(vector.is_empty());
    }

    SECTION("calling the constructor with a given capacity")
    {
        cu::Vector vector = cu::Vector(10);
        REQUIRE(vector.capacity() == 10);
        REQUIRE(vector.size() == 0);
        REQUIRE(vector.is_empty());
    }

    SECTION("adding an element without exceeding the capacity increases size but not capacity")
    {
        cu::Vector vector = cu::Vector(5);
        REQUIRE(vector.capacity() == 5);
        REQUIRE(vector.size() == 0);
        REQUIRE(vector.is_empty());
        vector.push(2);
        REQUIRE(vector.capacity() == 5);
        REQUIRE(vector.size() == 1);
        REQUIRE(!vector.is_empty());
    }

    // SECTION("add element beyond capacity doubles capacity")
    // {
    //     cu::Vector vector = cu::Vector(2);
    //     REQUIRE(vector.capacity() == 2);
    //     REQUIRE(vector.size() == 0);
    //     vector.push(1);
    //     vector.push(2);
    //     REQUIRE(vector.capacity() == 2);
    //     REQUIRE(vector.size() == 2);
    //     vector.push(3);
    //     REQUIRE(vector.capacity() == 4);
    //     REQUIRE(vector.size() == 3);
    // }
}