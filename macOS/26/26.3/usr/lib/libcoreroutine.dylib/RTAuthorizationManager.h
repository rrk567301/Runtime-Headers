@class RTPlatform, RTUserSessionMonitor, RTInvocationDispatcher;

@interface RTAuthorizationManager : RTService

@property (retain, nonatomic) RTInvocationDispatcher *dispatcher;
@property (nonatomic, getter=isSupported) BOOL supported;
@property (nonatomic, getter=isEnabled) BOOL enabled;
@property (nonatomic, getter=isReady) BOOL ready;
@property (retain, nonatomic) RTPlatform *platform;
@property (retain) RTUserSessionMonitor *userSessionMonitor;

+ (id)allocWithZone:(struct _NSZone { } *)a0;
+ (BOOL)supportsNotificationName:(id)a0;

- (void)internalRemoveObserver:(id)a0 name:(id)a1;
- (void)internalAddObserver:(id)a0 name:(id)a1;
- (void)_unregisterForNotifications;
- (void)_registerForNotifications;
- (void)setRoutineEnabled:(BOOL)a0 withHandler:(id /* block */)a1;
- (void)_shutdownWithHandler:(id /* block */)a0;
- (void)onDailyMetricsNotification:(id)a0;
- (id)init;
- (void)setup;
- (BOOL)shouldPersistLocations;
- (void)onUserSessionChangeNotification:(id)a0;
- (void)_setup;
- (void).cxx_destruct;
- (void)fetchRoutineEnabledWithHandler:(id /* block */)a0;
- (void)dealloc;
- (void)_onDailyMetricsNotification:(id)a0;
- (id)_getMetrics:(BOOL)a0;
- (void)fetchRoutineSupportedWithHandler:(id /* block */)a0;
- (void)handleAppResetChangeNotification;
- (id)initWithPlatform:(id)a0 userSessionMonitor:(id)a1;
- (BOOL)isCoreRoutineLocationClientEnabled;
- (BOOL)isLocationServicesEnabled;
- (void)updateRoutineEnabled:(BOOL)a0;

@end
