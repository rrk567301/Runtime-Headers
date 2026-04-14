@interface TSCEFunction_op_Subtract : TSCEFunctionNode

+ (unsigned short)functionIndex;
+ (id)computeSubtraction:(id)a0 functionSpec:(id)a1 left:(id)a2 leftArgumentIndex:(int)a3 right:(id)a4 rightArgumentIndex:(int)a5;
+ (id)evaluateForArgsWithContext:(id)a0 functionSpec:(id)a1 arguments:(const void *)a2;

@end
