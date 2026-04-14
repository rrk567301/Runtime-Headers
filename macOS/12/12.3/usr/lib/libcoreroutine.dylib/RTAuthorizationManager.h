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

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)_setup;
- (void)_unregisterForNotifications;
- (void)_registerForNotifications;
- (BOOL)isLocationServicesEnabled;
- (id)initWithPlatform:(id)a0 userSessionMonitor:(id)a1;
- (void)onUserSessionChangeNotification:(id)a0;
- (BOOL)isCoreRoutineLocationClientEnabled;
- (void)setup;
- (void)onDailyMetricsNotification:(id)a0;
- (id)_getMetrics:(BOOL)a0;
- (void)_onDailyMetricsNotification:(id)a0;
- (void)_shutdownWithHandler:(id /* block */)a0;
- (void)fetchRoutineEnabledWithHandler:(id /* block */)a0;
- (void)fetchRoutineSupportedWithHandler:(id /* block */)a0;
- (BOOL)shouldPersistLocations;
- (void)setRoutineEnabled:(BOOL)a0 withHandler:(id /* block */)a1;
- (void)updateRoutineEnabled:(BOOL)a0;
- (void)handleAppResetChangeNotification;
- (void)internalAddObserver:(id)a0 name:(id)a1;
- (void)internalRemoveObserver:(id)a0 name:(id)a1;

@end
