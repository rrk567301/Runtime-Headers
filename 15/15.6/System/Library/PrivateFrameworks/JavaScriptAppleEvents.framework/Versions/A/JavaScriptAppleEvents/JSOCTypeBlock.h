@interface JSOCTypeBlock : JSOCTypeCallable

- (const char *)objCType;
- (long long)firstVisibleArgument;
- (id)initWithReturnValueType:(id)a0 argumentTypes:(id)a1 variadic:(char)a2 nullTerminated:(char)a3;

@end
