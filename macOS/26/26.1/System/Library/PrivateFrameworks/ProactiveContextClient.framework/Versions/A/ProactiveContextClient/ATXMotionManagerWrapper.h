@class _PASLock, NSMutableDictionary, NSOperationQueue, CMMotionActivityManager, CMMotionActivity;

@interface ATXMotionManagerWrapper : NSObject {
    CMMotionActivityManager *_motionActivityManager;
    NSOperationQueue *_motionActivityQueue;
    NSMutableDictionary *_delegatesMonitoringForMotionType;
    CMMotionActivity *_mostRecentActivity;
    _PASLock *_currentMotion;
}

+ (id)sharedInstance;
+ (BOOL)hasMotionActivity;

- (void)stopUpdatingMotionType:(long long)a0 forDelegate:(id)a1;
- (id)_fetchMotionActivities;
- (id /* block */)_motionActivityHandler;
- (void)startUpdatingMotionType:(long long)a0 forDelegate:(id)a1;
- (id)getCurrentActivity;
- (void)updateCurrentActivity:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
