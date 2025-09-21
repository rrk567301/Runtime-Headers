@interface TSCEFunction_MATCH : TSCEFunctionNode

+ (unsigned short)functionIndex;
+ (long long)compareValue:(id)a0 functionSpec:(id)a1 left:(id)a2 right:(id)a3 outError:(id *)a4;
+ (id)evaluateForArgsWithContext:(id)a0 functionSpec:(id)a1 arguments:(const void *)a2;

@end
