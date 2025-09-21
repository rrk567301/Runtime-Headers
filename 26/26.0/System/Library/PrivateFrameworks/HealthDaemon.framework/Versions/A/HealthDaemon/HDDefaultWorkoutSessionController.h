@class HDBiomeInterface, HDProfile, HKWorkoutDataSourceConfiguration, NSObject, HDSessionAssertionGroup, HKWorkoutActivity, HDDaemonTransaction, NSDictionary, HDAssertion, HDWorkoutUtilities, NSString, HDWorkoutSessionConfiguration, NSSet, HDWorkoutEventsManager, _TtC12HealthDaemon13HDSwimTracker;
@protocol HDWorkoutSessionStateController, OS_dispatch_queue, OS_dispatch_source;

@interface HDDefaultWorkoutSessionController : NSObject <HDWorkoutEventCollectorDelegate, HDProcessStateObserver, HDDataObserver, HDQuantitySeriesObserver, HDDatabaseProtectedDataObserver, HDAppLauncherClient, HDWorkoutSessionController> {
    HDProfile *_profile;
    id<HDWorkoutSessionStateController> _sessionStateController;
    NSObject<OS_dispatch_queue> *_queue;
    HDWorkoutSessionConfiguration *_sessionConfiguration;
    HDSessionAssertionGroup *_assertionGroup;
    HDWorkoutEventsManager *_eventsManager;
    long long _sessionServerState;
    HDBiomeInterface *_bmInterface;
    HKWorkoutActivity *_currentActivity;
    NSSet *_collectedTypes;
    _TtC12HealthDaemon13HDSwimTracker *_swimTracker;
    HDDaemonTransaction *_daemonTransaction;
    HDAssertion *_databaseAssertion;
    NSSet *_currentGeneratedTypes;
    long long _currentMoveMode;
    HKWorkoutDataSourceConfiguration *_dataSourceConfiguration;
    NSDictionary *_relaunchPayloadOptions;
    HDWorkoutUtilities *_workoutUtilities;
    id /* block */ _hkTestTransitionCompletionHandler;
    double _generateFinalDataWaitInterval;
    HDAssertion *_liveActivityAssertion;
    NSObject<OS_dispatch_source> *_liveActivityAssertionTimeoutSource;
    BOOL _hasLiveActivity;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)recoveryIdentifier;
+ (BOOL)supportsWorkoutConfiguration:(id)a0 clientApplicationIdentifier:(id)a1;
+ (void)willFinishSessionWithRecoveryData:(id)a0 profile:(id)a1;

- (void)samplesAdded:(id)a0 anchor:(id)a1;
- (void)database:(id)a0 protectedDataDidBecomeAvailable:(BOOL)a1;
- (void)dealloc;
- (void)samplesJournaled:(id)a0 type:(id)a1;
- (void)unitTest_setCMWorkoutManager:(id)a0;
- (void)processDidEnterForeground:(id)a0;
- (id)databaseAssertion;
- (void)processDidEnterBackground:(id)a0;
- (void).cxx_destruct;
- (id)currentGeneratedTypes;
- (BOOL)enableAutomaticDetectionForActivityConfigurations:(id)a0;
- (void)profile:(id)a0 didDiscardSeriesOfType:(id)a1;
- (void)_lowPowerModeStateChanged:(id)a0;
- (void)beginNewActivity:(id)a0;
- (id)dataSourceConfiguration;
- (void)endCurrentActivity:(id)a0;
- (void)fakeActivityDetection:(id)a0 workoutActivity:(id)a1;
- (void)hktest_setStateTransitionCompletionHandler:(id /* block */)a0;
- (id)initWithProfile:(id)a0 sessionConfiguration:(id)a1 sessionStateController:(id)a2 recoveryState:(id)a3;
- (id)launchPayloadOptions;
- (void)receivedWorkoutEvent:(id)a0;
- (void)receivedWorkoutEvent:(id)a0 forWorkoutActivity:(id)a1;
- (id /* block */)transactionalQuantityInsertHandlerForProfile:(id)a0 journaled:(BOOL)a1 count:(long long)a2;
- (id)unitTest_databaseAssertion;
- (void)unitTest_setSwimTracker:(id)a0;
- (void)unitTest_suggestActivity:(id)a0;
- (void)workoutSessionServer:(id)a0 accumulatorDidChange:(id)a1;
- (void)workoutSessionServer:(id)a0 didChangeConfiguration:(id)a1;
- (void)workoutSessionServer:(id)a0 didTransitionFromState:(long long)a1 toState:(long long)a2 date:(id)a3;

@end
