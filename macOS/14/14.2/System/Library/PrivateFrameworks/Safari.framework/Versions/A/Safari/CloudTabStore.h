@class NSString, CloudTabKeyValueStore, NSTimer;

@interface CloudTabStore : WBSCloudTabStore <WBSCloudTabStoreDelegate> {
    CloudTabKeyValueStore *_keyValueStore;
    NSTimer *_saveTabsTimer;
    double _lastSaveTabsTimerInterval;
    BOOL _shouldFinishRefreshingCloudTabsSupportedAfterCloudTabKeyValueStoreDictionaryIsAvailable;
    BOOL _shouldFinishRefreshingCloudTabsSupportedAfterCloudKitFetchCompletes;
    BOOL _shouldUpdateBothKVSAndCloudKitAfterFinishingRefreshOfCloudTabsSupported;
    BOOL _didAttemptToCloseAtLeastOneTab;
}

@property (nonatomic) BOOL cloudTabsSupported;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)_browserTabQualifiesForCloudTabSyncing:(id)a0;
+ (id)_cloudTabForTabGroupTab:(id)a0;
+ (BOOL)_tabGroupTabQualifiesForCloudTabSyncing:(id)a0;
+ (BOOL)browserTabQualifiesForUserActivityContinuation:(id)a0;
+ (id)cloudTabForBrowserTab:(id)a0;
+ (id)sharedCloudTabStore;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)_closeRequestedTabIfPossible:(id)a0;
- (id)_currentDeviceUUID;
- (id)_keyValueStoreDictionaryRepresentation:(long long)a0;
- (void)_removeObjectFromKeyValueStore:(long long)a0 forKey:(id)a1;
- (void)_setDictionaryInKeyValueStore:(long long)a0 dictionary:(id)a1 forKey:(id)a2;
- (BOOL)closeAllTabsOnDevice:(id)a0;
- (BOOL)closeTab:(id)a0 onDevice:(id)a1;
- (void)didUpdateDevicesAndCloseRequestsFromCloudKitForCloudTabStore:(id)a0 error:(id)a1;
- (id)syncedCloudTabDevices;
- (id)_allBrowserTabViewItemsInCloudTabOrder;
- (id)_allNormalBrowsingWindow;
- (BOOL)_atLeastOneOtherActiveDeviceIsRegistered;
- (void)_cancelPendingSaveTabsForCurrentDevice;
- (void)_clearTabsForCurrentDeviceBlockingUntilDone:(BOOL)a0;
- (void)_clearTabsForFirstDuplicateDevice;
- (void)_cloudKitDataWasUpdatedOnServer:(id)a0;
- (BOOL)_currentDeviceIsRegistered;
- (id)_currentDeviceName;
- (double)_delayForSavingCurrentCloudTabDevice;
- (id)_dictionaryForCurrentDeviceWithBrowserTabs:(id)a0;
- (id)_dictionaryForCurrentDeviceWithTabGroupTabs:(id)a0;
- (void)_finishRefreshingCloudTabsSupported;
- (void)_handleQuotaViolation;
- (BOOL)_hasCloudTabsEntitlementForKVS;
- (void)_iCloudLoggedInStateMayHaveChanged:(id)a0;
- (void)_keyValueStoreDictionaryRepresentationDidChange:(id)a0;
- (void)_keyValueStoreDidChangeExternally:(long long)a0 notification:(id)a1;
- (void)_refreshCloudTabsSupported;
- (void)_saveTabsForCurrentDeviceAfterDelay:(double)a0;
- (void)_saveTabsForCurrentDeviceDelayTimerFired;
- (BOOL)_saveTabsForCurrentDeviceForcingSaveEvenIfUnchanged:(BOOL)a0 blockUntilDone:(BOOL)a1;
- (BOOL)_shouldSaveCurrentDeviceDictionary:(id)a0;
- (BOOL)_shouldUseCloudKitForSavingCurrentDevice;
- (id)_tabGroupTabsForCloudTab;
- (void)_updateAfterCloudKitDataChangePostingChangeNotification:(BOOL)a0;
- (void)_updateAfterKeyValueStoreChangePostingChangeNotification:(BOOL)a0;
- (void)clearTabsForCurrentDevice;
- (void)debugClearTabsForAllDevices;
- (void)saveTabsForCurrentDeviceAndWaitForOperationsToComplete;
- (void)saveTabsForCurrentDeviceSoon;

@end
