@interface MapsSuggestionsSiri : NSObject

+ (BOOL)canLearnFromBundleID:(id)a0;
+ (BOOL)isAllowedOnHomeScreen;
+ (BOOL)isAllowedOnLockScreen;
+ (id)isEnabledCondition;
+ (BOOL)isEnabled;
+ (id)isAllowedOnLockScreenCondition;
+ (id)isAllowedOnHomeScreenCondition;

@end
