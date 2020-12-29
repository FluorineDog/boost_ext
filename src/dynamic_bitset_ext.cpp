#include "dynamic_bitset_ext.hpp"
namespace {
struct PtrWraper {
    explicit PtrWraper(char* ptr): ptr_(ptr) {}
    char*& ptr_;
};
}


