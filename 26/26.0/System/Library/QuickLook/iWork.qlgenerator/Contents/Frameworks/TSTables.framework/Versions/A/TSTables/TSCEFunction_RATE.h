@interface TSCEFunction_RATE : TSCEFinancialFunctions

+ (unsigned short)functionIndex;
+ (id)evaluateForArgsWithContext:(id)a0 functionSpec:(id)a1 arguments:(const void *)a2;
+ (struct TSUDecimal { struct { unsigned long long x0[2]; } x0; })solveByNewtonsWithNumPeriods:(const struct TSUDecimal { struct { unsigned long long x0[2]; } x0; } *)a0 pmt:(const struct TSUDecimal { struct { unsigned long long x0[2]; } x0; } *)a1 pv:(const struct TSUDecimal { struct { unsigned long long x0[2]; } x0; } *)a2 fv:(const struct TSUDecimal { struct { unsigned long long x0[2]; } x0; } *)a3 dueBeginning:(BOOL)a4 initial:(const struct TSUDecimal { struct { unsigned long long x0[2]; } x0; } *)a5 context:(id)a6;

@end
