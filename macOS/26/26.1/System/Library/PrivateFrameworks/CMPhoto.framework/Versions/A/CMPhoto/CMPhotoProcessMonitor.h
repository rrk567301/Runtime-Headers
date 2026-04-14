@interface CMPhotoProcessMonitor : NSObject

+ (BOOL)isDeferredMediad;
+ (BOOL)isManagedByRunningBoard;
+ (BOOL)isCameraCaptured;
+ (BOOL)isForegroundApp;
+ (id)getShared;

- (int)unregisterBackgroundNotificationForContext:(void *)a0;
- (void)_takeRBSAssertionForContext:(void *)a0 until:(unsigned long long)a1 maxLength:(unsigned long long)a2;
- (void)waitForPendingNotifications;
- (int)releaseAssertionForContext:(void *)a0;
- (int)takeAssertionUntilTime:(unsigned long long)a0 forContext:(void *)a1;
- (int)registerBackgroundNotificationHandlerForContext:(void *)a0 handler:(id /* block */)a1;
- (void)_takeOSTransactionForContext:(void *)a0;
- (void)dealloc;
- (id)init;

@end
