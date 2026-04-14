@class NSString, NSTimer, NSDate, CloudTabKeyValueStore;

@interface CloudTabStore : WBSCloudTabStore <WBSCloudTabStoreDelegate> {
    CloudTabKeyValueStore *_keyValueStore;
    NSTimer *_saveTabsTimer;
    double _lastSaveTabsTimerInterval;
    BOOL _shouldFinishRefreshingCloudTabsSupportedAfterCloudTabKeyValueStoreDictionaryIsAvailable;
    BOOL _shouldFinishRefreshingCloudTabsSupportedAfterCloudKitFetchCompletes;
    BOOL _shouldUpdateBothKVSAndCloudKitAfterFinishingRefreshOfCloudTabsSupported;
    BOOL _didAttemptToCloseAtLeastOneTab;
    NSDate *_dateOfLastCloudTabDevicesUpdate;
}

@property (nonatomic) BOOL cloudTabsSupported;
@property (nonatomic) BOOL suppressSavingTabs;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedCloudTabStore;
+ (BOOL)browserTabQualifiesForUserActivityContinuation:(id)a0;
+ (id)cloudTabForBrowserTab:(id)a0;
+ (BOOL)_tabGroupTabQualifiesForCloudTabSyncing:(id)a0;
+ (id)_cloudTabForTabGroupTab:(id)a0;
+ (BOOL)_browserTabQualifiesForCloudTabSyncing:(id)a0;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (id)_keyValueStoreDictionaryRepresentation:(long long)a0;
- (void)_removeObjectFromKeyValueStore:(long long)a0 forKey:(id)a1;
- (id)_currentDeviceUUID;
- (void)_closeRequestedTabIfPossible:(id)a0;
- (void)_setDictionaryInKeyValueStore:(long long)a0 dictionary:(id)a1 forKey:(id)a2;
- (void)didUpdateDevicesAndCloseRequestsFromCloudKitForCloudTabStore:(id)a0 error:(id)a1;
- (void)synchronizeCloudTabDevicesWithCompletionHandler:(id /* block */)a0;
- (id)syncedCloudTabDevices;
- (id)dateOfLastCloudTabDevicesUpdate;
- (BOOL)closeTab:(id)a0 onDevice:(id)a1;
- (BOOL)closeTabs:(id)a0 onDevice:(id)a1;
- (BOOL)closeAllTabsOnDevice:(id)a0;
- (void)clearTabsForCurrentDevice;
- (void)saveTabsForCurrentDeviceSoon;
- (void)saveTabsForCurrentDeviceAndWaitForOperationsToComplete;
- (void)_cloudKitDataWasUpdatedOnServer:(id)a0;
- (void)_iCloudLoggedInStateMayHaveChanged:(id)a0;
- (void)_refreshCloudTabsSupported;
- (BOOL)_hasCloudTabsEntitlementForKVS;
- (void)_keyValueStoreDidChangeExternally:(long long)a0 notification:(id)a1;
- (void)_cancelPendingSaveTabsForCurrentDevice;
- (void)_saveTabsForCurrentDeviceDelayTimerFired;
- (BOOL)_saveTabsForCurrentDeviceForcingSaveEvenIfUnchanged:(BOOL)a0 blockUntilDone:(BOOL)a1;
- (double)_delayForSavingCurrentCloudTabDevice;
- (void)_saveTabsForCurrentDeviceAfterDelay:(double)a0;
- (BOOL)_shouldUseCloudKitForSavingCurrentDevice;
- (id)_allNormalBrowsingWindow;
- (id)_tabGroupTabsForCloudTab;
- (id)_dictionaryForCurrentDeviceWithTabGroupTabs:(id)a0;
- (id)_allBrowserTabViewItemsInCloudTabOrder;
- (id)_dictionaryForCurrentDeviceWithBrowserTabs:(id)a0;
- (BOOL)_shouldSaveCurrentDeviceDictionary:(id)a0;
- (void)_updateAfterKeyValueStoreChangePostingChangeNotification:(BOOL)a0;
- (void)_clearTabsForCurrentDeviceBlockingUntilDone:(BOOL)a0;
- (void)_handleQuotaViolation;
- (id)_currentDeviceName;
- (BOOL)_atLeastOneOtherActiveDeviceIsRegistered;
- (BOOL)_currentDeviceIsRegistered;
- (void)_clearTabsForFirstDuplicateDevice;
- (void)_keyValueStoreDictionaryRepresentationDidChange:(id)a0;
- (void)_finishRefreshingCloudTabsSupported;
- (void)_updateAfterCloudKitDataChangePostingChangeNotification:(BOOL)a0;
- (void)debugSaveTabsForCurrentDeviceUsingNewUUID;
- (void)debugClearTabsForAllDevices;

@end
