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

+ (id)sharedCloudTabStore;
+ (BOOL)_tabGroupTabQualifiesForCloudTabSyncing:(id)a0;
+ (BOOL)_browserTabQualifiesForCloudTabSyncing:(id)a0;
+ (BOOL)browserTabQualifiesForUserActivityContinuation:(id)a0;
+ (id)cloudTabForBrowserTab:(id)a0;
+ (id)_cloudTabForTabGroupTab:(id)a0;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)didUpdateDevicesAndCloseRequestsFromCloudKitForCloudTabStore:(id)a0 error:(id)a1;
- (id)syncedCloudTabDevices;
- (BOOL)closeTab:(id)a0 onDevice:(id)a1;
- (BOOL)closeTabs:(id)a0 onDevice:(id)a1;
- (BOOL)closeAllTabsOnDevice:(id)a0;
- (id)_currentDeviceUUID;
- (id)_keyValueStoreDictionaryRepresentation:(long long)a0;
- (void)_setDictionaryInKeyValueStore:(long long)a0 dictionary:(id)a1 forKey:(id)a2;
- (void)_removeObjectFromKeyValueStore:(long long)a0 forKey:(id)a1;
- (void)_closeRequestedTabIfPossible:(id)a0;
- (void)_cloudKitDataWasUpdatedOnServer:(id)a0;
- (void)_iCloudLoggedInStateMayHaveChanged:(id)a0;
- (void)_saveTabsForCurrentDeviceDelayTimerFired;
- (void)_keyValueStoreDictionaryRepresentationDidChange:(id)a0;
- (void)_saveTabsForCurrentDeviceAfterDelay:(double)a0;
- (void)saveTabsForCurrentDeviceSoon;
- (void)saveTabsForCurrentDeviceAndWaitForOperationsToComplete;
- (BOOL)_shouldSaveCurrentDeviceDictionary:(id)a0;
- (id)_allNormalBrowsingWindow;
- (id)_tabGroupTabsForCloudTab;
- (id)_allBrowserTabViewItemsInCloudTabOrder;
- (BOOL)_saveTabsForCurrentDeviceForcingSaveEvenIfUnchanged:(BOOL)a0 blockUntilDone:(BOOL)a1;
- (void)_clearTabsForCurrentDeviceBlockingUntilDone:(BOOL)a0;
- (void)clearTabsForCurrentDevice;
- (void)debugClearTabsForAllDevices;
- (void)_keyValueStoreDidChangeExternally:(long long)a0 notification:(id)a1;
- (void)_updateAfterKeyValueStoreChangePostingChangeNotification:(BOOL)a0;
- (void)_updateAfterCloudKitDataChangePostingChangeNotification:(BOOL)a0;
- (id)_currentDeviceName;
- (id)_dictionaryForCurrentDeviceWithTabGroupTabs:(id)a0;
- (id)_dictionaryForCurrentDeviceWithBrowserTabs:(id)a0;
- (void)_cancelPendingSaveTabsForCurrentDevice;
- (BOOL)_currentDeviceIsRegistered;
- (double)_delayForSavingCurrentCloudTabDevice;
- (BOOL)_atLeastOneOtherActiveDeviceIsRegistered;
- (void)_clearTabsForFirstDuplicateDevice;
- (BOOL)_hasCloudTabsEntitlementForKVS;
- (void)_finishRefreshingCloudTabsSupported;
- (void)_refreshCloudTabsSupported;
- (void)_handleQuotaViolation;
- (BOOL)_shouldUseCloudKitForSavingCurrentDevice;

@end
