#include "dynamic_bitset_ext.hpp"
namespace {
struct PtrWraper {
    explicit PtrWraper(char* ptr): ptr_(ptr) {}
    char*& ptr_;
};
}

template <typename B, typename A>
void to_block_range<B, A, PtrWraper>(const dynamic_bitset<B, A>& b,
                           PtrWraper result) {
    assert(b)
}