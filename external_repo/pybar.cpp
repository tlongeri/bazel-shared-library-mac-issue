#include "pybar.h"

#include "foo.h"

extern "C" {
void* PyInit_pybar() {
    // Just return null and catch the error in Python so we don't need to include the Python
    // headers and create a module
    return nullptr;
}
}