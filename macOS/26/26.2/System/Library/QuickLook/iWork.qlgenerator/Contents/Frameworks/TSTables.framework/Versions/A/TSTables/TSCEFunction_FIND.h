@interface TSCEFunction_FIND : TSCEFunctionNode

+ (unsigned short)functionIndex;
+ (id)evaluateFindWithOptions:(id)a0 functionSpec:(id)a1 arguments:(const void *)a2 findOptions:(unsigned long long)a3;
+ (id)evaluateForArgsWithContext:(id)a0 functionSpec:(id)a1 arguments:(const void *)a2;

@end
