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

+ (id)_uuidStringsOfInactiveCloudDevices:(id)a0 currentDeviceUUIDString:(id)a1;
+ (id)_determineNewTabPageFromCloudDeviceState:(id)a0;
+ (BOOL)_determineEnabledStateFromCloudExtensionState:(id)a0 forProfileServerID:(id)a1;
+ (id)test_cloudExtensionStatesDictionaryForDeviceWithUUIDString:(id)a0 fromCloudExtensionStates:(id)a1;
+ (id)_removeDeviceWithUUIDString:(id)a0 fromCloudDevices:(id)a1;
+ (id)test_uuidStringsOfInactiveCloudDevices:(id)a0 currentDeviceUUIDString:(id)a1;
+ (id)_singleExtensionStates:(id)a0 withStateRemovedForDeviceWithUUIDString:(id)a1;
+ (id)_cloudExtensionStatesDictionaryForDeviceWithUUIDString:(id)a0 fromCloudExtensionStates:(id)a1;
+ (id)_removeStatesForDeviceWithUUIDString:(id)a0 fromCloudExtensionStates:(id)a1;
+ (BOOL)test_determineEnabledStateFromCloudExtensionState:(id)a0 forProfileServerID:(id)a1;
+ (id)test_removeDeviceWithUUIDString:(id)a0 fromCloudDevices:(id)a1;
+ (id)test_removeStatesForDeviceWithUUIDString:(id)a0 fromCloudExtensionStates:(id)a1;
+ (id)test_determineNewTabPageFromCloudDeviceState:(id)a0;

- (BOOL)_cloudDeviceMatchesLocalDeviceForCurrentDevice;
- (id)_allComposedIdentifiersAssociatedWithComposedIdentifier:(id)a0;
- (void)getLockupViewsForAppsOnOtherDevicesWithCompletionHandler:(id /* block */)a0;
- (id)_extensionStatesDictionaryForCurrentDevice;
- (void)_updateCloudExtensionStatesFromSafariBookmarksSyncAgent:(id)a0;
- (void)_getPrimaryAppleAccountHasSafariSyncEnabledWithCompletionHandler:(id /* block */)a0;
- (id)_cloudExtensionStateForComposedIdentifiers:(id)a0;
- (id)_composedIdentifierForBundleIdentifier:(id)a0 relatedToComposedIdentifier:(id)a1;
- (void)_getCloudExtensionStatesWithCompletionHandler:(id /* block */)a0;
- (void)_schedulePruningOfInactiveDevices;
- (void)_updateStateProvidersFromCloudExtensionState;
- (void)_extensionSyncEnabledStateDidChangeDistributedNotificationHandler:(id)a0;
- (id)_extensionDeviceDictionaryForCurrentDevice;
- (id)init;
- (id)_cloudExtensionStateAssociatedWithComposedIdentifier:(id)a0;
- (void)_deleteCurrentDeviceFromCloudKit;
- (void)updateNewTabPageFromCloudDeviceState;
- (void)_getCloudSettingsContainerManateeStateWithCompletionHandler:(id /* block */)a0;
- (void)_determineExtensionSyncAvailabilityWithCompletionHandler:(id /* block */)a0;
- (void)_cloudExtensionStatesWereUpdated;
- (void)addProvider:(id)a0;
- (void)localExtensionStateDidChange;
- (void)_ensureCurrentDeviceIsSavedPeriodically;
- (id)extensionAppsFromOtherDevices;
- (BOOL)_hasInstalledApplicationWithIdentifier:(id)a0;
- (void).cxx_destruct;
- (BOOL)_cloudStateMatchesLocalStateForCurrentDevice;
- (void)removeProvider:(id)a0;
- (void)_saveCurrentDeviceToCloudKitWithCompletionHandler:(id /* block */)a0;
- (void)_pruneInactiveDevicesFromCloudKitWithCompletionHandler:(id /* block */)a0;
- (id)_defaultWebExtensionsController;
- (BOOL)isExtensionEnabledInCloudWithComposedIdentifier:(id)a0 forProfileServerID:(id)a1;
- (void)_determineExtensionSyncAvailabilityIgnoringExtensionSyncEnabled:(BOOL)a0 completionHandler:(id /* block */)a1;
- (void)_managedExtensionStateDidChange:(id)a0;
- (void)_updateLocalStateFromCloudExtensionState;
- (BOOL)_cloudExtensionStatesMatchLocalExtensionStatesForCurrentDevice;
- (void)_saveExtensionStatesWithDictionaryRepresentation:(id)a0 forDevice:(id)a1 completionHandler:(id /* block */)a2;

@end
