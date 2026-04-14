@interface TVRCFeatures : NSObject

+ (BOOL)isInternalInstall;
+ (void)initialize;
+ (BOOL)isSolariumEnabled;
+ (BOOL)isAWDLEnabled;
+ (void)_deleteGlobalPrefs;
+ (BOOL)corianderEnabled;
+ (BOOL)isPersistOnLockScreenEnabled;
+ (BOOL)isWakeToRemoteOnLockScreenDisabled;
+ (BOOL)tvPushToTalkEnabled;

@end
