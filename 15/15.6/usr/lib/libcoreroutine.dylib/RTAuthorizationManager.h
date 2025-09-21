@class RTPlatform, RTUserSessionMonitor, RTInvocationDispatcher;

@interface RTAuthorizationManager : RTService

@property (retain, nonatomic) RTInvocationDispatcher *dispatcher;
@property (nonatomic, getter=isSupported) char supported;
@property (nonatomic, getter=isEnabled) char enabled;
@property (nonatomic, getter=isReady) char ready;
@property (retain, nonatomic) RTPlatform *platform;
@property (retain) RTUserSessionMonitor *userSessionMonitor;

+ (id)allocWithZone:(struct _NSZone { } *)a0;
+ (char)supportsNotificationName:(id)a0;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)_registerForNotifications;
- (void)_setup;
- (void)_unregisterForNotifications;
- (void)fetchRoutineEnabledWithHandler:(id /* block */)a0;
- (id)_getMetrics:(char)a0;
- (void)_onDailyMetricsNotification:(id)a0;
- (void)_shutdownWithHandler:(id /* block */)a0;
- (void)fetchRoutineSupportedWithHandler:(id /* block */)a0;
- (void)handleAppResetChangeNotification;
- (id)initWithPlatform:(id)a0 userSessionMonitor:(id)a1;
- (void)internalAddObserver:(id)a0 name:(id)a1;
- (void)internalRemoveObserver:(id)a0 name:(id)a1;
- (char)isCoreRoutineLocationClientEnabled;
- (char)isLocationServicesEnabled;
- (void)onDailyMetricsNotification:(id)a0;
- (void)onUserSessionChangeNotification:(id)a0;
- (void)setRoutineEnabled:(char)a0 withHandler:(id /* block */)a1;
- (void)setup;
- (char)shouldPersistLocations;
- (void)updateRoutineEnabled:(char)a0;

@end
