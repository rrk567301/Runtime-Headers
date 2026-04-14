@interface TSCEFunction_ISEVEN : TSCEFunctionNode

+ (unsigned short)functionIndex;
+ (id)evaluateForArgsWithContext:(id)a0 functionSpec:(id)a1 arguments:(const void *)a2;
+ (BOOL)isEven:(id)a0 value:(const struct TSUDecimal { struct { unsigned long long x0[2]; } x0; } *)a1 warningType:(long long)a2;

@end
