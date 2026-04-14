@class HMFTimer, NSString, NSSet, NSHashTable, HMDStatusChannelRecord, HMFNetMonitor, NSObject;
@protocol HMMLogEventSubmitting, HMDSKPresence, OS_dispatch_queue, HMDSKPresenceProvider, HMDTimerProvider;

@interface HMDStatusChannel : NSObject <HMFLogging, HMFTimerDelegate, HMDSKPresenceDelegate, HMFNetMonitorDelegate> {
    NSObject<OS_dispatch_queue> *_queue;
}

@property (readonly, nonatomic) id<HMDSKPresence> presenceChannel;
@property (readonly, copy, nonatomic) NSString *channelName;
@property (readonly, copy, nonatomic) NSString *channelPrefix;
@property (readonly, copy, nonatomic) NSString *channelIdentifier;
@property (readonly, nonatomic) NSHashTable *statusDelegates;
@property (readonly, nonatomic) HMFNetMonitor *netMonitor;
@property (readonly, nonatomic) id<HMDTimerProvider> timerProvider;
@property (readonly, nonatomic) id<HMDSKPresenceProvider> presenceProvider;
@property (retain) HMFTimer *subscribeRetryTimer;
@property (retain) HMFTimer *publishRetryTimer;
@property (readonly, nonatomic) id<HMMLogEventSubmitting> logEventSubmitter;
@property (nonatomic) BOOL subscribed;
@property (readonly) NSSet *currentRecords;
@property (readonly, nonatomic) HMDStatusChannelRecord *localRecord;
@property (readonly, nonatomic) BOOL isConnected;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;

- (void).cxx_destruct;
- (void)start;
- (void)addDelegate:(id)a0;
- (id)logIdentifier;
- (void)networkMonitorIsReachable:(id)a0;
- (void)networkMonitorIsUnreachable:(id)a0;
- (void)timerDidFire:(id)a0;
- (void)_publishRecord:(id)a0;
- (void)setInvitedUsers:(id)a0 withCompletion:(id /* block */)a1;
- (void)_addDelegate:(id)a0;
- (void)_assertPresenceWithIsRetry:(BOOL)a0;
- (id)_createTimerWithTimeout:(double)a0;
- (void)_handlePresentDevicesChangedForPresence:(id)a0;
- (void)_informNetworkChange:(BOOL)a0;
- (id)_recordsFromPresence:(id)a0;
- (void)_setInvitedUsers:(id)a0 withCompletion:(id /* block */)a1;
- (id)_skHandlesFromUserIDs:(id)a0;
- (id)_skHandlesFromUsers:(id)a0;
- (void)_subscribeToStatusKitWithIsRetry:(BOOL)a0;
- (id)_urisFromSKHandles:(id)a0;
- (id)initWithChannelPrefix:(id)a0 identifier:(id)a1 queue:(id)a2;
- (id)initWithChannelPrefix:(id)a0 identifier:(id)a1 queue:(id)a2 netMonitor:(id)a3 timerProvider:(id)a4 presenceProvider:(id)a5 logEventSubmitter:(id)a6;
- (id)invitedURIs;
- (void)presentDevicesChangedForPresence:(id)a0;
- (void)publishRecord:(id)a0;

@end
