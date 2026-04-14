@class HMFExponentialBackoffTimer, NSString, HMFMessageDispatcher, NSHashTable, MKFResidentSyncMetadata;
@protocol HMDResidentDeviceManager;

@interface HMDResidentSyncClient : HMDResidentSyncController <HMFTimerDelegate, HMDResidentSyncClient> {
    HMFMessageDispatcher *_dispatcher;
    id<HMDResidentDeviceManager> _residentDeviceManager;
    BOOL _residentCapable;
    NSHashTable *_requestsInProgress;
    MKFResidentSyncMetadata *_metadata;
    HMFExponentialBackoffTimer *_retryTimer;
    BOOL _retryRequired;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)start;
- (void)stop;
- (void)performSync;
- (void)timerDidFire:(id)a0;
- (void)handlePrimaryResidentChanged:(id)a0;
- (void)performResidentRequest:(id)a0 options:(unsigned long long)a1;
- (void)_handleHomeDataChanged:(id)a0;
- (id)initWithHome:(id)a0 codingModel:(id)a1 dispatcher:(id)a2 residentDeviceManager:(id)a3 notificationCenter:(id)a4 persistence:(id)a5 isResidentCapable:(BOOL)a6;

@end
