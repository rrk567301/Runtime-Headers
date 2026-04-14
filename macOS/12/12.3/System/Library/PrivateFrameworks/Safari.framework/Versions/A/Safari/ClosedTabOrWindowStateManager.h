@class NSObject, NSString, NSMutableDictionary, NSMutableArray, WBSCoalescedAsynchronousWriter;
@protocol OS_dispatch_queue, TabSnapshotSensitiveDataPurging, EncryptionProvider;

@interface ClosedTabOrWindowStateManager : NSObject <ClosedTabOrWindowMenuBuilderMenuActionTarget> {
    NSMutableArray *_closedTabOrWindowPersistentStates;
    WBSCoalescedAsynchronousWriter *_recentlyClosedTabsOrWindowsWriter;
    NSObject<OS_dispatch_queue> *_loadClosedTabsDataFromDiskSynchronizationQueue;
    struct atomic<LoadingStatus> { struct __cxx_atomic_impl<LoadingStatus, std::__cxx_atomic_base_impl<LoadingStatus>> { _Atomic long long __a_value; } __a_; } _savedStateLoadingStatus;
    NSMutableDictionary *_closingWindowUUIDsToClosedTabStateArrays;
    id<TabSnapshotSensitiveDataPurging> _purger;
    id<EncryptionProvider> _encryptionProvider;
}

@property unsigned long long numberOfSavedTabStates;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedManager;

- (id)init;
- (void).cxx_destruct;
- (id)_dictionaryRepresentation;
- (void)clearStates;
- (void)savePendingChangesBeforeTermination;
- (void)_historyItemsWereRemoved:(id)a0;
- (void)performDelayedLaunchOperations;
- (id)closedStates;
- (id)initWithTabSnapshotSensitiveDataPurger:(id)a0 encryptionProvider:(id)a1;
- (BOOL)containsAnySavedState;
- (void)saveRestoredWindowState:(id)a0;
- (void)didReopenAllWindowsInSession:(id)a0;
- (void)reopenLastClosedTabOrWindow;
- (void)closeTabGroupWhileRedoing:(id)a0 inWindow:(id)a1;
- (void)windowDidRestoreReplacedTabGroup:(id)a0;
- (void)registerClosedState:(id)a0;
- (void)beginClosingBrowserWindowController:(id)a0;
- (BOOL)isClosingBrowserWindowController:(id)a0;
- (void)endClosingBrowserWindowController:(id)a0;
- (void)cancelClosingBrowserWindowController:(id)a0;
- (void)undoClosedTabWithUUID:(id)a0 inWindowWithUUID:(id)a1;
- (void)undoCloseTabGroupWithUUID:(id)a0;
- (void)closeTabWithoutConfirmingWithUUID:(id)a0 inWindow:(id)a1;
- (void)clearStatesAddedAfterDate:(id)a0 beforeDate:(id)a1;
- (void)reopenTabFromPersistentStateIntoActiveWindowConsultingPagesOpenInWindowsInsteadOfTabsPreference:(id)a0;
- (void)reopenWindowFromPersistentState:(id)a0;
- (void)reopenTabGroupFromPersistentState:(id)a0;
- (void)reopenTabFromPersistentStateIntoActiveWindow:(id)a0;
- (void)_removeAllState;
- (void)_loadRecentlyClosedTabsOrWindowsFromDisk;
- (void)_waitUntilStateHasLoadedFromDisk;
- (void)_removeState:(id)a0;
- (void)_restoreTabWithState:(id)a0 placement:(long long)a1;
- (void)_restoreWindowWithState:(id)a0;
- (void)_didReopenTabOrWindow;
- (void)_didReopenTabOrWindowFromPersistedState;
- (void)_removeTabPersistentState:(id)a0;
- (id)_destinationBrowserWindowControllerToRestoreTabState;
- (void)_restoreTabWithState:(id)a0 atIndex:(unsigned long long)a1 inWindowWithUUID:(id)a2;
- (void)_didUndoTabOrTabGroupClose;
- (void)_performInternalBookkeepingWithAddedState:(id)a0;
- (void)_pruneSavedStates;
- (void)_recentlyClosedTabsOrWindowsStateDidChange;
- (BOOL)_registerTabStateForWindowIfNeeded:(id)a0;
- (void)_updateNumberOfSavedTabStatesWithRemovedState:(id)a0;
- (unsigned long long)_maximumNumberOfTabStatesToPersist;
- (void)_invalidateUndoClosedTabForAllWindows;
- (void)_removeStatesInArray:(id)a0;
- (id)_recentlyClosedTabsOrWindowsFileURL;
- (void)_performInternalBookkeepingWithAddedStates:(id)a0;
- (id)_closedStatesToPersist;
- (long long)typeOfLastClosedTabOrWindowState;

@end
