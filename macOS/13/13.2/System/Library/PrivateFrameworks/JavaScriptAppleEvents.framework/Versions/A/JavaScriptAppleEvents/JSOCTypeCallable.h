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
- (const char *)objCTypes;
- (id)argumentTypeAtIndex:(long long)a0;
- (BOOL)variadic;
- (BOOL)nullTerminated;
- (id)initWithReturnValueType:(id)a0 argumentTypes:(id)a1 variadic:(BOOL)a2 nullTerminated:(BOOL)a3;

@end
