find_package(GTest REQUIRED)
add_executable(test_naive
        test_naive.cpp
        )
target_link_libraries(test_naive 
    bitset_ext 
    GTest::gtest 
    GTest::gtest_main
    )
