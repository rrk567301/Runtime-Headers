@class CHIPPluginStorage, NSUUID, HMFTimer, HMDHomeManager, CHIPPluginResidentStateManager, CHIPPluginVendorMetadataStore, NSString, NSDictionary, NSNotificationCenter;

@interface HMDCHIPDataSource : HMFObject <CHIPPluginResidentStateManagerDataSource, CHIPPluginStorageDataSource, HMFLogging, HMFTimerDelegate>

@property (readonly) NSNotificationCenter *notificationCenter;
@property (readonly) HMFTimer *vendorMetadataRefreshTimer;
@property (retain) CHIPPluginResidentStateManager *chipResidentStateManager;
@property (retain) CHIPPluginStorage *chipStorage;
@property (weak) HMDHomeManager *homeManager;
@property (copy) NSUUID *pairingTargetHomeUUID;
@property (retain) CHIPPluginVendorMetadataStore *vendorMetadataStore;
@property (readonly, getter=isCurrentDevicePrimaryResident) BOOL currentDevicePrimaryResident;
@property (readonly, getter=isResidentEnabledInAnyHome) BOOL residentEnabledInAnyHome;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSDictionary *keyValueStore;

+ (id)logCategory;

- (void).cxx_destruct;
- (id)home;
- (void)timerDidFire:(id)a0;
- (id)initWithHomeManager:(id)a0;
- (void)handlePrimaryResidentUpdatedNotification:(id)a0;
- (id)initWithHomeManager:(id)a0 notificationCenter:(id)a1 vendorMetadataRefreshTimer:(id)a2;
- (void)handleCHIPKeyValueStoreChangedNotification:(id)a0;
- (void)updateKeyValueStore:(id)a0 completion:(id /* block */)a1;
- (void)configureWithResidentStateManager:(id)a0;
- (void)configureWithStorage:(id)a0;
- (void)configureWithVendorMetadataStore:(id)a0;

@end
