include(FetchContent)
FetchContent_Declare(
    Catch2
    GIT_REPOSITORY https://github.com/catchorg/Catch2.git
    GIT_TAG v3.8.0
)
FetchContent_MakeAvailable(Catch2)

add_executable(unit_tests test_my_vector.cpp)
target_link_libraries(unit_tests
    PRIVATE
    MyVector
    Catch2::Catch2WithMain
)
add_test(NAME unit_tests COMMAND unit_tests)