@interface CMPhotoProcessMonitor : NSObject

+ (BOOL)isDeferredMediad;
+ (BOOL)isManagedByRunningBoard;
+ (BOOL)isCameraCaptured;
+ (BOOL)isForegroundApp;
+ (id)getShared;

- (void)waitForPendingNotifications;
- (int)takeAssertionUntilTime:(unsigned long long)a0 forContext:(void *)a1;
- (int)registerBackgroundNotificationHandlerForContext:(void *)a0 handler:(id /* block */)a1;
- (int)unregisterBackgroundNotificationForContext:(void *)a0;
- (void)_takeOSTransactionForContext:(void *)a0;
- (int)releaseAssertionForContext:(void *)a0;
- (id)init;
- (void)_takeRBSAssertionForContext:(void *)a0 until:(unsigned long long)a1 maxLength:(unsigned long long)a2;
- (void)dealloc;

@end
