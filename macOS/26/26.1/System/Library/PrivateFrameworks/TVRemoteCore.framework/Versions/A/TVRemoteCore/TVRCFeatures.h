@interface TVRCFeatures : NSObject

+ (BOOL)isAWDLEnabled;
+ (void)initialize;
+ (BOOL)isInternalInstall;
+ (BOOL)isSolariumEnabled;
+ (void)_deleteGlobalPrefs;
+ (BOOL)corianderEnabled;
+ (BOOL)isPersistOnLockScreenEnabled;
+ (BOOL)isWakeToRemoteOnLockScreenDisabled;
+ (BOOL)tvPushToTalkEnabled;

@end
