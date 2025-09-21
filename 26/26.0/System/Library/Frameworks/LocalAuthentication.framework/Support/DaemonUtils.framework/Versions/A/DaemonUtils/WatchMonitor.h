@class NSHashTable, NSDate, NSObject, SFApproveDiscovery;
@protocol OS_dispatch_queue;

@interface WatchMonitor : NSObject {
    NSHashTable *_observers;
    unsigned long long _restartAttempt;
    unsigned long long _invalidationCount;
    unsigned long long _failedActivationCount;
}

@property (retain) SFApproveDiscovery *approveDiscovery;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (retain, nonatomic) NSDate *lastActivation;
@property (readonly, nonatomic) BOOL deviceAvailable;

+ (id)sharedInstance;

- (void)unregisterObserver:(id)a0;
- (void)start;
- (void)registerObserver:(id)a0;
- (id)init;
- (void)_notifyObservers;
- (void)_handleActivationError:(id)a0;
- (void).cxx_destruct;
- (id)_approveDiscovery;
- (void)_dispatchRestartAttempt:(unsigned long long)a0 restartDelay:(double)a1;
- (double)_reactivationDelayAfterFailures:(unsigned long long)a0;
- (void)_restartAfterFailedActivation;
- (void)_restartAfterInvalidation;
- (void)_restartWithMinReactivationDelay:(double)a0;

@end
