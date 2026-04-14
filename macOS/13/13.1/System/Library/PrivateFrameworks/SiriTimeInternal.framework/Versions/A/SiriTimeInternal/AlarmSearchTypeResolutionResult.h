@interface AlarmSearchTypeResolutionResult : INEnumResolutionResult

+ (id)successWithResolvedAlarmSearchType:(long long)a0;
+ (id)confirmationRequiredWithAlarmSearchTypeToConfirm:(long long)a0;

- (id)initWithJSONDictionary:(id)a0 forIntent:(id)a1;

@end
