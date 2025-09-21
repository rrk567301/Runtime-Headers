@interface TSCEFunction_MAXIFS : TSCEFunctionNode

+ (unsigned short)functionIndex;
+ (id)evaluateForArgsWithContext:(id)a0 functionSpec:(id)a1 arguments:(const void *)a2;
+ (id)extremumIfs:(id)a0 functionSpec:(id)a1 maxVector:(id)a2 criteria:(id)a3 isMax:(BOOL)a4;

@end
