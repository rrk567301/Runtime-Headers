@interface UpdateAlarmOperationResolutionResult : INEnumResolutionResult

+ (id)successWithResolvedUpdateAlarmOperation:(long long)a0;
+ (id)confirmationRequiredWithUpdateAlarmOperationToConfirm:(long long)a0;

- (id)initWithJSONDictionary:(id)a0 forIntent:(id)a1;

@end
