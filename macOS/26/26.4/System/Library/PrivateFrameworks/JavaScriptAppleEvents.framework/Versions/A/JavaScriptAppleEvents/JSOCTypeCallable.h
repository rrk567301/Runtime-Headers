@class JSOCType, NSArray;

@interface JSOCTypeCallable : JSOCTypePointer {
    JSOCType *_returnValueType;
    BOOL _variadic;
    BOOL _nullTerminated;
}

@property (readonly) JSOCType *returnValueType;
@property (readonly) NSArray *argumentTypes;

- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (long long)numberOfArguments;
- (id)argumentTypeAtIndex:(long long)a0;
- (id)initWithReturnValueType:(id)a0 argumentTypes:(id)a1 variadic:(BOOL)a2 nullTerminated:(BOOL)a3;
- (BOOL)nullTerminated;
- (const char *)objCTypes;
- (BOOL)variadic;

@end
