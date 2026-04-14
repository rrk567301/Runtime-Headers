@interface TSCEFunction_OFFSET : TSCEFunctionNode

+ (unsigned short)functionIndex;
+ (id)evaluateForArgsWithContext:(id)a0 functionSpec:(id)a1 arguments:(const void *)a2;
+ (id)offsetReferenceValueWithContext:(id)a0 functionSpec:(id)a1 arguments:(const void *)a2 outError:(id *)a3;

@end
