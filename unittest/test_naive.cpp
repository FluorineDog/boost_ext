#include "gtest/gtest.h"
#include "dynamic_bitset_ext.hpp"

TEST(Naive, read) {
    ASSERT_EQ(42, 42);
    int N = 1000;
    const auto bitset = [N] {
        boost::dynamic_bitset<> bitset(N);
        for (int i = 0; i < N; ++i) {
            bitset.set(i, i % 3);
        };
        return bitset;
    }();
    auto ptr = boost_ext::get_data(bitset);
    for(int i = 0; i < N; ++i) {
        auto bit = (ptr[i / 8] >> (i % 8)) & 0x1;
        ASSERT_EQ(bit, i % 3 != 0);
    }
}

TEST(Naive, write) {
    ASSERT_EQ(42, 42);
    int N = 1000;
    boost::dynamic_bitset<> bitset(N);
    auto ptr = boost_ext::get_data(bitset);
    for(int i = 0; i < N; ++i) {
        ptr[i / 8] |= (char)(1 << (i % 8));
    }

    for(int i = 0; i < N; ++i) {
        bool bit = bitset[i];
        ASSERT_EQ(bit, i % 3 != 0);
    }
}