@interface CMPhotoProcessMonitor : NSObject

+ (BOOL)isManagedByRunningBoard;
+ (BOOL)isDeferredMediad;
+ (id)getShared;
+ (BOOL)isCameraCaptured;
+ (BOOL)isForegroundApp;

- (void)dealloc;
- (void)_takeOSTransactionForContext:(void *)a0;
- (id)init;
- (int)takeAssertionUntilTime:(unsigned long long)a0 forContext:(void *)a1;
- (void)waitForPendingNotifications;
- (int)releaseAssertionForContext:(void *)a0;
- (int)registerBackgroundNotificationHandlerForContext:(void *)a0 handler:(id /* block */)a1;
- (int)unregisterBackgroundNotificationForContext:(void *)a0;
- (void)_takeRBSAssertionForContext:(void *)a0 until:(unsigned long long)a1 maxLength:(unsigned long long)a2;

@end
