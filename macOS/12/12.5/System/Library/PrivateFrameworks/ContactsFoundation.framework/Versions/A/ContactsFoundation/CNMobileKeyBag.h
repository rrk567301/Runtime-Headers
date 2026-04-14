@interface CNMobileKeyBag : NSObject

+ (const char *)firstUnlockNotificationID;
+ (BOOL)isDeviceUnlockedSinceBoot;
+ (BOOL)isDevicePasscodeProtected;

@end
