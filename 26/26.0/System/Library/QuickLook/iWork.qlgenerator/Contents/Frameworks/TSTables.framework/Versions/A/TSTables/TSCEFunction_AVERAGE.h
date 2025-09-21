@interface TSCEFunction_AVERAGE : TSCEFunctionNode

+ (unsigned short)functionIndex;
+ (id)averageOfVector:(id)a0 functionSpec:(id)a1 argVector:(id)a2 argumentIndex:(int)a3;
+ (id)averageOfVector:(id)a0 functionSpec:(id)a1 argVector:(id)a2 argumentIndex:(int)a3 criteria:(id)a4 criteriaVectorIndex:(int)a5 ignoreError:(BOOL)a6;
+ (id)evaluateForArgsWithContext:(id)a0 functionSpec:(id)a1 arguments:(const void *)a2;

@end
