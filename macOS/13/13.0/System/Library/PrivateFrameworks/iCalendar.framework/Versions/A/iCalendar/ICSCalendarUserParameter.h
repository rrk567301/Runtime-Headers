@interface ICSCalendarUserParameter : ICSPredefinedValue

+ (id)calendarUserTypeParameterFromICSString:(id)a0;
+ (id)calendarUserTypeParameterFromCode:(int)a0;

- (Class)classForCoder;
- (void)_ICSStringWithOptions:(unsigned long long)a0 appendingToString:(id)a1;

@end
