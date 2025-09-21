@interface TSCEFunction_INDIRECT : TSCEFunctionNode

+ (unsigned short)functionIndex;
+ (id)evaluateForArgsWithContext:(id)a0 functionSpec:(id)a1 arguments:(const void *)a2;
+ (id)indirectValueWithContext:(id)a0 functionSpec:(id)a1 arguments:(const void *)a2;

@end
