@interface TSCEFunction_SUM : TSCEFunctionNode

+ (unsigned short)functionIndex;
+ (id)evaluateForArgsWithContext:(id)a0 functionSpec:(id)a1 arguments:(const void *)a2;
+ (id)getResultWithVector:(id)a0 context:(id)a1 functionSpec:(id)a2 index:(int)a3;

@end
