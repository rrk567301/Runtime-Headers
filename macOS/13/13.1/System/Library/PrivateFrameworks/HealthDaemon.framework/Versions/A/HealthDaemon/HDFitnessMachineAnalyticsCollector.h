@class HKPersistentTimer, HDGymKitWorkoutAnalyticEvent;

@interface HDFitnessMachineAnalyticsCollector : NSObject {
    HKPersistentTimer *_authorizationTimer;
}

@property (retain, nonatomic) HDGymKitWorkoutAnalyticEvent *gymKitWorkoutEvent;

- (id)init;
- (void).cxx_destruct;
- (void)userBeganPairing;
- (void)userIsAuthorized;
- (void)setFitnessMachineType:(unsigned long long)a0 manufacturer:(id)a1;
- (void)workoutFailedWithError:(id)a0;
- (void)workoutEndedSubmitMetricsWith:(id)a0;

@end
