@class HDMirroredWorkoutAnalyticEvent, HKPersistentTimer;

@interface HDMirroredWorkoutAnalyticsCollector : NSObject {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    HKPersistentTimer *_startMirroringTimer;
    HKPersistentTimer *_stopMirroringTimer;
    HKPersistentTimer *_sendDataTimer;
    double _startTime;
}

@property (retain, nonatomic) HDMirroredWorkoutAnalyticEvent *mirroredWorkoutEvent;

- (void).cxx_destruct;
- (id)init;
- (void)sendData;
- (void)sentData;
- (void)startMirroring;
- (void)startedMirroring;
- (void)stopMirroring;
- (void)stoppedMirroring;
- (void)submitMirroringMetricsWithCoordinator:(id)a0 isFirstParty:(BOOL)a1;

@end
