@class NSArray, BrowserWindowController;

@interface PinnedTabsManager : NSObject {
    BrowserWindowController *_browserWindowControllerForMainWindow;
    NSArray *_pinnedTabsStatesToRestore;
    NSArray *_privatePinnedTabsStatesToRestore;
    long long _pinnedTabsChangesSuppressionCounter;
    BOOL _applicationDidFinishLaunching;
    BOOL _isMergingWindows;
    BOOL _shouldReleaseIconsAfterStatesAreRestored;
}

@property (class, readonly, nonatomic) PinnedTabsManager *sharedManager;

@property (readonly, copy, nonatomic) NSArray *pinnedTabs;
@property (readonly, copy, nonatomic) NSArray *privatePinnedTabs;
@property (readonly, copy, nonatomic) NSArray *currentPinnedTabsStates;
@property (readonly, copy, nonatomic) NSArray *currentPrivatePinnedTabsStates;

- (void).cxx_destruct;
- (BOOL)shouldTryClosingPinnedTabsWhenClosingBrowserWindowController:(id)a0;
- (void)windowShouldCloseWasInvokedForBrowserWindowController:(id)a0;
- (void)browserWindowControllerWillClose:(id)a0;
- (void)browserWindowControllerDidBecomeMain:(id)a0;
- (void)browserWindowControllerDidLoad:(id)a0;
- (void)_restorePinnedTabStatesOrSyncPinnedTabs:(id)a0;
- (BOOL)browserWindowControllerCanContainPinnedTabs:(id)a0;
- (BOOL)browserWindowControllerCanContainGlobalPinnedTabs:(id)a0;
- (void)browserWindowControllerSelectedTabGroup:(id)a0 willSelectTabGroup:(id)a1;
- (void)browserWindowControllerSelectedTabGroup:(id)a0 didSelectTabGroup:(id)a1;
- (void)attachAnyDetachedPinnedTabsToExistingWindow;
- (void)windowsWillBeMerged;
- (void)windowsWereMerged;
- (void)tabsDidChangeInBrowserWindowController:(id)a0;
- (void)applicationWillTerminate;
- (void)applicationDidLaunchWithPinnedTabsToRestore:(id)a0 privatePinnedTabsToRestore:(id)a1;
- (void)pinnedTabContentDidMoveFromBrowserTabViewItem:(id)a0 toBrowserTabViewItem:(id)a1;
- (id)findPinnedTabMatchingURL:(id)a0 inBrowserWindowController:(id)a1;
- (void)updatePinnedTabSiteIconsNow;
- (void)_closePlaceholdersAndDetachPinnedTabsInBrowserWindowController:(id)a0;
- (id)_tabsStatesFromBrowserTabViewItems:(id)a0 resetToPinnedPage:(BOOL)a1;
- (void)_restorePinnedTabsInWindow:(id)a0 withStates:(id)a1;
- (void)_startSuppressingPinnedTabsChanges;
- (void)_stopSuppressingPinnedTabsChanges;
- (BOOL)_isSuppressingPinnedTabsChanges;
- (void)_syncCurrentPinnedTabsWithBrowserWindowController:(id)a0;
- (BOOL)_shouldRestoreLastSessionOnLaunch;
- (void)_enumerateBrowserWindowControllersWithPrivateBrowsingEnabled:(BOOL)a0 usingBlock:(id /* block */)a1;
- (BOOL)_hasMoreThanOneWindowWithPrivateBrowsingEnabled:(BOOL)a0;
- (id)_firstWindowToAttachOrphanedPinnedTabsToWithPrivateBrowsingEnabled:(BOOL)a0;
- (void)_attachAnyDetachedPinnedTabsToExistingWindowWithPrivateBrowsingEnabled:(BOOL)a0;
- (void)_retainTemplateIconsInTabs:(id)a0;
- (void)_releaseTemplateIconsInTabs:(id)a0;
- (BOOL)isTabIndexWithinRangeOfCurrentPinnedTabs:(unsigned long long)a0;
- (unsigned long long)_pinnedTabCount;

@end
