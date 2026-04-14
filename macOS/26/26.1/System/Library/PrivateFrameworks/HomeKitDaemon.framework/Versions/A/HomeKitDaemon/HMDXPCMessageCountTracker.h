@class HMFTimer, NSMutableDictionary, NSDictionary, NSDate, NSString;
@protocol HMMLogEventSubmitting;

@interface HMDXPCMessageCountTracker : NSObject <HMFLogging, HMFTimerDelegate> {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
}

@property (class, readonly) HMDXPCMessageCountTracker *sharedTracker;

@property (readonly) id<HMMLogEventSubmitting> logEventSubmitter;
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

- (void)configure;
- (void)timerDidFire:(id)a0;
- (id)sampleCountersAndReset:(BOOL)a0;
- (void)_resetCounters;
- (id)countersOfType:(long long)a0;
- (id)initWithLogEventSubmitter:(id)a0 submissionTimer:(id)a1;
- (void)incrementCounterOfType:(long long)a0 clientIdentifier:(id)a1 messageName:(id)a2;
- (void).cxx_destruct;
- (id)mutableCountersOfType:(long long)a0;
- (void)submitCounters;
- (id)init;

@end
