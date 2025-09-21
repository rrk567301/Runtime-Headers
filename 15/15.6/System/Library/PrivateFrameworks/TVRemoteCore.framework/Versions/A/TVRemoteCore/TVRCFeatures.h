@interface TVRCFeatures : NSObject

+ (char)isInternalInstall;
+ (char)isAWDLEnabled;
+ (char)capellaEnabled;
+ (char)corianderEnabled;
+ (char)greymatterEnabled;
+ (char)isPersistOnLockScreenEnabled;
+ (char)isWakeToRemoteOnLockScreenDisabled;
+ (char)legacyDevicesDisabled;
+ (char)tvPushToTalkEnabled;

@end
