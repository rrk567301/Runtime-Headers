@class WBSPeriodicActivityScheduler, NSArray, NSDictionary, NSMutableArray;

@interface WBSCloudExtensionStateManager : NSObject {
    char _hasSuccessfullyUpdatedCloudExtensionStatesAtLeastOnce;
    NSMutableArray *_stateProviders;
    NSDictionary *_cloudExtensionStates;
    NSArray *_cloudDevices;
    char _isCloudExtensionStateAccurateOnThisDevice;
    WBSPeriodicActivityScheduler *_inactiveDevicePruningScheduler;
    WBSPeriodicActivityScheduler *_periodicDeviceSavingScheduler;
    char _performFetchAfterNextSave;
}

@property (class, readonly, nonatomic) WBSCloudExtensionStateManager *sharedManager;

@property (nonatomic) long long manateeState;
@property (nonatomic, getter=isExtensionSyncEnabled) char extensionSyncEnabled;

+ (id)_singleExtensionStates:(id)a0 withStateRemovedForDeviceWithUUIDString:(id)a1;
+ (id)test_uuidStringsOfInactiveCloudDevices:(id)a0 currentDeviceUUIDString:(id)a1;
+ (id)_cloudExtensionStatesDictionaryForDeviceWithUUIDString:(id)a0 fromCloudExtensionStates:(id)a1;
+ (char)_determineEnabledStateFromCloudExtensionState:(id)a0 forProfileServerID:(id)a1;
+ (id)_determineNewTabPageFromCloudDeviceState:(id)a0;
+ (id)_removeDeviceWithUUIDString:(id)a0 fromCloudDevices:(id)a1;
+ (id)_removeStatesForDeviceWithUUIDString:(id)a0 fromCloudExtensionStates:(id)a1;
+ (id)_uuidStringsOfInactiveCloudDevices:(id)a0 currentDeviceUUIDString:(id)a1;
+ (id)test_cloudExtensionStatesDictionaryForDeviceWithUUIDString:(id)a0 fromCloudExtensionStates:(id)a1;
+ (char)test_determineEnabledStateFromCloudExtensionState:(id)a0 forProfileServerID:(id)a1;
+ (id)test_determineNewTabPageFromCloudDeviceState:(id)a0;
+ (id)test_removeDeviceWithUUIDString:(id)a0 fromCloudDevices:(id)a1;
+ (id)test_removeStatesForDeviceWithUUIDString:(id)a0 fromCloudExtensionStates:(id)a1;

- (id)init;
- (void).cxx_destruct;
- (void)removeProvider:(id)a0;
- (void)addProvider:(id)a0;
- (void)_managedExtensionStateDidChange:(id)a0;
- (void)getLockupViewsForAppsOnOtherDevicesWithCompletionHandler:(id /* block */)a0;
- (char)isExtensionEnabledInCloudWithComposedIdentifier:(id)a0 forProfileServerID:(id)a1;
- (void)localExtensionStateDidChange;
- (id)_defaultWebExtensionsController;
- (id)_allComposedIdentifiersAssociatedWithComposedIdentifier:(id)a0;
- (char)_cloudDeviceMatchesLocalDeviceForCurrentDevice;
- (id)_cloudExtensionStateAssociatedWithComposedIdentifier:(id)a0;
- (id)_cloudExtensionStateForComposedIdentifiers:(id)a0;
- (char)_cloudExtensionStatesMatchLocalExtensionStatesForCurrentDevice;
- (void)_cloudExtensionStatesWereUpdated;
- (char)_cloudStateMatchesLocalStateForCurrentDevice;
- (id)_composedIdentifierForBundleIdentifier:(id)a0 relatedToComposedIdentifier:(id)a1;
- (void)_deleteCurrentDeviceFromCloudKit;
- (void)_determineExtensionSyncAvailabilityIgnoringExtensionSyncEnabled:(char)a0 completionHandler:(id /* block */)a1;
- (void)_determineExtensionSyncAvailabilityWithCompletionHandler:(id /* block */)a0;
- (void)_ensureCurrentDeviceIsSavedPeriodically;
- (id)_extensionDeviceDictionaryForCurrentDevice;
- (id)_extensionStatesDictionaryForCurrentDevice;
- (void)_extensionSyncEnabledStateDidChangeDistributedNotificationHandler:(id)a0;
- (void)_getCloudExtensionStatesWithCompletionHandler:(id /* block */)a0;
- (void)_getCloudSettingsContainerManateeStateWithCompletionHandler:(id /* block */)a0;
- (void)_getPrimaryAppleAccountHasSafariSyncEnabledWithCompletionHandler:(id /* block */)a0;
- (char)_hasInstalledApplicationWithIdentifier:(id)a0;
- (void)_pruneInactiveDevicesFromCloudKitWithCompletionHandler:(id /* block */)a0;
- (void)_saveCurrentDeviceToCloudKitWithCompletionHandler:(id /* block */)a0;
- (void)_saveExtensionStatesWithDictionaryRepresentation:(id)a0 forDevice:(id)a1 completionHandler:(id /* block */)a2;
- (void)_schedulePruningOfInactiveDevices;
- (void)_updateCloudExtensionStatesFromSafariBookmarksSyncAgent:(id)a0;
- (void)_updateLocalStateFromCloudExtensionState;
- (void)_updateStateProvidersFromCloudExtensionState;
- (id)extensionAppsFromOtherDevices;
- (void)updateNewTabPageFromCloudDeviceState;

@end
