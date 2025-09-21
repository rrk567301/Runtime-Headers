@interface ATXNewsTodayWidgetPlacementPolicyProvider : NSObject

+ (id)_newsSupportedCountries;
+ (id)_parsecEditorialLocales;

- (char)isTodayWidgetPermittedForLocale:(id)a0;

@end
