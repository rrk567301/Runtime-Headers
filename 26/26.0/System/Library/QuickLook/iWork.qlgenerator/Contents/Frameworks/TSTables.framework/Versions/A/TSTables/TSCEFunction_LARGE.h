@interface TSCEFunction_LARGE : TSCEFunctionNode

+ (unsigned short)functionIndex;
+ (id)evaluateForArgsWithContext:(id)a0 functionSpec:(id)a1 arguments:(const void *)a2;
+ (id)evaluateForArgsWithContext:(id)a0 functionSpec:(id)a1 arguments:(const void *)a2 isLarge:(BOOL)a3 ignoreError:(BOOL)a4 ignoreDuplicate:(BOOL)a5;

@end
