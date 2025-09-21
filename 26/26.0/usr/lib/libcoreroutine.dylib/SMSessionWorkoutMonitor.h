@class NSMutableDictionary, SMSessionConfiguration, NSDate, NSObject, RTMotionActivityManager, SMCMNoMovementMonitor, RTDefaultsManager, SMCMOdometer, RTPlatform, RTTimerManager, SMSessionStore, NSString, RTHealthKitManager, NSNumber, SMSessionMetricManager, RTDistanceCalculator, RTLocationManager;
@protocol OS_dispatch_queue, SMTriggerManagerProtocol;

@interface SMSessionWorkoutMonitor : NSObject <SMTriggerProtocol>

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (retain, nonatomic) RTDefaultsManager *defaultsManager;
@property (retain, nonatomic) RTDistanceCalculator *distanceCalculator;
@property (retain, nonatomic) RTHealthKitManager *healthKitManager;
@property (retain, nonatomic) RTLocationManager *locationManager;
@property (retain, nonatomic) RTPlatform *platform;
@property (retain, nonatomic) RTTimerManager *timerManager;
@property (retain, nonatomic) SMSessionMetricManager *sessionMetricManager;
@property (retain, nonatomic) SMSessionStore *sessionStore;
@property (retain, nonatomic) SMSessionConfiguration *sessionConfiguration;
@property (retain, nonatomic) NSDate *endWorkoutReminderDate;
@property (retain, nonatomic) NSDate *latestWorkoutManualPauseDate;
@property (retain, nonatomic) NSDate *latestWorkoutAutoPauseDate;
@property (retain, nonatomic) NSMutableDictionary *timerIdentifierToTimers;
@property (nonatomic) BOOL isWorkoutPaused;
@property (nonatomic) BOOL endWorkoutReminderSettingEnabled;
@property (nonatomic) double endWorkoutReminderTimeoutSettingEnabled;
@property (nonatomic) double endWorkoutReminderTimeoutSettingDisabled;
@property (nonatomic) double workoutManualPauseTimeout;
@property (nonatomic) double workoutAutoPauseTimeout;
@property (retain, nonatomic) NSNumber *outdoorPedAutoPauseDistance;
@property (nonatomic) double outdoorPedAutoPauseDistanceThreshold;
@property (retain, nonatomic) SMCMNoMovementMonitor *noMovementMonitor;
@property (retain, nonatomic) RTMotionActivityManager *motionActivityManager;
@property (retain, nonatomic) SMCMOdometer *cmOdometer;
@property (weak, nonatomic) id<SMTriggerManagerProtocol> sessionMonitorDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (unsigned long long)convertNoMovementDetectionTypeToTriggerCategory:(long long)a0;

- (void)setup;
- (void)_removeObservers;
- (void)_setup;
- (void)_addObservers;
- (void).cxx_destruct;
- (void)_onWorkoutTriggerControlUpdate:(unsigned long long)a0;
- (BOOL)_shouldPromptNoMovementTrigger:(id)a0;
- (void)_bootstrap;
- (void)_initializeTimerWithIdentifier:(id)a0 fireAfterDelay:(double)a1;
- (void)_modifyMonitoringWithConfiguration:(id)a0 handler:(id /* block */)a1;
- (void)_onTimerExpiryForTimerIdentifier:(id)a0;
- (void)_removeTimers;
- (BOOL)_shouldPromptEndWorkoutReminderTriggerWithReason:(unsigned long long)a0;
- (void)_startMonitoringWithConfiguration:(id)a0 handler:(id /* block */)a1;
- (void)_stopMonitoringWithHandler:(id /* block */)a0;
- (void)_tearDownTimerWithIdentifier:(id)a0;
- (double)_workoutEndReminderTimeout;
- (void)checkIfCurrentWorkoutIsOutdoorPedestrianWithHandler:(id /* block */)a0;
- (id)initWithQueue:(id)a0 defaultsManager:(id)a1 distanceCalculator:(id)a2 locationManager:(id)a3 healthKitManager:(id)a4 platform:(id)a5 sessionMetricManager:(id)a6 sessionStore:(id)a7 timerManager:(id)a8 noMovementMonitor:(id)a9 motionActivityManager:(id)a10;
- (void)initializeTimersOnStartMonitoring:(id)a0;
- (void)modifyMonitoringWithConfiguration:(id)a0 handler:(id /* block */)a1;
- (void)onHealthKitNotification:(id)a0;
- (void)onNoMovementMonitorNotification:(id)a0;
- (void)onWorkoutTriggerControlUpdate:(unsigned long long)a0;
- (void)startListeningForXPCEvents;
- (void)startMonitoringWithConfiguration:(id)a0 handler:(id /* block */)a1;
- (void)stopListeningForXPCEvents;
- (void)stopMonitoringWithHandler:(id /* block */)a0;
- (void)takeOdometerDistanceSampleWithHandler:(id /* block */)a0;

@end
