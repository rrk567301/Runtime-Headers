@class NSString, NSObject;
@protocol OS_os_log;

@interface MFSpecialMailbox : MFMailbox <EFLoggable>

@property (class, readonly) NSObject<OS_os_log> *log;

@property (nonatomic) BOOL forceDisplayNameForMultipleChildren;
@property (readonly, copy, nonatomic) NSString *underlyingName;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sendLaterMailbox;
+ (id)outboxMailbox;
+ (id)specialMailboxWithIdentifier:(id)a0;
+ (id)specialMailboxForMailboxType:(int)a0;
+ (id)inboxMailbox;
+ (id)sentMessagesMailbox;
+ (id)draftsMailbox;
+ (id)junkMailbox;
+ (id)followUpMailbox;
+ (id)readLaterMailbox;
+ (id)trashMailbox;
+ (id)archiveMailbox;
+ (id)flagsMailbox;
+ (id)VIPSendersMailbox;
+ (id)allMailboxesMailbox;
+ (id)flagMailboxes;
+ (void)updateVisibleFlagMailboxes;
+ (id)visibleFlagMailboxes;
+ (void)readFlagMailboxesFromDiskForFlagMailboxes:(id)a0;
+ (id)appleScriptNameForMailboxType:(int)a0;
+ (id)_inboxMailboxForFavoritesV2;
+ (id)_sentMessagesMailboxForFavoritesV2;
+ (id)_draftsMailboxForFavoritesV2;
+ (id)_junkMailboxForFavoritesV2;
+ (id)_trashMailboxForFavoritesV2;
+ (id)_archiveMailboxForFavoritesV2;

- (void).cxx_destruct;
- (id)displayName;
- (id)objectSpecifier;
- (id)children;
- (id)childAtIndex:(unsigned long long)a0;
- (id)account;
- (unsigned long long)displayCount;
- (id)criteria;
- (void)setCriteria:(id)a0;
- (id)messages;
- (unsigned long long)numberOfChildren;
- (id)criterion;
- (unsigned long long)indexOfChild:(id)a0;
- (id)_loadUserInfo;
- (BOOL)hasMessages;
- (BOOL)allCriteriaMustBeSatisfied;
- (void)setAllCriteriaMustBeSatisfied:(BOOL)a0;
- (id)persistentUIIdentifier;
- (unsigned long long)numberOfVisibleChildrenHidingGmail:(BOOL)a0;
- (unsigned long long)numberOfSortedChildrenHidingGmail:(BOOL)a0;
- (id)childEnumeratorIncludingHiddenChildren:(BOOL)a0;
- (id)visibleChildAtIndex:(unsigned long long)a0;
- (void)enumerateVisibleChildrenHidingGmail:(BOOL)a0 usingBlock:(id /* block */)a1;
- (id)sortedChildAtIndex:(unsigned long long)a0 hidingGmail:(BOOL)a1;
- (id)mutableCopyOfChildrenIncludingHiddenChildren:(BOOL)a0 hidingGmail:(BOOL)a1;
- (unsigned long long)indexToInsertChildMailbox:(id)a0;
- (void)_updateDontIndexFlagFile;
- (void)saveUserInfo;
- (id)_initWithName:(id)a0 underlyingName:(id)a1 type:(int)a2 uuid:(id)a3;
- (id)_readLaterChildren;
- (id)_followUpChildren;
- (unsigned long long)displayCountUsingCurrentFocus:(id)a0;
- (id)_specialMailboxIdentifier;
- (id)_viewerAttributesKey;
- (id)appleScriptKey;

@end
