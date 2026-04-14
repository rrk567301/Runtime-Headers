@interface MapsSuggestionsSiri : NSObject

+ (BOOL)isEnabled;
+ (id)isEnabledCondition;
+ (id)isAllowedOnHomeScreenCondition;
+ (id)isAllowedOnLockScreenCondition;
+ (BOOL)isAllowedOnHomeScreen;
+ (BOOL)isAllowedOnLockScreen;

@end
