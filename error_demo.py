from cffi import FFI

ffi = FFI()

ffi.set_source(f"error_arm", None)

with open("error.h") as f:
    ffi.cdef(f.read())

ffi.compile()