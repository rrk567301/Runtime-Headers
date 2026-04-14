@interface MTIntentAlarmResolutionResult : INObjectResolutionResult

+ (BOOL)supportsSecureCoding;
+ (id)successWithResolvedAlarm:(id)a0;
+ (id)disambiguationWithAlarmsToDisambiguate:(id)a0;
+ (id)confirmationRequiredWithAlarmToConfirm:(id)a0;

@end
