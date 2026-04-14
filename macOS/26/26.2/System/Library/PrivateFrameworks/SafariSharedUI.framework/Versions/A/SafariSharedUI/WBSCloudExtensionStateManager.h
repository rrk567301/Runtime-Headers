@class WBSPeriodicActivityScheduler, NSArray, NSDictionary, NSMutableArray;

@interface WBSCloudExtensionStateManager : NSObject {
    BOOL _hasSuccessfullyUpdatedCloudExtensionStatesAtLeastOnce;
    NSMutableArray *_stateProviders;
    NSDictionary *_cloudExtensionStates;
    NSArray *_cloudDevices;
    BOOL _isCloudExtensionStateAccurateOnThisDevice;
    WBSPeriodicActivityScheduler *_inactiveDevicePruningScheduler;
    WBSPeriodicActivityScheduler *_periodicDeviceSavingScheduler;
    BOOL _performFetchAfterNextSave;
}

@property (class, readonly, nonatomic) WBSCloudExtensionStateManager *sharedManager;

@property (nonatomic) long long manateeState;
@property (nonatomic, getter=isExtensionSyncEnabled) BOOL extensionSyncEnabled;

+ (BOOL)test_determineEnabledStateFromCloudExtensionState:(id)a0 forProfileServerID:(id)a1;
+ (id)test_determineNewTabPageFromCloudDeviceState:(id)a0;
+ (id)_cloudExtensionStatesDictionaryForDeviceWithUUIDString:(id)a0 fromCloudExtensionStates:(id)a1;
+ (id)_uuidStringsOfInactiveCloudDevices:(id)a0 currentDeviceUUIDString:(id)a1;
+ (id)test_removeDeviceWithUUIDString:(id)a0 fromCloudDevices:(id)a1;
+ (id)test_uuidStringsOfInactiveCloudDevices:(id)a0 currentDeviceUUIDString:(id)a1;
+ (id)_singleExtensionStates:(id)a0 withStateRemovedForDeviceWithUUIDString:(id)a1;
+ (id)_removeStatesForDeviceWithUUIDString:(id)a0 fromCloudExtensionStates:(id)a1;
+ (BOOL)_determineEnabledStateFromCloudExtensionState:(id)a0 forProfileServerID:(id)a1;
+ (id)test_removeStatesForDeviceWithUUIDString:(id)a0 fromCloudExtensionStates:(id)a1;
+ (id)test_cloudExtensionStatesDictionaryForDeviceWithUUIDString:(id)a0 fromCloudExtensionStates:(id)a1;
+ (id)_determineNewTabPageFromCloudDeviceState:(id)a0;
+ (id)_removeDeviceWithUUIDString:(id)a0 fromCloudDevices:(id)a1;

- (id)_cloudExtensionStateForComposedIdentifiers:(id)a0;
- (void)_pruneInactiveDevicesFromCloudKitWithCompletionHandler:(id /* block */)a0;
- (BOOL)_cloudDeviceMatchesLocalDeviceForCurrentDevice;
- (BOOL)_hasInstalledApplicationWithIdentifier:(id)a0;
- (void)_updateStateProvidersFromCloudExtensionState;
- (void)_getCloudSettingsContainerManateeStateWithCompletionHandler:(id /* block */)a0;
- (void)_updateLocalStateFromCloudExtensionState;
- (void)getLockupViewsForAppsOnOtherDevicesWithCompletionHandler:(id /* block */)a0;
- (void)_ensureCurrentDeviceIsSavedPeriodically;
- (void)localExtensionStateDidChange;
- (id)_extensionStatesDictionaryForCurrentDevice;
- (void)_managedExtensionStateDidChange:(id)a0;
- (void)_schedulePruningOfInactiveDevices;
- (void)_getPrimaryAppleAccountHasSafariSyncEnabledWithCompletionHandler:(id /* block */)a0;
- (void)_getCloudExtensionStatesWithCompletionHandler:(id /* block */)a0;
- (void)_cloudExtensionStatesWereUpdated;
- (void).cxx_destruct;
- (void)_determineExtensionSyncAvailabilityWithCompletionHandler:(id /* block */)a0;
- (void)_extensionSyncEnabledStateDidChangeDistributedNotificationHandler:(id)a0;
- (BOOL)isExtensionEnabledInCloudWithComposedIdentifier:(id)a0 forProfileServerID:(id)a1;
- (id)_extensionDeviceDictionaryForCurrentDevice;
- (void)_saveExtensionStatesWithDictionaryRepresentation:(id)a0 forDevice:(id)a1 completionHandler:(id /* block */)a2;
- (id)_allComposedIdentifiersAssociatedWithComposedIdentifier:(id)a0;
- (BOOL)_cloudStateMatchesLocalStateForCurrentDevice;
- (id)_composedIdentifierForBundleIdentifier:(id)a0 relatedToComposedIdentifier:(id)a1;
- (void)_determineExtensionSyncAvailabilityIgnoringExtensionSyncEnabled:(BOOL)a0 completionHandler:(id /* block */)a1;
- (BOOL)_cloudExtensionStatesMatchLocalExtensionStatesForCurrentDevice;
- (void)_saveCurrentDeviceToCloudKitWithCompletionHandler:(id /* block */)a0;
- (id)_defaultWebExtensionsController;
- (void)_updateCloudExtensionStatesFromSafariBookmarksSyncAgent:(id)a0;
- (void)removeProvider:(id)a0;
- (void)updateNewTabPageFromCloudDeviceState;
- (void)_deleteCurrentDeviceFromCloudKit;
- (id)init;
- (void)addProvider:(id)a0;
- (id)_cloudExtensionStateAssociatedWithComposedIdentifier:(id)a0;
- (id)extensionAppsFromOtherDevices;

@end
