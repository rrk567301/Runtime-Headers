@class JSOCType, NSArray;

@interface JSOCTypeCallable : JSOCTypePointer {
    JSOCType *_returnValueType;
    BOOL _variadic;
    BOOL _nullTerminated;
}

@property (readonly) JSOCType *returnValueType;
@property (readonly) NSArray *argumentTypes;

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void).cxx_destruct;
- (long long)numberOfArguments;
- (id)argumentTypeAtIndex:(long long)a0;
- (const char *)objCTypes;
- (id)initWithReturnValueType:(id)a0 argumentTypes:(id)a1 variadic:(BOOL)a2 nullTerminated:(BOOL)a3;
- (BOOL)variadic;
- (BOOL)nullTerminated;

@end
