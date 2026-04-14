@class CHIPAccessoryServerBrowser, NSString, CHIPPluginStorage, NSObject;
@protocol OS_dispatch_queue;

@interface CHIPPluginSystemCommissionerPairingManager : HMFObject <HMFLogging>

@property (readonly, weak, nonatomic) CHIPAccessoryServerBrowser *browser;
@property (readonly, weak, nonatomic) CHIPPluginStorage *storage;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *workQueue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;

- (void).cxx_destruct;
- (id)logIdentifier;
- (void)removeSystemCommissionerPairingWithUUID:(id)a0 completionHandler:(id /* block */)a1;
- (void)fetchSystemCommissionerPairingsWithCompletionHandler:(id /* block */)a0;
- (id)initWithQueue:(id)a0 chipAccessoryServerBrowser:(id)a1;
- (void)fetchDevicePairingsForSystemCommissionerPairingUUID:(id)a0 completionHandler:(id /* block */)a1;
- (void)removeDevicePairingWithUUID:(id)a0 forSystemCommissionerPairingUUID:(id)a1 completionHandler:(id /* block */)a2;
- (void)removeDevicePairingWithUUID:(id)a0 completionHandler:(id /* block */)a1;
- (void)removeAllDevicePairingsForSystemCommissionerPairingUUID:(id)a0 completionHandler:(id /* block */)a1;
- (void)_fetchSystemCommissionerPairingsWithCompletionHandler:(id /* block */)a0;
- (void)_removeSystemCommissionerPairingWithUUID:(id)a0 completionHandler:(id /* block */)a1;
- (void)_fetchAllDevicePairingsForSystemCommissionerDevicePairingWithUUID:(id)a0 completionHandler:(id /* block */)a1;
- (void)_removeDevicePairingWithUUID:(id)a0 forSystemCommissionerPairingUUID:(id)a1 completionHandler:(id /* block */)a2;
- (void)_removeAllDevicePairingsForSystemCommissionerPairingUUID:(id)a0 completionHandler:(id /* block */)a1;

@end
