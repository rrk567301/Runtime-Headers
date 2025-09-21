@interface TSCEFunction_GEOMEAN : TSCEFunctionNode

+ (unsigned short)functionIndex;
+ (id)evaluateForArgsWithContext:(id)a0 functionSpec:(id)a1 arguments:(const void *)a2;
+ (id)geometricMeanOfVector:(id)a0 context:(id)a1 functionSpec:(id)a2 argumentIndex:(int)a3 criteria:(id)a4;

@end
