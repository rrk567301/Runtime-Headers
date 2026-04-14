@interface ICSScheduleStatusParameter : ICSPredefinedValue

+ (id)scheduleStatusParameterFromICSString:(id)a0;
+ (id)scheduleStatusParameterFromCode:(int)a0;

- (Class)classForCoder;
- (void)_ICSStringWithOptions:(unsigned long long)a0 appendingToString:(id)a1;

@end
