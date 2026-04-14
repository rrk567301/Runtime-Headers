@interface MapsSuggestionsSiri : NSObject

+ (BOOL)isAllowedOnLockScreen;
+ (id)isAllowedOnLockScreenCondition;
+ (BOOL)isEnabled;
+ (BOOL)isAllowedOnHomeScreen;
+ (id)isAllowedOnHomeScreenCondition;
+ (BOOL)canLearnFromBundleID:(id)a0;
+ (id)isEnabledCondition;

@end
