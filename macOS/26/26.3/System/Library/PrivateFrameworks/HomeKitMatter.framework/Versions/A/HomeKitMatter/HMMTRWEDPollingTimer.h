@class HMFTimer, HMMTRAccessoryServerBrowser, NSString, NSObject;
@protocol OS_dispatch_queue;

@interface HMMTRWEDPollingTimer : HMFObject <HMFTimerDelegate>

@property (weak, nonatomic) HMMTRAccessoryServerBrowser *browser;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (retain, nonatomic) HMFTimer *pollingTimer;
@property (nonatomic) unsigned long long attemptCount;
@property (nonatomic) BOOL pollingActive;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;

- (void)timerDidFire:(id)a0;
- (id)logIdentifier;
- (void).cxx_destruct;
- (void)dealloc;
- (void)startPolling;
- (void)stopPolling;
- (void)_stopPolling;
- (BOOL)_scheduleNextPolling;
- (id)initWithBrowser:(id)a0 queue:(id)a1;

@end
