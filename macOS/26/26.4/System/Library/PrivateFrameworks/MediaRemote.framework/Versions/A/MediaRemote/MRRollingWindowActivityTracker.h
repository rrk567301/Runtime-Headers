@class NSObject, NSString, MSVTimer, NSMutableArray, NSDate;
@protocol OS_dispatch_queue;

@interface MRRollingWindowActivityTracker : NSObject <MRActivityTracker> {
    BOOL _running;
}

@property (copy, nonatomic) id /* block */ handler;
@property (retain, nonatomic) NSMutableArray *enabledPeriods;
@property (retain, nonatomic) MSVTimer *thresholdTimer;
@property (retain, nonatomic) NSDate *enabledSince;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (readonly, nonatomic) NSString *activityName;
@property (readonly, nonatomic) double windowDuration;
@property (readonly, nonatomic) double maxAllowedTime;
@property (readonly, nonatomic) BOOL repeats;
@property (readonly, nonatomic, getter=isRunning) BOOL running;
@property (readonly, nonatomic) double timeSpentInWindow;
@property (readonly, nonatomic) double timeRemainingUntilThreshold;
@property (retain, nonatomic) id mostRecentContext;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)dealloc;
- (void)_onQueue_scheduleThresholdTimer;
- (void)_onQueue_stopActivityTracking;
- (void)_onQueue_thresholdReached;
- (double)_onQueue_timeRemainingUntilThreshold;
- (double)_onQueue_timeSpentInWindow;
- (id)initWithActivityName:(id)a0 maxAllowedTime:(double)a1 windowDuration:(double)a2 repeats:(BOOL)a3 handler:(id /* block */)a4;
- (void)startActivityTracking;
- (void)startActivityTrackingWithContext:(id)a0;
- (void)stopActivityTracking;

@end
