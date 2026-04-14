@interface VUIApplicationNotificationManager : NSObject

+ (id)sharedInstance;

- (void)dealloc;
- (void)_applicationWillResignActiveNotification:(id)a0;
- (void)_applicationDidBecomeActiveNotification:(id)a0;
- (void)_applicationDidEnterBackgroundNotification:(id)a0;
- (void)_applicationWillEnterForegroundNotification:(id)a0;
- (void)listenForApplicationNotifications;
- (void)_applicationWillTerminateNotification:(id)a0;

@end
