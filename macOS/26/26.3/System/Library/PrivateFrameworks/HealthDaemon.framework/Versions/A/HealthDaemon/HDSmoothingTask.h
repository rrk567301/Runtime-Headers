@class NSDate, NSArray, HDDaemonTransaction, NSError, NSMutableArray, HKWorkout;

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
    NSArray *_workoutIntervals;
    long long _currentActivitySmoothingIndex;
    NSArray *_routeSmoothingActivities;
    NSError *_smoothingError;
    NSMutableArray *_smoothedRoutes;
    NSDate *_smoothingTaskCreationDate;
    NSDate *_smoothingTaskStartDate;
    NSError *_previousSmoothingError;
}

- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)_initWithWorkout:(id)a0 routes:(id)a1 analyticsSubmissionCoordinator:(id)a2;

@end
