@interface AMSRemoteNotification : NSObject

+ (void)handleNotification:(id)a0;
+ (id)_sharedPushHandler;
+ (char)shouldHandleNotification:(id)a0;

@end
