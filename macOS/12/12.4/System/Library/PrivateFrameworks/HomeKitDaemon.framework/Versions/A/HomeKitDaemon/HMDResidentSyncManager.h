@class NSString, HMDCoreData, HMDManagedObjectCodingModel, HMDHome, HMDResidentSyncClient, HMDResidentSyncServer;

@interface HMDResidentSyncManager : NSObject <HMFLogging, HMDResidentSyncClient, HMDResidentSyncServer> {
    HMDHome *_home;
    HMDCoreData *_persistence;
    HMDResidentSyncClient *_client;
    HMDResidentSyncServer *_server;
}

@property (class, readonly) HMDManagedObjectCodingModel *codingModel;

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;

- (void).cxx_destruct;
- (void)performSync;
- (id)logIdentifier;
- (id)initWithHome:(id)a0 persistence:(id)a1;
- (void)interceptRemoteResidentRequest:(id)a0 proceed:(id /* block */)a1;
- (void)performResidentRequest:(id)a0 options:(unsigned long long)a1;

@end
