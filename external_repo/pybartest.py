
try:
    import pybar
except SystemError:
    # PyInit_pybar returns null so SystemError is raised, just ignore
    # The actual issue results in an ImportError
    pass