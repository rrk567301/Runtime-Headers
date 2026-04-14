@interface CMPhotoProcessMonitor : NSObject

+ (BOOL)isForegroundApp;
+ (id)getShared;

- (void)dealloc;
- (id)init;
- (int)unregisterBackgroundNotificationForContext:(void *)a0;
- (int)releaseAssertionForContext:(void *)a0;
- (void)waitForPendingNotifications;
- (int)takeAssertionUntilTime:(unsigned long long)a0 forContext:(void *)a1;
- (int)registerBackgroundNotificationHandlerForContext:(void *)a0 handler:(id /* block */)a1;
- (void)_takeRBSAssertionForContext:(void *)a0 until:(unsigned long long)a1 maxLength:(unsigned long long)a2;
- (void)_takeOSTransactionForContext:(void *)a0;

@end
