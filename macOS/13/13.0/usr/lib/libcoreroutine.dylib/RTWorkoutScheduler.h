@class RTXPCActivityManager, RTTimerManager, RTWorkoutRouteManager, RTPlatform, RTLocationManager, RTDefaultsManager, RTBatteryManager, RTDataProtectionManager, RTHealthKitManager;

@interface RTWorkoutScheduler : RTService

@property (retain, nonatomic) RTBatteryManager *batteryManager;
@property (retain, nonatomic) RTXPCActivityManager *xpcActivityManager;
@property (retain, nonatomic) RTDataProtectionManager *dataProtectionManager;
@property (retain, nonatomic) RTWorkoutRouteManager *workoutRouteManager;
@property (retain, nonatomic) RTHealthKitManager *healthKitManager;
@property (retain, nonatomic) RTLocationManager *locationManager;
@property (retain, nonatomic) RTTimerManager *timerManager;
@property (retain, nonatomic) RTDefaultsManager *defaultsManager;
@property (retain, nonatomic) RTPlatform *platform;

+ (id)taskStateToString:(unsigned long long)a0;

- (void).cxx_destruct;
- (void)_setup;
- (void)_shutdownWithHandler:(id /* block */)a0;
- (id)initWithBatteryManager:(id)a0 dataProtectionManager:(id)a1 workoutRouteManager:(id)a2 healthKitManager:(id)a3 locationManager:(id)a4 defaultsManager:(id)a5 platform:(id)a6 xpcActivityManager:(id)a7;
- (id)initWithBatteryManager:(id)a0 dataProtectionManager:(id)a1 workoutRouteManager:(id)a2 healthKitManager:(id)a3 locationManager:(id)a4 defaultsManager:(id)a5 timerManager:(id)a6 platform:(id)a7 xpcActivityManager:(id)a8;

@end
