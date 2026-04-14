@class NSUUID, NSString, NSArray, NSDate, WBWindowState, NSDictionary, NSMutableArray, BrowserTabPersistentState;

@interface BrowserWindowPersistentState : NSObject <BrowserTabCollectionPersistentState> {
    NSMutableArray *_tabStates;
    unsigned long long _selectedUnpinnedTabIndex;
    unsigned long long _selectedPinnedTabIndex;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _windowContentRect;
    NSString *_customUnifiedFieldText;
    BOOL _favoritesBarHidden;
    BOOL _prefersSidebarVisible;
    BOOL _isPopupWindow;
}

@property (readonly, nonatomic, getter=isPrivateWindow) BOOL privateWindow;
@property (readonly, nonatomic) NSDate *dateClosed;
@property (readonly, nonatomic) NSUUID *windowUUID;
@property (nonatomic) BOOL isMinimized;
@property (readonly, nonatomic, getter=isTabBarHidden) BOOL tabBarHidden;
@property (readonly, nonatomic) BrowserTabPersistentState *selectedTab;
@property (readonly, nonatomic) BOOL hasTabsToRestore;
@property (readonly, copy, nonatomic) NSString *activeTabGroupUUID;
@property (readonly, copy, nonatomic) NSDictionary *extraAttributes;
@property (readonly, nonatomic) WBWindowState *windowState;
@property (readonly, nonatomic) long long unifiedSidebarMode;
@property (readonly, nonatomic) unsigned long long numberOfNonDisposableTabs;
@property (readonly, copy, nonatomic) NSArray *closedTabs;
@property (readonly, nonatomic) long long closedItemType;
@property (readonly, copy, nonatomic) NSArray *tabUUIDs;
@property (readonly, nonatomic) unsigned long long numberOfTabs;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (BOOL)containsAnyURLs;
- (id)dictionaryRepresentationIncludingSessionState:(BOOL)a0 forCleanExit:(BOOL)a1;
- (id)initWithBrowserWindowController:(id)a0 encryptionProvider:(id)a1;
- (id)initWithDictionaryRepresentation:(id)a0 encryptionProvider:(id)a1;
- (BOOL)containsTabStateWithUUID:(id)a0;
- (void)removeTabStateWithUUID:(id)a0;
- (void)removeStateWithURLs:(id)a0;
- (void)enumerateTabStatesUsingBlock:(id /* block */)a0;
- (id)initWithBrowserWindowController:(id)a0 encryptionProvider:(id)a1 skipTabStates:(BOOL)a2;
- (void)_initWithDictionaryRepresentationCommon:(id)a0;
- (id)_initWithV1DictionaryRepresentation:(id)a0 encryptionProvider:(id)a1;
- (id)_initWithV2DictionaryRepresentation:(id)a0 encryptionProvider:(id)a1;
- (id)initWithWindowState:(id)a0 tabGroups:(id)a1 encryptionProvider:(id)a2;
- (BOOL)_shouldRestoreTabStateInWindow:(id)a0;
- (id)_tabStatesToRestore;
- (void)restoreBrowserWindow;
- (void)restoreWindowContents:(id)a0;
- (void)_updateWindowStateWithDictionaryRepresentation:(id)a0;
- (void)discardAndRecreateWindowState;
- (id)_extraAttributesWithDictionaryRepresentation:(id)a0;

@end
