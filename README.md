In main_repo, run

```
bazel test --experimental_cc_shared_library :pybartest --test_output=all
```

This works in Bazel 6.1.1 but fails in 5.3.0 with the error:

```
Traceback (most recent call last):
  File "/private/var/tmp/_bazel_tlongeri/c860065df19f08e53bf54cafbd678b11/sandbox/darwin-sandbox/8/execroot/__main__/bazel-out/darwin_arm64-fastbuild/bin/pybartest.runfiles/external_repo/pybartest.py", line 3, in <module>
    import pybar
ImportError: dlopen(/private/var/tmp/_bazel_tlongeri/c860065df19f08e53bf54cafbd678b11/sandbox/darwin-sandbox/8/execroot/__main__/bazel-out/darwin_arm64-fastbuild/bin/pybartest.runfiles/external_repo/pybar.so, 0x0002): Library not loaded: bazel-out/darwin_arm64-fastbuild/bin/external/external_repo/libfoolib.so
  Referenced from: <A3201B27-5653-32E7-A0C1-B64F3DFFF772> /private/var/tmp/_bazel_tlongeri/c860065df19f08e53bf54cafbd678b11/execroot/__main__/bazel-out/darwin_arm64-fastbuild/bin/external/external_repo/pybar.so
  Reason: tried: 'bazel-out/darwin_arm64-fastbuild/bin/external/external_repo/libfoolib.so' (no such file), '/System/Volumes/Preboot/Cryptexes/OSbazel-out/darwin_arm64-fastbuild/bin/external/external_repo/libfoolib.so' (no such file), 'bazel-out/darwin_arm64-fastbuild/bin/external/external_repo/libfoolib.so' (no such file), '/usr/local/lib/libfoolib.so' (no such file), '/usr/lib/libfoolib.so' (no such file, not in dyld cache)
```

Note that running the same command in external_repo (it has an identical test) passes.