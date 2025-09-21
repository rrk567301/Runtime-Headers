@interface MTIntentRepeatDayResolutionResult : INObjectResolutionResult

+ (char)supportsSecureCoding;
+ (id)confirmationRequiredWithRepeatDayToConfirm:(id)a0;
+ (id)disambiguationWithRepeatDaysToDisambiguate:(id)a0;
+ (id)successWithResolvedRepeatDay:(id)a0;

@end
