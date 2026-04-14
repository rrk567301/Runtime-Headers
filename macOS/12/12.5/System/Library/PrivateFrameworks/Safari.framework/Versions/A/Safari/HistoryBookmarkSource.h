@class NSMapTable, NSString, NSArray, NSDateFormatter, NSMenu, NSMenuItem, NSDate;

@interface HistoryBookmarkSource : BookmarkSource <NSMenuDelegate> {
    NSMenu *_historyMenu;
    NSMenuItem *_recentlyClosedSubmenuMenuItem;
    NSMenuItem *_reopenRecentlyClosedTabsMenuItem;
    unsigned long long _builtInHistoryMenuItemsCount;
    BOOL _isHistoryMenuUpToDate;
    NSArray *_sessions;
    NSDate *_oldestDateLoaded;
    NSDateFormatter *_dateFormatter;
    NSMapTable *_bookmarkCache;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedSource;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)menuNeedsUpdate:(id)a0;
- (BOOL)menuHasKeyEquivalent:(id)a0 forEvent:(id)a1 target:(id *)a2 action:(SEL *)a3;
- (void)menuWillOpen:(id)a0;
- (void)refreshContents;
- (void)performDelayedLaunchOperations;
- (void)setHistoryMenu:(id)a0;
- (BOOL)contentItemCanHaveChildren:(id)a0;
- (unsigned int)numberOfChildrenOfContentItem:(id)a0;
- (id)imageForContentItem:(id)a0;
- (id)imageURLStringForContentItem:(id)a0;
- (id)bookmarkFromContentItem:(id)a0;
- (id)contentItemsToInitiallyExpand;
- (id)addressStringForContentItem:(id)a0;
- (BOOL)canDeleteContents;
- (id)child:(unsigned int)a0 ofContentItem:(id)a1;
- (BOOL)contentItemCanBeSearchResult:(id)a0;
- (id)parentOfContentItem:(id)a0;
- (id)titleStringForContentItem:(id)a0;
- (BOOL)deleteContentItems:(id)a0;
- (id)bookmarksFromContentItems:(id)a0;
- (id)bookmarkSourceImage;
- (void)_historySessionsDidChange:(id)a0;
- (void)_recentlyClosedTabsOrWindowsDidChange;
- (void)_updateHistoryMenu;
- (BOOL)_addItemsForSession:(id)a0 toMenu:(id)a1 skip:(unsigned int)a2 limit:(unsigned int)a3;
- (long long)_windowItemPolicyForClosedStates:(id)a0;
- (id)_entriesFromMixedItems:(id)a0;
- (void)_generateSessionsAfterDate:(id)a0;
- (void)_generateSessionsForHistoryViewIfNecessary;
- (id)_titleForSession:(id)a0;
- (id)_displayedTitleForEntry:(id)a0;
- (void)_removeHistoryFromMenu;
- (void)_updateRecentlyClosedSubmenu;
- (void)_updateReopenRecentlyClosedTabsMenuItem;
- (void)_appendHistoryToMenu;
- (void)_clearHistoryFromMenu:(id)a0;
- (void)_clearHistoryAndKeepWebsiteDataFromMenu:(id)a0;
- (void)_takeLocationFromHistoryEntry:(id)a0;
- (void)_addHistoryEntry:(id)a0 toMenu:(id)a1;
- (long long)_tabGroupItemPolicyWithWindowPolicy:(long long)a0;
- (void)_generateSessionsForHistoryMenuIfNecessary;
- (int)_recentHistoryLimit;
- (id)_addSubmenu:(id)a0 withTitle:(id)a1;
- (BOOL)deleteContentItems:(id)a0 withParentWindow:(id)a1 undoManager:(id)a2;
- (BOOL)validate__takeLocationFromHistoryEntry:(id)a0;

@end
