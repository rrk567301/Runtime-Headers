@class JSOCType, NSArray;

@interface JSOCTypeCallable : JSOCTypePointer {
    JSOCType *_returnValueType;
    char _variadic;
    char _nullTerminated;
}

@property (readonly) JSOCType *returnValueType;
@property (readonly) NSArray *argumentTypes;

- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (long long)numberOfArguments;
- (id)argumentTypeAtIndex:(long long)a0;
- (id)initWithReturnValueType:(id)a0 argumentTypes:(id)a1 variadic:(char)a2 nullTerminated:(char)a3;
- (char)nullTerminated;
- (const char *)objCTypes;
- (char)variadic;

@end
