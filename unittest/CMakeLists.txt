find_package(GTest)
add_executable(test_naive
        test_naive.cpp
        )
target_link_libraries(test_naive bitset_ext gtest gtest_main)