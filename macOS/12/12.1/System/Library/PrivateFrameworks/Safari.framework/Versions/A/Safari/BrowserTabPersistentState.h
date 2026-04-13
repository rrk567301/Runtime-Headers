@class NSDate, NSString, NSURL, NSData, NSArray, NSUUID, NSDictionary, BrowserViewController, WBTab;
@protocol EncryptionProvider;

@interface BrowserTabPersistentState : NSObject <BrowserPersistentState> {
    BrowserViewController *_browserViewController;
    id<EncryptionProvider> _encryptionProvider;
    int _processIdentifier;
    BOOL _supportsSafeToLoadWebPage;
}

@property (readonly, nonatomic) NSURL *url;
@property (readonly, copy, nonatomic) NSString *title;
@property (readonly, nonatomic) double lastVisitTime;
@property (readonly, nonatomic) NSData *sessionStateData;
@property (readonly, copy, nonatomic) NSDictionary *queuedNavigation;
@property (readonly, nonatomic) unsigned int deprecatedTabIdentifier;
@property (readonly, nonatomic) struct Vector<unsigned int, 0, WTF::CrashOnOverflow, 16, WTF::FastMalloc> { unsigned int *m_buffer; unsigned int m_capacity; unsigned int m_size; } deprecatedAncestorTabIdentifiers;
@property (readonly, nonatomic) NSArray *ancestorTabUUIDs;
@property (readonly, nonatomic) NSUUID *tabUUID;
@property (readonly, nonatomic) NSDate *dateClosed;
@property (readonly, copy, nonatomic) NSString *titleForMenu;
@property (readonly, nonatomic) unsigned long long tabIndex;
@property (readonly, nonatomic) NSUUID *windowUUID;
@property (readonly, nonatomic, getter=isDisposable) BOOL disposable;
@property (readonly, nonatomic, getter=isPinned) BOOL pinned;
@property (readonly, nonatomic) NSURL *pinnedPageURL;
@property (readonly, copy, nonatomic) NSString *pinnedPageTitle;
@property (nonatomic) BOOL restoredFromPersistentData;
@property (readonly, nonatomic) BOOL shouldDeferRestorationUntilSelected;
@property (readonly, nonatomic, getter=isSafeToLoadWebPage) BOOL safeToLoadWebPage;
@property (readonly, nonatomic, getter=isMuted) BOOL muted;
@property (readonly, nonatomic) WBTab *tabGroupTab;
@property (readonly, nonatomic) long long closedItemType;
@property (readonly, copy, nonatomic) NSArray *tabUUIDs;
@property (readonly, nonatomic) unsigned long long numberOfTabs;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sessionDataWithBuiltInURL:(id)a0;
+ (id)persistentStatesByMigratingDeprecatedTabIdentifiers:(id)a0;
+ (id)_generateSessionDataForBuiltInURL:(id)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id).cxx_construct;
- (id)initWithURL:(id)a0 title:(id)a1;
- (id)initWithDictionaryRepresentation:(id)a0 encryptionProvider:(id)a1;
- (id)initWithTab:(id)a0 encryptionProvider:(id)a1;
- (id)dictionaryRepresentationIncludingSessionState:(BOOL)a0 forCleanExit:(BOOL)a1;
- (id)copyWithNewTabIndex:(unsigned long long)a0;
- (id)initWithBrowserTabViewItem:(id)a0 encryptionProvider:(id)a1;
- (void)clearSessionState;
- (void)_setTitleAndURLFromBrowserTabViewItem:(id)a0;
- (id)initWithURL:(id)a0 title:(id)a1 uuid:(id)a2;
- (BOOL)_safeToLoadWebPageFromCurrentLoadingState;
- (id)copyWithAncestorTabUUIDs:(id)a0;
- (id)initWithPinnedPageURL:(id)a0 pinnedPageTitle:(id)a1 encryptionProvider:(id)a2;
- (id)copyWithNewUUID;
- (id)copyWithNewUUIDRemovingPinnedTabData;
- (id)browserTabPersistentStateForRegisteringWithUndoForClosingBrowserTabViewItem:(id)a0;

@end
