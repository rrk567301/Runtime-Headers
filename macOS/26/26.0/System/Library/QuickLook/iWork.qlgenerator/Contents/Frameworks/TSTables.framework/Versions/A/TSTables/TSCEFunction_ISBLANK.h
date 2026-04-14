@interface TSCEFunction_ISBLANK : TSCEFunctionNode

+ (unsigned short)functionIndex;
+ (id)evaluateForArgsWithContext:(id)a0 functionSpec:(id)a1 arguments:(const void *)a2;
+ (BOOL)valueIsBlank:(id)a0 context:(id)a1;

@end
