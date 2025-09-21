@interface TSCEFunction_LARGE : TSCEFunctionNode

+ (id)evaluateForArgsWithContext:(id)a0 functionSpec:(id)a1 arguments:(const void *)a2;
+ (id)evaluateForArgsWithContext:(id)a0 functionSpec:(id)a1 arguments:(const void *)a2 isLarge:(char)a3 ignoreError:(char)a4 ignoreDuplicate:(char)a5;
+ (unsigned short)functionIndex;

@end
