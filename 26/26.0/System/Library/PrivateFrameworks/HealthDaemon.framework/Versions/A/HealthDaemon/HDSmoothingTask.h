@class NSMutableArray, NSArray, HDDaemonTransaction, NSDate, NSError, HKWorkout;

@interface HDSmoothingTask : NSObject {
    BOOL _extendedMode;
    BOOL _isTimedOut;
    HKWorkout *_workout;
    NSArray *_routes;
    unsigned long long _totalLocations;
    id /* block */ _completionHandler;
    HDDaemonTransaction *_transaction;
    unsigned long long _smoothingAttempts;
    double _smoothingTaskTimeout;
    NSDate *_smoothingTaskCreationDate;
    NSDate *_smoothingTaskStartDate;
    NSArray *_workoutIntervals;
    long long _currentActivitySmoothingIndex;
    NSArray *_routeSmoothingActivities;
    NSError *_smoothingError;
    NSMutableArray *_smoothedRoutes;
}

- (id)description;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)_initWithWorkout:(id)a0 routes:(id)a1 analyticsSubmissionCoordinator:(id)a2;

@end
