@class HMFMessageDispatcher, NSPersistentHistoryToken, NSPersistentStore;
@protocol HMDResidentDeviceManager;

@interface HMDResidentSyncServer : HMDResidentSyncController <HMDResidentSyncServer> {
    HMFMessageDispatcher *_dispatcher;
    id<HMDResidentDeviceManager> _residentDeviceManager;
    NSPersistentStore *_store;
    NSPersistentHistoryToken *_storeExemplarToken;
}

- (void).cxx_destruct;
- (id)start;
- (void)interceptRemoteResidentRequest:(id)a0 proceed:(id /* block */)a1;
- (void)handlePrimaryResidentChanged:(id)a0;
- (id)initWithHome:(id)a0 dispatcher:(id)a1 residentDeviceManager:(id)a2 persistence:(id)a3 codingModel:(id)a4;
- (id)decodeToken:(id)a0 error:(id *)a1;
- (void)_handleFetchHomeData:(id)a0;
- (void)handlePersistentStoreChanged:(id)a0;

@end
