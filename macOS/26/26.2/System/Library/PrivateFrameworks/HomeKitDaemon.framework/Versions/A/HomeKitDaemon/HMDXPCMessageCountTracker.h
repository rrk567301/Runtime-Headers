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
- (void)_resetCounters;
- (void)timerDidFire:(id)a0;
- (void)incrementCounterOfType:(long long)a0 clientIdentifier:(id)a1 messageName:(id)a2;
- (id)countersOfType:(long long)a0;
- (void).cxx_destruct;
- (void)submitCounters;
- (id)initWithLogEventSubmitter:(id)a0 submissionTimer:(id)a1;
- (id)mutableCountersOfType:(long long)a0;
- (id)init;
- (id)sampleCountersAndReset:(BOOL)a0;

@end
