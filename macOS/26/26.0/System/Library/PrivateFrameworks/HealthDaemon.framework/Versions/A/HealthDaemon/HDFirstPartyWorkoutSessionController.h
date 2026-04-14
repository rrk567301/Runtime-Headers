@class NSString, HDDefaultWorkoutSessionController, HDAssertion;
@protocol HDWorkoutDataAccumulator, HDWorkoutSessionStateController;

@interface HDFirstPartyWorkoutSessionController : NSObject <HDWorkoutSessionController, HDWorkoutSessionStateController> {
    id<HDWorkoutSessionStateController> _sessionStateController;
    HDDefaultWorkoutSessionController *_defaultSessionController;
    long long _currentState;
    HDAssertion *_databaseAssertion;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) id<HDWorkoutDataAccumulator> workoutDataAccumulator;

+ (id)recoveryIdentifier;
+ (BOOL)supportsWorkoutConfiguration:(id)a0 clientApplicationIdentifier:(id)a1;
+ (void)willFinishSessionWithRecoveryData:(id)a0 profile:(id)a1;

- (BOOL)prepareWithError:(id *)a0;
- (void)endHeartRateRecovery;
- (void)unitTest_setCMWorkoutManager:(id)a0;
- (void)finish;
- (id)databaseAssertion;
- (void)generateError:(id)a0;
- (BOOL)resumeWithError:(id *)a0;
- (void).cxx_destruct;
- (BOOL)endWithError:(id *)a0;
- (BOOL)pauseWithError:(id *)a0;
- (id)currentGeneratedTypes;
- (BOOL)enableAutomaticDetectionForActivityConfigurations:(id)a0;
- (void)autoPauseWithDate:(id)a0;
- (void)autoResumeWithDate:(id)a0;
- (void)beginNewActivity:(id)a0;
- (id)dataSourceConfiguration;
- (void)didBeginNewActivity:(id)a0;
- (void)didDetectActivityChange:(id)a0;
- (void)didEndCurrentActivity:(id)a0;
- (void)endCurrentActivity:(id)a0;
- (void)fakeActivityDetection:(id)a0 workoutActivity:(id)a1;
- (void)finishAggregationWithDate:(id)a0;
- (void)generateConfigurationUpdate:(id)a0;
- (void)generateEvent:(id)a0;
- (void)generateMetadata:(id)a0;
- (void)hktest_setStateTransitionCompletionHandler:(id /* block */)a0;
- (id)initWithProfile:(id)a0 sessionConfiguration:(id)a1 sessionStateController:(id)a2 recoveryState:(id)a3;
- (void)notifyClientsOfGeneratedTypesUpdate:(id)a0 configuration:(id)a1 didUpdateActivity:(BOOL)a2 earliestSampleDate:(id)a3;
- (BOOL)startActivityWithDate:(id)a0 error:(id *)a1;
- (BOOL)stopActivityWithDate:(id)a0 error:(id *)a1;
- (BOOL)storeSessionControllerState:(id)a0 forRecoveryIdentifier:(id)a1 error:(id *)a2;
- (id)unitTest_databaseAssertion;
- (void)unitTest_setSwimTracker:(id)a0;
- (void)workoutSessionServer:(id)a0 accumulatorDidChange:(id)a1;
- (void)workoutSessionServer:(id)a0 didChangeConfiguration:(id)a1;
- (void)workoutSessionServer:(id)a0 didTransitionFromState:(long long)a1 toState:(long long)a2 date:(id)a3;

@end
