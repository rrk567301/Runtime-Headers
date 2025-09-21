@interface MapsSuggestionsSiri : NSObject

+ (char)isEnabled;
+ (char)canLearnFromBundleID:(id)a0;
+ (char)isAllowedOnHomeScreen;
+ (id)isAllowedOnHomeScreenCondition;
+ (char)isAllowedOnLockScreen;
+ (id)isAllowedOnLockScreenCondition;
+ (id)isEnabledCondition;

@end
