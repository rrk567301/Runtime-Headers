@interface MapsSuggestionsSiri : NSObject

+ (BOOL)isEnabled;
+ (BOOL)isAllowedOnHomeScreen;
+ (id)isAllowedOnHomeScreenCondition;
+ (BOOL)isAllowedOnLockScreen;
+ (id)isAllowedOnLockScreenCondition;
+ (id)isEnabledCondition;

@end
