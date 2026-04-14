@interface TVRCFeatures : NSObject

+ (void)initialize;
+ (BOOL)isInternalInstall;
+ (BOOL)isAWDLEnabled;
+ (BOOL)isSolariumEnabled;
+ (void)_deleteGlobalPrefs;
+ (BOOL)corianderEnabled;
+ (BOOL)isPersistOnLockScreenEnabled;
+ (BOOL)isWakeToRemoteOnLockScreenDisabled;
+ (BOOL)tvPushToTalkEnabled;

@end
