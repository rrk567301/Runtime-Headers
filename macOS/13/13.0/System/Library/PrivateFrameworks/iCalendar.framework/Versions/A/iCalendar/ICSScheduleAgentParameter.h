@interface ICSScheduleAgentParameter : ICSPredefinedValue

+ (id)scheduleAgentParameterFromICSString:(id)a0;
+ (id)scheduleAgentParameterFromCode:(int)a0;

- (Class)classForCoder;
- (void)_ICSStringWithOptions:(unsigned long long)a0 appendingToString:(id)a1;

@end
