@class CHIPPluginStorage, CHIPDeviceController, NSString, CHIPPluginResidentStateManager, CHIPPluginVendorMetadataStore, NSDictionary, CHIPPluginMatterKeypair, NSMutableSet, NSObject, CHIPPluginAttestationDataStore, CHIPPluginAttestationStatus, CHIPPluginUIDialogPresenter;
@protocol OS_dispatch_queue, HAPAccessoryServerBrowserDelegate;

@interface CHIPAccessoryServerBrowser : HAPAccessoryServerBrowser <CHIPPluginStorageDelegate, HMFLogging>

@property (readonly, nonatomic) NSMutableSet *discoveredAccessoryServers;
@property (readonly, nonatomic) NSMutableSet *stagedAccessoryServers;
@property (weak, nonatomic) id<HAPAccessoryServerBrowserDelegate> delegate;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *delegateQueue;
@property unsigned long long restartCount;
@property BOOL pendingMatterStackRestart;
@property (retain, nonatomic) CHIPPluginMatterKeypair *nocSigner;
@property (retain) NSDictionary *matterStorageItems;
@property (readonly, nonatomic) BOOL isCurrentDevicePrimaryResident;
@property (readonly) CHIPDeviceController *chipController;
@property (readonly, nonatomic) CHIPPluginStorage *storage;
@property (readonly, nonatomic) CHIPPluginResidentStateManager *residentStateManager;
@property (readonly, nonatomic) CHIPPluginVendorMetadataStore *vendorMetadataStore;
@property (readonly, nonatomic) CHIPPluginAttestationDataStore *attestationDataStore;
@property (readonly, nonatomic) CHIPPluginAttestationStatus *attestationStatus;
@property (readonly, nonatomic) CHIPPluginUIDialogPresenter *uiDialogPresenter;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;

- (void).cxx_destruct;
- (void)setDelegate:(id)a0 queue:(id)a1;
- (long long)linkType;
- (id)logIdentifier;
- (BOOL)_delegateRespondsToSelector:(SEL)a0;
- (void)startDiscoveringAccessoryServers;
- (void)stopDiscoveringAccessoryServers;
- (void)matchAccessoryServerWithSetupID:(id)a0 serverIdentifier:(id)a1 completionHandler:(id /* block */)a2;
- (void)discoverAccessoryServerWithIdentifier:(id)a0;
- (void)handleSystemKeychainStoreUpdatedNotification:(id)a0;
- (id)initWithQueue:(id)a0 storeDirectoryURL:(id)a1;
- (void)prepareForPairingWithSetupPayload:(id)a0 fabricIndex:(id)a1 completionHandler:(id /* block */)a2;
- (void)stageAccessoryServerWithSetupPayload:(id)a0 fabricIndex:(id)a1 completionHandler:(id /* block */)a2;
- (id)stagedAccessoryServerWithIdentifier:(id)a0;
- (void)discardStagedAccessoryServerWithIdentifier:(id)a0 completionHandler:(id /* block */)a1;
- (void)storageDidBecomeAvailable:(id)a0;
- (void)storageDidUpdateData:(id)a0 isLocalChange:(BOOL)a1;
- (void)handleDeviceNoLongerPrimaryResidentWithCompletion:(id /* block */)a0;
- (id)_allServers;
- (void)_startChipStackWithFabricMappingIndex:(id)a0;
- (void)_prepareForPairingWithSetupCode:(id)a0 discriminator:(id)a1 vendorID:(id)a2 productID:(id)a3 serialNumber:(id)a4 fabricIndex:(id)a5 completionHandler:(id /* block */)a6;
- (void)invalidateAllDiscoveredServersWithCompletion:(id /* block */)a0;
- (void)_cleanupDiscoveredServersWithCompletion:(id /* block */)a0;
- (void)_invalidateAccessoryServer:(id)a0 withCompletion:(id /* block */)a1;
- (void)invalidateAccessoryServer:(id)a0 withCompletion:(id /* block */)a1;
- (void)_cleanupDiscoveredServers;
- (BOOL)_isDevicePaired:(unsigned long long)a0;
- (void)_setupPairedDevices;
- (id)_createCHIPAccessoryForNodeID:(unsigned long long)a0;
- (void)_restartChipStackWithFabricMappingIndex:(id)a0;
- (unsigned char)_readNextFabricMappingIndexSync;
- (void)_deleteOldPairings;
- (unsigned long long)_generateNodeID;
- (void)setupPairedDevices;
- (void)_cleanupStagedServers;
- (void)restartChipStackWithFabricMappingIndex:(id)a0;
- (void)stageAccessoryServerWithSetupPayload:(id)a0 completionHandler:(id /* block */)a1;
- (void)prepareForServerWithSetupPayload:(id)a0 identifier:(id)a1 category:(id)a2 name:(id)a3 completionHandler:(id /* block */)a4;
- (void)prepareForServerWithSetupCode:(id)a0 discriminator:(id)a1 identifier:(id)a2 category:(id)a3 name:(id)a4 vendorID:(id)a5 productID:(id)a6 serialNumber:(id)a7 completeionHandler:(id /* block */)a8;
- (void)invalidateAllDiscoveredServers;
- (void)invalidateAccessoryServer:(id)a0;
- (void)commitStagedAccessoryServer:(id)a0;

@end
