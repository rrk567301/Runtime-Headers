@class HMDUIDialogPresenter, HMMTRResidentStateManager, HMFTimer, HMDHomeManager, HMMTRStorage, HMMTRAttestationDataStore, NSString, NSSet, NSNumber, NSDictionary, NSNotificationCenter, HMMTRUIDialogPresenter;
@protocol HMMTRVendorMetadataStore;

@interface HMDCHIPDataSource : HMFObject <HMMTRResidentStateManagerDataSource, HMMTRStorageDataSource, HMMTRUIDialogPresenterDelegate, HMMTRAccessoryServerBrowserDelegate, HMFLogging, HMFTimerDelegate>

@property (readonly) NSNotificationCenter *notificationCenter;
@property (readonly) HMFTimer *vendorMetadataRefreshTimer;
@property (readonly) HMFTimer *attestationDataRefreshTimer;
@property (readonly) HMDUIDialogPresenter *dialogPresenter;
@property (retain) HMMTRResidentStateManager *chipResidentStateManager;
@property (retain) HMMTRStorage *chipStorage;
@property (weak) HMDHomeManager *homeManager;
@property (retain) id<HMMTRVendorMetadataStore> vendorMetadataStore;
@property (retain) HMMTRAttestationDataStore *attestationDataStore;
@property (retain) HMMTRUIDialogPresenter *uiDialogPresenter;
@property (readonly, getter=isCurrentDevicePrimaryResident) BOOL currentDevicePrimaryResident;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy, nonatomic) NSSet *allPairedHAPServerIdentifiers;
@property (readonly, copy, nonatomic) NSSet *allFabricIDs;
@property (readonly, copy) NSNumber *currentFabricID;
@property (readonly, copy) NSDictionary *keyValueStore;

+ (id)logCategory;

- (void).cxx_destruct;
- (id)home;
- (void)timerDidFire:(id)a0;
- (id)initWithHomeManager:(id)a0;
- (void)configureWithUIDialogPresenter:(id)a0;
- (id)appleHomeFabricWithID:(id)a0;
- (void)browser:(id)a0 didRemoveAccessoryPairingWithNodeID:(id)a1;
- (void)configureWithAccessoryServerBrowser:(id)a0;
- (void)configureWithAttestationDataStore:(id)a0;
- (void)configureWithResidentStateManager:(id)a0;
- (void)configureWithStorage:(id)a0;
- (void)configureWithVendorMetadataStore:(id)a0;
- (void)createCHIPStoragesForHomes:(id)a0 homeManager:(id)a1 completion:(id /* block */)a2;
- (void)forAllStorageDataSourcesDo:(id /* block */)a0;
- (void)handleAccessoryCHIPStorageChangedNotification:(id)a0;
- (void)handleDataReadyAfterBecomingPrimaryNotification:(id)a0;
- (void)handleHomeCHIPStorageChangedNotification:(id)a0;
- (void)handleHomeRemovedNotification:(id)a0;
- (void)handlePrimaryResidentUpdatedNotification:(id)a0;
- (void)handleUpdatedDataWithIsLocalChange:(BOOL)a0;
- (id)homeWithCHIPFabric:(id)a0;
- (id)initWithHomeManager:(id)a0 notificationCenter:(id)a1 vendorMetadataRefreshTimer:(id)a2 attestationDataRefreshTimer:(id)a3 dialogPresenter:(id)a4;
- (void)requestUserPermissionForBridgeAccessory:(id)a0 withContext:(id)a1 queue:(id)a2 completionHandler:(id /* block */)a3;
- (void)requestUserPermissionForUnauthenticatedAccessory:(id)a0 withContext:(id)a1 queue:(id)a2 completionHandler:(id /* block */)a3;
- (id)storageDataSourceForFabricWithID:(id)a0;

@end
