@interface CMPhotoProcessMonitor : NSObject

+ (BOOL)isDeferredMediad;
+ (BOOL)isForegroundApp;
+ (BOOL)isManagedByRunningBoard;
+ (id)getShared;
+ (BOOL)isCameraCaptured;

- (void)_takeOSTransactionForContext:(void *)a0;
- (id)init;
- (int)releaseAssertionForContext:(void *)a0;
- (void)dealloc;
- (void)waitForPendingNotifications;
- (void)_takeRBSAssertionForContext:(void *)a0 until:(unsigned long long)a1 maxLength:(unsigned long long)a2;
- (int)takeAssertionUntilTime:(unsigned long long)a0 forContext:(void *)a1;
- (int)unregisterBackgroundNotificationForContext:(void *)a0;
- (int)registerBackgroundNotificationHandlerForContext:(void *)a0 handler:(id /* block */)a1;

@end
