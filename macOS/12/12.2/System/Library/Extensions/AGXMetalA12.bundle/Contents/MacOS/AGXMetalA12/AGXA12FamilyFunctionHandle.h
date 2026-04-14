@class AGXA12FamilyDynamicLibrary;

@interface AGXA12FamilyFunctionHandle : _MTLFunctionHandle {
    struct FunctionHandleNop { } _impl;
    AGXA12FamilyDynamicLibrary *_binary_dylib;
}

- (void)dealloc;
- (id).cxx_construct;
- (id)initWithFunctionType:(unsigned long long)a0 name:(id)a1 device:(id)a2 handle:(unsigned long long)a3 dylib:(id)a4;

@end
