@interface TVRCFeatures : NSObject

+ (BOOL)isInternalInstall;
+ (BOOL)capellaEnabled;
+ (BOOL)corianderEnabled;
+ (BOOL)greymatterEnabled;
+ (BOOL)isPersistOnLockScreenEnabled;
+ (BOOL)isWakeToRemoteOnLockScreenDisabled;
+ (BOOL)legacyDevicesDisabled;
+ (BOOL)testarossaEnabled;
+ (BOOL)tvPushToTalkEnabled;

@end
