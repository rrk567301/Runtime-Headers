@class HMFMessageDispatcher, MKFResidentSyncMetadata, NSHashTable;
@protocol HMDResidentDeviceManager;

@interface HMDResidentSyncClient : HMDResidentSyncController <HMDResidentSyncClient> {
    HMFMessageDispatcher *_dispatcher;
    id<HMDResidentDeviceManager> _residentDeviceManager;
    NSHashTable *_requestsInProgress;
    MKFResidentSyncMetadata *_metadata;
}

- (void).cxx_destruct;
- (id)start;
- (void)performSync;
- (void)performResidentRequest:(id)a0 options:(unsigned long long)a1;
- (void)handlePrimaryResidentChanged:(id)a0;
- (id)initWithHome:(id)a0 dispatcher:(id)a1 residentDeviceManager:(id)a2 persistence:(id)a3 codingModel:(id)a4;
- (void)_handleHomeDataChanged:(id)a0;

@end
