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

- (void)updateCurrentActivity:(id)a0;
- (id)_fetchMotionActivities;
- (id /* block */)_motionActivityHandler;
- (id)init;
- (void)stopUpdatingMotionType:(long long)a0 forDelegate:(id)a1;
- (void).cxx_destruct;
- (id)getCurrentActivity;
- (void)startUpdatingMotionType:(long long)a0 forDelegate:(id)a1;

@end
