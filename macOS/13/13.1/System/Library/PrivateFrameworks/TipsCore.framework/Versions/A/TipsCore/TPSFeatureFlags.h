@interface TPSFeatureFlags : NSObject

+ (BOOL)allowNotificationsPFLPlugin;
+ (BOOL)allowNotificationsPFLPluginTesting;
+ (BOOL)allowModelControlledNotifications;
+ (BOOL)allowTipsSearch;
+ (BOOL)allowReplayButton;
+ (BOOL)allowSavedTips;

@end
