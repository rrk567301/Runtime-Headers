@class HMFTimer, NSMutableDictionary, NSDictionary, NSDate, NSString;

@interface HMDXPCMessageCountTracker : NSObject <HMFLogging, HMFTimerDelegate> {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
}

@property (class, readonly) HMDXPCMessageCountTracker *sharedTracker;

@property (readonly) NSMutableDictionary *acceptedRequests;
@property (readonly) NSMutableDictionary *erroredRequests;
@property (readonly) NSMutableDictionary *sentNotifications;
@property (readonly) HMFTimer *submissionTimer;
@property (copy) NSDate *lastResetDate;
@property (readonly, copy) NSDictionary *stateDump;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;

- (id)init;
- (void).cxx_destruct;
- (void)configure;
- (void)_resetCounters;
- (void)timerDidFire:(id)a0;
- (id)countersOfType:(long long)a0;
- (id)_countersOfType:(long long)a0;
- (void)incrementCounterOfType:(long long)a0 identifier:(id)a1;
- (id)sampleCountersAndReset:(BOOL)a0;
- (void)submitCounters;

@end
