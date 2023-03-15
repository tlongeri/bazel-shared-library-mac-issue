package(
    default_visibility = [
        "//visibility:public",
    ],
)

cc_library(
    name = "foo",
    srcs = ["foo.cpp"],
    hdrs = ["foo.h"]
)

cc_shared_library(
    name = "foolib",
    roots = [":foo"]
)


cc_library(
    name = "pybar_cclib",
    srcs = ["pybar.cpp"],
    hdrs = ["pybar.h"],
    deps = [":foo"]
)

cc_shared_library(
    name = "pybar",
    roots = [":pybar_cclib"],
    shared_lib_name = "pybar.so",
    dynamic_deps = [":foolib"]
)

py_test(
    name = "pybartest",
    srcs = [":pybartest.py"],
    data = [":pybar"],
)
