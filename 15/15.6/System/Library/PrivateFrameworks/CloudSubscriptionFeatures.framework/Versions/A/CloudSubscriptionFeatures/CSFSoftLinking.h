@interface CSFSoftLinking : NSObject

+ (char)isDeviceEnrolledWithDeKOTA:(id *)a0;
+ (void)registerForLoggedOutPushNotifications;
+ (void)unregisterForLoggedOutPushNotifications;

@end
