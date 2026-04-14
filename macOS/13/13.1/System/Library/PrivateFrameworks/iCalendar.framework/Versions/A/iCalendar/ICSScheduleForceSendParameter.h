@interface ICSScheduleForceSendParameter : ICSPredefinedValue

+ (id)scheduleForceSendParameterFromICSString:(id)a0;
+ (id)scheduleForceSendParameterFromCode:(int)a0;

- (Class)classForCoder;
- (void)_ICSStringWithOptions:(unsigned long long)a0 appendingToString:(id)a1;

@end
