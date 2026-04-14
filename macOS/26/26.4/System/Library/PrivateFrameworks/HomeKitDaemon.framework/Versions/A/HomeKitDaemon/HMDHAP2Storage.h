@class NSString, NSMutableSet, NSObject, HMDAccessoryBrowser;
@protocol HAP2StorageDelegate, OS_dispatch_queue, HAPKeyStore;

@interface HMDHAP2Storage : NSObject <HAP2Storage> {
    NSObject<OS_dispatch_queue> *_workQueue;
    id<HAPKeyStore> _storage;
    NSMutableSet *_registeredIdentifiers;
    HMDAccessoryBrowser *_accessoryBrowser;
}

@property (weak, nonatomic) id<HAP2StorageDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)fetchCacheForIdentifier:(id)a0 completion:(id /* block */)a1;
- (void)saveControllerIdentity:(id)a0 completion:(id /* block */)a1;
- (void).cxx_destruct;
- (void)hasKeysForIdentifiers:(id)a0 completion:(id /* block */)a1;
- (void)saveKeysForIdentifiers:(id)a0 completion:(id /* block */)a1;
- (id)initWithAccessoryBrowser:(id)a0;
- (void)registerPairedAccessoryWithIdentifier:(id)a0;
- (void)resetPairedAccessoryIdentifiers;
- (void)removeCacheForIdentifier:(id)a0 completion:(id /* block */)a1;
- (void)_removeKeysForIdentifiers:(id)a0 completion:(id /* block */)a1;
- (void)saveCacheForIdentifier:(id)a0 data:(id)a1 completion:(id /* block */)a2;
- (id)keyBagForIdentifier:(id)a0;
- (void)removeKeysForIdentifiers:(id)a0 completion:(id /* block */)a1;
- (void)deregisterPairedAccessoryWithIdentifier:(id)a0;
- (void)fetchKeysForIdentifiers:(id)a0 completion:(id /* block */)a1;
- (void)fetchControllerKeyForDeviceId:(id)a0 completion:(id /* block */)a1;
- (void)removeControllerKeyWithCompletion:(id /* block */)a0;

@end
