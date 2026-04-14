@interface ICSMethodValue : ICSPredefinedValue

+ (id)methodValueFromICSString:(id)a0;
+ (id)methodParameterFromCode:(int)a0;

- (Class)classForCoder;
- (void)_ICSStringWithOptions:(unsigned long long)a0 appendingToString:(id)a1;

@end
