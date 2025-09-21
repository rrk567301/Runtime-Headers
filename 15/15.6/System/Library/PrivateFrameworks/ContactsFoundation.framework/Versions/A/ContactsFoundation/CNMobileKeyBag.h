@interface CNMobileKeyBag : NSObject

+ (const char *)firstUnlockNotificationID;
+ (char)isDevicePasscodeProtected;
+ (char)isDeviceUnlockedSinceBoot;

@end
