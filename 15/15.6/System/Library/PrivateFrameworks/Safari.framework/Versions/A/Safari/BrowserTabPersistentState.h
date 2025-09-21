@class NSData, NSString, NSURL, NSArray, NSUUID, NSDate, NSDictionary, BrowserViewController, WBTab, WBLocalTabAttributes;
@protocol WBSEncryptionProvider;

@interface BrowserTabPersistentState : NSObject <BrowserPersistentState> {
    BrowserViewController *_browserViewController;
    NSArray *_deprecatedAncestorTabIdentifiers;
    id<WBSEncryptionProvider> _encryptionProvider;
    int _processIdentifier;
    char _supportsSafeToLoadWebPage;
}

@property (readonly, nonatomic) NSURL *url;
@property (readonly, copy, nonatomic) NSString *title;
@property (readonly, nonatomic) double lastVisitTime;
@property (readonly, nonatomic) NSData *sessionStateData;
@property (readonly, copy, nonatomic) NSDictionary *queuedNavigation;
@property (readonly, nonatomic) unsigned int deprecatedTabIdentifier;
@property (readonly, nonatomic) NSArray *ancestorTabUUIDs;
@property (readonly, nonatomic) NSUUID *tabUUID;
@property (readonly, copy, nonatomic) NSString *titleForMenu;
@property (readonly, nonatomic) unsigned long long tabIndex;
@property (readonly, nonatomic) NSUUID *windowUUID;
@property (readonly, nonatomic, getter=isDisposable) char disposable;
@property (readonly, nonatomic, getter=isPinned) char pinned;
@property (readonly, nonatomic) NSURL *pinnedPageURL;
@property (readonly, copy, nonatomic) NSString *pinnedPageTitle;
@property (nonatomic) char restoredFromPersistentData;
@property (readonly, nonatomic) char shouldDeferRestorationUntilSelected;
@property (readonly, nonatomic, getter=isSafeToLoadWebPage) char safeToLoadWebPage;
@property (readonly, nonatomic, getter=isMuted) char muted;
@property (readonly, copy, nonatomic) NSString *tabGroupUUID;
@property (readonly, nonatomic, getter=isInUnnamedTabGroup) char inUnnamedTabGroup;
@property (copy, nonatomic) NSString *profileIdentifier;
@property (readonly, nonatomic) WBTab *tabGroupTab;
@property (readonly, nonatomic) WBLocalTabAttributes *tabGroupTabLocalAttributes;
@property (readonly, nonatomic) NSDate *dateClosed;
@property (readonly, nonatomic) long long closedItemType;
@property (readonly, copy, nonatomic) NSArray *tabUUIDs;
@property (readonly, nonatomic) unsigned long long numberOfTabs;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)_generateSessionDataForBuiltInURL:(id)a0;
+ (id)persistentStatesByMigratingDeprecatedTabIdentifiers:(id)a0;
+ (id)sessionDataWithBuiltInURL:(id)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)initWithURL:(id)a0 title:(id)a1;
- (id)initWithTab:(id)a0 encryptionProvider:(id)a1;
- (id)copyWithNewUUID;
- (char)_safeToLoadWebPageFromCurrentLoadingState;
- (void)_setTitleAndURLFromBrowserTabViewItem:(id)a0;
- (id)_tabGroupTabLocalAttributesIncludingSessionState:(char)a0;
- (id)browserTabPersistentStateForRegisteringWithUndoForClosingBrowserTabViewItem:(id)a0;
- (void)clearSessionState;
- (id)copyWithAncestorTabUUIDs:(id)a0;
- (id)copyWithNewTabIndex:(unsigned long long)a0;
- (id)copyWithNewUUIDRemovingPinnedTabData;
- (id)dictionaryRepresentationIncludingSessionState:(char)a0 forCleanExit:(char)a1;
- (id)initWithBrowserTabViewItem:(id)a0 encryptionProvider:(id)a1;
- (id)initWithBrowserTabViewItem:(id)a0 encryptionProvider:(id)a1 includingSessionState:(char)a2;
- (id)initWithDataFromTab:(id)a0 encryptionProvider:(id)a1;
- (id)initWithDictionaryRepresentation:(id)a0 encryptionProvider:(id)a1;
- (id)initWithPinnedPageURL:(id)a0 pinnedPageTitle:(id)a1 tab:(id)a2 encryptionProvider:(id)a3;
- (id)initWithURL:(id)a0 title:(id)a1 uuid:(id)a2;
- (id)tabGroupTabLocalAttributesWithSessionStateData:(id)a0;

@end
