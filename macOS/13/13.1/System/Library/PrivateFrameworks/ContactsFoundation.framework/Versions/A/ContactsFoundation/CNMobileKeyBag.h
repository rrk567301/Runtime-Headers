@interface CNMobileKeyBag : NSObject

+ (BOOL)isDeviceUnlockedSinceBoot;
+ (const char *)firstUnlockNotificationID;
+ (BOOL)isDevicePasscodeProtected;

@end
