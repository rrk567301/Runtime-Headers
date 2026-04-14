@interface TVRCFeatures : NSObject

+ (BOOL)isInternalInstall;
+ (BOOL)isAWDLEnabled;
+ (BOOL)capellaEnabled;
+ (BOOL)corianderEnabled;
+ (BOOL)greymatterEnabled;
+ (BOOL)isPersistOnLockScreenEnabled;
+ (BOOL)isWakeToRemoteOnLockScreenDisabled;
+ (BOOL)legacyDevicesDisabled;
+ (BOOL)testarossaEnabled;
+ (BOOL)tvPushToTalkEnabled;

@end
