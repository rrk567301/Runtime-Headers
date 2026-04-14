@interface TSCEFunction_CONCATENATE : TSCEFunctionNode

+ (unsigned short)functionIndex;
+ (id)evaluateForArgsWithContext:(id)a0 functionSpec:(id)a1 arguments:(const void *)a2;
+ (id)valueForArgumentRepeatingSingletonMode:(id)a0 functionSpec:(id)a1 arguments:(const void *)a2 argSpec:(id)a3 outError:(id *)a4;

@end
