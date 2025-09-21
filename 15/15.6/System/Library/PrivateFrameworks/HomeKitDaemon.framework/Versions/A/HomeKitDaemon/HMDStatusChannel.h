@class NSHashTable, NSString, HMFTimer, NSDate, HMDAppleAccountManager, NSSet, NSDictionary, NSObject, HMFNetMonitor, NSNumber;
@protocol HMMLogEventSubmitting, HMDSKPresence, OS_dispatch_queue, HMDSKPresenceProvider, HMFTimerProvider;

@interface HMDStatusChannel : NSObject <HMFLogging, HMFTimerDelegate, HMDSKPresenceDelegate, HMFNetMonitorDelegate> {
    NSObject<OS_dispatch_queue> *_queue;
}

@property (readonly, nonatomic) id<HMDSKPresence> presenceChannel;
@property (readonly, copy, nonatomic) NSString *channelName;
@property (readonly, copy, nonatomic) NSString *channelPrefix;
@property (readonly, copy, nonatomic) NSString *channelIdentifier;
@property (readonly, nonatomic) NSHashTable *statusDelegates;
@property (readonly, nonatomic) HMFNetMonitor *netMonitor;
@property (readonly, nonatomic) HMDAppleAccountManager *appleAccountManager;
@property (readonly, nonatomic) id<HMFTimerProvider> timerProvider;
@property (readonly, nonatomic) id<HMDSKPresenceProvider> presenceProvider;
@property (retain) HMFTimer *subscribeRetryTimer;
@property (retain) HMFTimer *unsubscribeRetryTimer;
@property (retain) HMFTimer *publishRetryTimer;
@property (retain) HMFTimer *stopPublishRetryTimer;
@property (retain) HMFTimer *publishDebounceTimer;
@property (retain) HMFTimer *initialStatusKitCloudKitImportTimer;
@property (retain) HMFTimer *postRegainNetworkConnectivityTimer;
@property (retain) HMFTimer *assertionLogTimer;
@property (readonly, nonatomic) id<HMMLogEventSubmitting> logEventSubmitter;
@property (nonatomic) char started;
@property (nonatomic) char initialStatusKitCloudKitImportOccurred;
@property (nonatomic) char subscribed;
@property (nonatomic) char receivedInitialChannelState;
@property (retain) NSDate *lastObserveTimestamp;
@property (retain) NSNumber *lastObserveDeviceCount;
@property (retain) NSDate *lastPublishTimestamp;
@property (retain) NSDate *lastStopPublishTimestamp;
@property (retain) NSDate *lastConnectivityChangeTimestamp;
@property (readonly) NSSet *currentRecords;
@property (readonly, nonatomic) NSDictionary *localPayload;
@property (readonly, nonatomic) char isConnected;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;

- (void)dealloc;
- (void).cxx_destruct;
- (void)start;
- (void)stop;
- (void)addDelegate:(id)a0;
- (id)logIdentifier;
- (id)dumpState;
- (void)networkMonitorIsReachable:(id)a0;
- (void)networkMonitorIsUnreachable:(id)a0;
- (void)stopPublishing;
- (void)timerDidFire:(id)a0;
- (void)_addDelegate:(id)a0;
- (id)_createBackoffTimerWithMinimumTimeInterval:(double)a0 maximumTimeInterval:(double)a1;
- (void)_stopPublishing;
- (id)presencePayload;
- (void)setInvitedUsers:(id)a0 withCompletion:(id /* block */)a1;
- (void)_assertPresenceWithIsRetry:(char)a0;
- (void)_checkForInitialStatusKitCloudKitImportAndSubscribe;
- (id)_createTimerWithTimeout:(double)a0;
- (void)_deassertPresenceWithIsRetry:(char)a0;
- (void)_handleAssertionLogTimerFired;
- (void)_handlePresentDevicesChangedForPresence:(id)a0;
- (void)_informNetworkChange:(char)a0;
- (void)_publishRecordWithPayload:(id)a0 shouldDebounce:(char)a1;
- (id)_recordsFromPresence:(id)a0;
- (void)_requestPublishShouldDebounce:(char)a0;
- (void)_setInvitedUsers:(id)a0 withCompletion:(id /* block */)a1;
- (id)_skHandlesFromUserIDs:(id)a0;
- (id)_skHandlesFromUsers:(id)a0;
- (void)_startAssertionLogTimer;
- (void)_stopAssertionLogTimer;
- (void)_stopPostRegainNetworkConnectivityTimer;
- (void)_subscribeToStatusKitWithIsRetry:(char)a0;
- (void)_unsubscribeFromStatusKitWithIsRetry:(char)a0;
- (id)_urisFromSKHandles:(id)a0;
- (id)initWithChannelPrefix:(id)a0 identifier:(id)a1 queue:(id)a2;
- (id)initWithChannelPrefix:(id)a0 identifier:(id)a1 queue:(id)a2 netMonitor:(id)a3 timerProvider:(id)a4 presenceProvider:(id)a5 logEventSubmitter:(id)a6 appleAccountManager:(id)a7;
- (void)initialCloudKitImportReceived:(id)a0;
- (id)invitedURIs;
- (void)presentDevicesChangedForPresence:(id)a0;
- (void)publishRecordWithPayload:(id)a0 shouldDebounce:(char)a1;

@end
