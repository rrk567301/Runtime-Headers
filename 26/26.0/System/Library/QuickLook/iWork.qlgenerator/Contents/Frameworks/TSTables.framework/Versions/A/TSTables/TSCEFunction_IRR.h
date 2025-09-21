@interface TSCEFunction_IRR : TSCEFinancialFunctions

+ (unsigned short)functionIndex;
+ (id)evaluateForArgsWithContext:(id)a0 functionSpec:(id)a1 arguments:(const void *)a2;
+ (struct TSUDecimal { struct { unsigned long long x0[2]; } x0; })solveByNewtonsWithVector:(id)a0 vector:(id)a1 initial:(const struct TSUDecimal { struct { unsigned long long x0[2]; } x0; } *)a2 outError:(id *)a3;

@end
