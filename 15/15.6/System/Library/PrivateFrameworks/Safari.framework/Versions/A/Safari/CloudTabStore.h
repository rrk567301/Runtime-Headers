@class NSString, NSTimer;

@interface CloudTabStore : WBSCloudTabStore <WBSCloudTabStoreDelegate> {
    NSTimer *_saveTabsTimer;
    double _lastSaveTabsTimerInterval;
    char _shouldFinishRefreshingCloudTabsSupportedAfterCloudKitFetchCompletes;
    char _didAttemptToCloseAtLeastOneTab;
}

@property (nonatomic) char cloudTabsSupported;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (char)_browserTabQualifiesForCloudTabSyncing:(id)a0;
+ (id)_cloudTabForTabGroupTab:(id)a0;
+ (char)_tabGroupTabQualifiesForCloudTabSyncing:(id)a0;
+ (char)browserTabQualifiesForUserActivityContinuation:(id)a0;
+ (id)cloudTabForBrowserTab:(id)a0;
+ (id)sharedCloudTabStore;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)_closeRequestedTabIfPossible:(id)a0;
- (id)_currentDeviceUUID;
- (char)closeAllTabsOnDevice:(id)a0;
- (char)closeTab:(id)a0 onDevice:(id)a1;
- (void)didUpdateDevicesAndCloseRequestsFromCloudKitForCloudTabStore:(id)a0 error:(id)a1;
- (id)syncedCloudTabDevices;
- (id)_allBrowserTabViewItemsInCloudTabOrder;
- (id)_allNormalBrowsingWindow;
- (char)_atLeastOneOtherActiveDeviceIsRegistered;
- (void)_cancelPendingSaveTabsForCurrentDevice;
- (void)_clearTabsForFirstDuplicateDevice;
- (void)_cloudKitDataWasUpdatedOnServer:(id)a0;
- (char)_currentDeviceIsRegistered;
- (id)_currentDeviceName;
- (double)_delayForSavingCurrentCloudTabDevice;
- (id)_dictionaryForCurrentDeviceWithBrowserTabs:(id)a0;
- (id)_dictionaryForCurrentDeviceWithTabGroupTabs:(id)a0;
- (void)_finishRefreshingCloudTabsSupported;
- (void)_iCloudLoggedInStateMayHaveChanged:(id)a0;
- (void)_postChangeNotification;
- (void)_refreshCloudTabsSupported;
- (void)_saveTabsForCurrentDeviceAfterDelay:(double)a0;
- (void)_saveTabsForCurrentDeviceDelayTimerFired;
- (void)_saveTabsForCurrentDeviceForcingSaveEvenIfUnchanged:(char)a0;
- (char)_shouldSaveCurrentDeviceDictionary:(id)a0;
- (id)_tabGroupTabsForCloudTab;
- (void)clearTabsForCurrentDevice;
- (void)debugClearTabsForAllDevices;
- (void)saveTabsForCurrentDevice;
- (void)saveTabsForCurrentDeviceSoon;

@end
