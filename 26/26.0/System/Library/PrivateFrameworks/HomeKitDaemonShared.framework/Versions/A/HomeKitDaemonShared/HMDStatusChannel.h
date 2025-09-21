@class NSHashTable, NSString, HMFTimer, NSDate, NSSet, NSDictionary, NSObject, HMFNetMonitor, NSNumber;
@protocol HMMLogEventSubmitting, HMDSKPresence, HMDIdsIdentifierProvider, OS_dispatch_queue, HMDSKPresenceProvider, HMFTimerProvider;

@interface HMDStatusChannel : NSObject <HMFLogging, HMFTimerDelegate, HMDSKPresenceDelegate, HMFNetMonitorDelegate, HMDSDumpState, HMDStatusChannelProtocol> {
    NSObject<OS_dispatch_queue> *_queue;
}

@property (readonly, nonatomic) id<HMDSKPresence> presenceChannel;
@property (readonly, copy, nonatomic) NSString *channelName;
@property (readonly, copy, nonatomic) NSString *channelPrefix;
@property (readonly, nonatomic) NSHashTable *statusDelegates;
@property (readonly, nonatomic) HMFNetMonitor *netMonitor;
@property (readonly, nonatomic) id<HMDIdsIdentifierProvider> idsIdentifierProvider;
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
@property (nonatomic) BOOL started;
@property (nonatomic) BOOL initialStatusKitCloudKitImportOccurred;
@property (nonatomic) BOOL subscribed;
@property (nonatomic) BOOL receivedInitialChannelState;
@property (retain) NSDate *lastObserveTimestamp;
@property (retain) NSNumber *lastObserveDeviceCount;
@property (retain) NSDate *lastPublishTimestamp;
@property (retain) NSDate *lastStopPublishTimestamp;
@property (retain) NSDate *lastConnectivityChangeTimestamp;
@property (readonly, nonatomic) BOOL isConnected;
@property (readonly) NSSet *currentRecords;
@property (readonly, nonatomic) NSDictionary *localPayload;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;

- (id)dumpStateWithPrivacyLevel:(unsigned long long)a0;
- (void)dealloc;
- (void)timerDidFire:(id)a0;
- (void)networkMonitorIsUnreachable:(id)a0;
- (void)initialCloudKitImportReceived:(id)a0;
- (id)logIdentifier;
- (void).cxx_destruct;
- (void)networkMonitorIsReachable:(id)a0;
- (void)startWithCompletion:(id /* block */)a0;
- (void)stopWithCompletion:(id /* block */)a0;
- (void)_addDelegate:(id)a0;
- (id)_createTimerWithTimeout:(double)a0;
- (void)setInvitedUsers:(id)a0 withCompletion:(id /* block */)a1;
- (void)addDelegate:(id)a0 withCompletion:(id /* block */)a1;
- (id)initWithChannelPrefix:(id)a0 identifier:(id)a1 queue:(id)a2 logEventSubmitter:(id)a3 idsIdentifierProvider:(id)a4;
- (void)publishRecordWithPayload:(id)a0 shouldDebounce:(BOOL)a1 withCompletion:(id /* block */)a2;
- (void)stopPublishingWithCompletion:(id /* block */)a0;
- (id)presencePayload;
- (void)presentDevicesChangedForPresence:(id)a0;
- (void)_stopPublishing;
- (id)_createBackoffTimerWithMinimumTimeInterval:(double)a0 maximumTimeInterval:(double)a1;
- (void)_assertPresenceWithIsRetry:(BOOL)a0;
- (void)_checkForInitialStatusKitCloudKitImportAndSubscribe;
- (void)_deassertPresenceWithIsRetry:(BOOL)a0;
- (void)_handleAssertionLogTimerFired;
- (void)_handlePresentDevicesChangedForPresence:(id)a0;
- (void)_informNetworkChange:(BOOL)a0;
- (void)_publishRecordWithPayload:(id)a0 shouldDebounce:(BOOL)a1;
- (id)_recordsFromPresence:(id)a0;
- (void)_requestPublishShouldDebounce:(BOOL)a0;
- (void)_setInvitedUsers:(id)a0 withCompletion:(id /* block */)a1;
- (id)_skHandlesFromUserIDs:(id)a0;
- (id)_skHandlesFromUsers:(id)a0;
- (void)_startAssertionLogTimer;
- (void)_stopAssertionLogTimer;
- (void)_stopPostRegainNetworkConnectivityTimer;
- (void)_subscribeToStatusKitWithIsRetry:(BOOL)a0;
- (void)_unsubscribeFromStatusKitWithIsRetry:(BOOL)a0;
- (id)_urisFromSKHandles:(id)a0;
- (id)initWithChannelPrefix:(id)a0 identifier:(id)a1 queue:(id)a2 netMonitor:(id)a3 timerProvider:(id)a4 presenceProvider:(id)a5 logEventSubmitter:(id)a6 idsIdentifierProvider:(id)a7;
- (id)invitedURIs;

@end
