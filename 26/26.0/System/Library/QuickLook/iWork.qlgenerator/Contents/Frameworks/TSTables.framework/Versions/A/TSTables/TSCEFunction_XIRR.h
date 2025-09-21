@interface TSCEFunction_XIRR : TSCEFinancialFunctions

+ (unsigned short)functionIndex;
+ (id)evaluateForArgsWithContext:(id)a0 functionSpec:(id)a1 arguments:(const void *)a2;
+ (struct TSUDecimal { struct { unsigned long long x0[2]; } x0; })solveByBisectionWithVector:(id)a0 datesVector:(id)a1 initial:(const struct TSUDecimal { struct { unsigned long long x0[2]; } x0; } *)a2 context:(id)a3 outError:(id *)a4;
+ (struct TSUDecimal { struct { unsigned long long x0[2]; } x0; })solveByNewtonsWithVector:(id)a0 valuesVector:(id)a1 datesVector:(id)a2 initial:(const struct TSUDecimal { struct { unsigned long long x0[2]; } x0; } *)a3 outError:(id *)a4;

@end
