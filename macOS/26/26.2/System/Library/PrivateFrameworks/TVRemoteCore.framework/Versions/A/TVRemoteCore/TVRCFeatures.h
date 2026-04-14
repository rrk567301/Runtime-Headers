@interface TVRCFeatures : NSObject

+ (void)initialize;
+ (BOOL)isSolariumEnabled;
+ (BOOL)isAWDLEnabled;
+ (BOOL)isInternalInstall;
+ (void)_deleteGlobalPrefs;
+ (BOOL)corianderEnabled;
+ (BOOL)isPersistOnLockScreenEnabled;
+ (BOOL)isWakeToRemoteOnLockScreenDisabled;
+ (BOOL)tvPushToTalkEnabled;

@end
