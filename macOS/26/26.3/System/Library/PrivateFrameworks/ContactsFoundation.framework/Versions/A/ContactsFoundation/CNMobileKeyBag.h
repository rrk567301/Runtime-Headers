@interface CNMobileKeyBag : NSObject

+ (BOOL)isDevicePasscodeProtected;
+ (const char *)firstUnlockNotificationID;
+ (BOOL)isDeviceUnlockedSinceBoot;

@end
