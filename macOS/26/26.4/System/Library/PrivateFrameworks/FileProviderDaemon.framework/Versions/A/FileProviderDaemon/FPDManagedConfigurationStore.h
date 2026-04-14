@class NSSet;

@interface FPDManagedConfigurationStore : NSObject {
    BOOL areForcedKeysIgnored;
    BOOL KnownFolderSyncingIsGloballyDisallowed;
    NSSet *KnownFolderSyncingAllowedBundleIDs;
    BOOL ExternalVolumeSyncingIsGloballyDisallowed;
    NSSet *ExternalVolumeSyncingAllowedBundleIDs;
    BOOL RemoteSyncingIsGloballyDisallowed;
    NSSet *RemoteSyncingAllowedBundleIDs;
    NSSet *autoEnabledBundleIDs;
    BOOL allowProvidersRequestAttribution;
}

+ (id)defaultStore;
+ (void)__test_only_reloadDefaultStore;

- (void).cxx_destruct;
- (id)init;
- (id)configurationState;
- (void)_loadExternalVolumeSyncing:(id)a0;
- (void)_loadKnownFolderSyncing:(id)a0;
- (void)_loadRemoteSyncing:(id)a0;
- (BOOL)allowsExternalVolumeSyncingForBundleID:(id)a0 teamID:(id)a1;
- (BOOL)allowsKnownFolderSyncingForBundleID:(id)a0 teamID:(id)a1;
- (BOOL)allowsRemoteSyncingForBundleID:(id)a0 teamID:(id)a1;
- (BOOL)autoEnableDomainsForBundleID:(id)a0 teamID:(id)a1;
- (BOOL)canManagedProvidersRequestAttribution;
- (BOOL)ignoresForcedKeyChecks;

@end
