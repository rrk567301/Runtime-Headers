@interface TVRCFeatures : NSObject

+ (BOOL)isSolariumEnabled;
+ (BOOL)isAWDLEnabled;
+ (BOOL)isInternalInstall;
+ (BOOL)capellaEnabled;
+ (BOOL)corianderEnabled;
+ (BOOL)greymatterEnabled;
+ (BOOL)isPersistOnLockScreenEnabled;
+ (BOOL)isWakeToRemoteOnLockScreenDisabled;
+ (BOOL)legacyDevicesDisabled;
+ (BOOL)tvPushToTalkEnabled;

@end
