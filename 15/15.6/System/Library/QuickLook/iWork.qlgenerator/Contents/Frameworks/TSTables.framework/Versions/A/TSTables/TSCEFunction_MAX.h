@interface TSCEFunction_MAX : TSCEFunctionNode

+ (id)evaluateForArgsWithContext:(id)a0 functionSpec:(id)a1 arguments:(const void *)a2;
+ (id)extremum:(id)a0 functionSpec:(id)a1 arg:(id)a2 index:(int)a3 isMax:(char)a4 isA:(char)a5;
+ (unsigned short)functionIndex;

@end
