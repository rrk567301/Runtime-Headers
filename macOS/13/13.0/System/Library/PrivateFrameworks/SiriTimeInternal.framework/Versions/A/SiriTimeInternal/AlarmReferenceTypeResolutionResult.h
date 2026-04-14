@interface AlarmReferenceTypeResolutionResult : INEnumResolutionResult

+ (id)successWithResolvedAlarmReferenceType:(long long)a0;
+ (id)confirmationRequiredWithAlarmReferenceTypeToConfirm:(long long)a0;

- (id)initWithJSONDictionary:(id)a0 forIntent:(id)a1;

@end
