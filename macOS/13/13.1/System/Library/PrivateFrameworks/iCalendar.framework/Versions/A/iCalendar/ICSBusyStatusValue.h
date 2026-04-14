@interface ICSBusyStatusValue : ICSPredefinedValue

+ (id)busyStatusValueFromICSString:(id)a0;
+ (id)busyStatusTypeFromCode:(int)a0;

- (Class)classForCoder;
- (void)_ICSStringWithOptions:(unsigned long long)a0 appendingToString:(id)a1;

@end
