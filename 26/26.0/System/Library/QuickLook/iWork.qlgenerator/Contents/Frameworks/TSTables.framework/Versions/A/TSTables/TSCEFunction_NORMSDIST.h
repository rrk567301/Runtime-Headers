@interface TSCEFunction_NORMSDIST : TSCEFunctionNode

+ (unsigned short)functionIndex;
+ (id)evaluateForArgsWithContext:(id)a0 functionSpec:(id)a1 arguments:(const void *)a2;
+ (double)probabilityWithZ:(double)a0;

@end
