@class HMFExponentialBackoffTimer, NSString, HMFMessageDispatcher, NSHashTable, MKFResidentSyncMetadata, HMFFuture, HMFPromise;
@protocol HMDResidentSyncClientDataSource, HMMLogEventSubmitting, HMDResidentDeviceManager;

@interface HMDResidentSyncClient : HMDResidentSyncController <HMFTimerDelegate, HMDResidentSyncClient> {
    HMFMessageDispatcher *_dispatcher;
    id<HMDResidentDeviceManager> _residentDeviceManager;
    id<HMDResidentSyncClientDataSource> _dataSource;
    char _residentCapable;
    NSHashTable *_requestsInProgress;
    MKFResidentSyncMetadata *_metadata;
    HMFExponentialBackoffTimer *_retryTimer;
    HMFFuture *_performFetchJitterFuture;
    HMFPromise *_performFetchJitterPromise;
    char _retryRequired;
    long long _accessDeniedCount;
}

@property (readonly, nonatomic) id<HMMLogEventSubmitting> logEventSubmitter;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)start;
- (void)stop;
- (void)performSync;
- (id)retryTimer;
- (void)timerDidFire:(id)a0;
- (void)performResidentRequest:(id)a0 options:(unsigned long long)a1;
- (void)_handleHomeDataChanged:(id)a0;
- (void)handlePrimaryResidentChanged:(id)a0;
- (id)initWithHome:(id)a0 codingModel:(id)a1 dispatcher:(id)a2 residentDeviceManager:(id)a3 notificationCenter:(id)a4 persistence:(id)a5 isResidentCapable:(char)a6 dataSource:(id)a7 logEventSubmitter:(id)a8;

@end
