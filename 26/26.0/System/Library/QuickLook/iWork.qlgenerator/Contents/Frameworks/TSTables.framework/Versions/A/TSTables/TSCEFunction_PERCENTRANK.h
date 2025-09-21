@interface TSCEFunction_PERCENTRANK : TSCEFunctionNode

+ (unsigned short)functionIndex;
+ (id)computePercentRank:(id)a0 functionSpec:(id)a1 vector:(id)a2 xValue:(id)a3 isExclusive:(BOOL)a4 outError:(id *)a5;
+ (id)evaluateForArgsWithContext:(id)a0 functionSpec:(id)a1 arguments:(const void *)a2;

@end
