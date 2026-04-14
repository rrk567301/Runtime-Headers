@interface DayOfWeekResolutionResult : INEnumResolutionResult

+ (id)successWithResolvedDayOfWeek:(long long)a0;
+ (id)confirmationRequiredWithDayOfWeekToConfirm:(long long)a0;

- (id)initWithJSONDictionary:(id)a0 forIntent:(id)a1;

@end
