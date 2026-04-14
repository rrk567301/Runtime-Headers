@class NSNotificationCenter, NSDictionary, HMDHomeManager, CHIPPluginUIDialogPresenter, HMDUIDialogPresenter, NSString, NSSet, CHIPPluginAttestationDataStore, CHIPPluginVendorMetadataStore, CHIPPluginResidentStateManager, CHIPPluginStorage, NSNumber, HMFTimer, NSUUID;

@interface HMDCHIPDataSource : HMFObject <CHIPPluginResidentStateManagerDataSource, CHIPPluginStorageDataSource, CHIPPluginUIDialogPresenterDelegate, CHIPPluginAccessoryServerBrowserDelegate, HMFLogging, HMFTimerDelegate>

@property (readonly) NSNotificationCenter *notificationCenter;
@property (readonly) HMFTimer *vendorMetadataRefreshTimer;
@property (readonly) HMFTimer *attestationDataRefreshTimer;
@property (readonly) HMDUIDialogPresenter *dialogPresenter;
@property (retain) CHIPPluginResidentStateManager *chipResidentStateManager;
@property (retain) CHIPPluginStorage *chipStorage;
@property (weak) HMDHomeManager *homeManager;
@property (readonly, copy) NSNumber *pairingTargetFabricIndex;
@property (copy) NSUUID *pairingTargetHomeUUID;
@property (retain) CHIPPluginVendorMetadataStore *vendorMetadataStore;
@property (retain) CHIPPluginAttestationDataStore *attestationDataStore;
@property (retain) CHIPPluginUIDialogPresenter *uiDialogPresenter;
@property (readonly, getter=isCurrentDevicePrimaryResident) BOOL currentDevicePrimaryResident;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy, nonatomic) NSSet *allPairedHAPServerIdentifiers;
@property (readonly, copy, nonatomic) NSSet *allFabricIndexes;
@property (readonly, copy) NSNumber *currentFabricIndex;
@property (readonly, copy) NSDictionary *keyValueStore;

+ (id)logCategory;

- (void).cxx_destruct;
- (id)home;
- (void)timerDidFire:(id)a0;
- (id)initWithHomeManager:(id)a0;
- (void)handlePrimaryResidentUpdatedNotification:(id)a0;
- (void)requestUserPermissionForUnauthenticatedAccessory:(id)a0 withContext:(id)a1 queue:(id)a2 completionHandler:(id /* block */)a3;
- (void)handleHomeCHIPStorageChangedNotification:(id)a0;
- (void)handleAccessoryCHIPStorageChangedNotification:(id)a0;
- (void)handleHomeRemovedNotification:(id)a0;
- (id)storageDataSourceForFabricWithIndex:(id)a0;
- (void)browser:(id)a0 didRemoveAccessoryPairingWithNodeID:(id)a1;
- (id)initWithHomeManager:(id)a0 notificationCenter:(id)a1 vendorMetadataRefreshTimer:(id)a2 attestationDataRefreshTimer:(id)a3 dialogPresenter:(id)a4;
- (void)configureWithResidentStateManager:(id)a0;
- (void)configureWithStorage:(id)a0;
- (void)configureWithVendorMetadataStore:(id)a0;
- (void)configureWithAttestationDataStore:(id)a0;
- (void)configureWithUIDialogPresenter:(id)a0;
- (void)configureWithAccessoryServerBrowser:(id)a0;
- (id)homeWithCHIPFabricID:(id)a0;

@end
