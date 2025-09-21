@interface TSCEFunction_MEDIAN : TSCEFunctionNode

+ (unsigned short)functionIndex;
+ (id)evaluateForArgsWithContext:(id)a0 functionSpec:(id)a1 arguments:(const void *)a2;
+ (id)evaluateVector:(id)a0 context:(id)a1 functionSpec:(id)a2;

@end
