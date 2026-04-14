@interface ICSAlternateTimeProposalStatusParameter : ICSPredefinedValue

+ (id)statusParameterFromICSString:(id)a0;
+ (id)statusParameterFromCode:(int)a0;

- (Class)classForCoder;
- (void)_ICSStringWithOptions:(unsigned long long)a0 appendingToString:(id)a1;

@end
