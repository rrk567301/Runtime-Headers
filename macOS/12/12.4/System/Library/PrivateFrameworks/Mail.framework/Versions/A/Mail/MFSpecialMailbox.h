@class NSString;

@interface MFSpecialMailbox : MFMailbox

@property (nonatomic) BOOL forceDisplayNameForMultipleChildren;
@property (readonly, copy, nonatomic) NSString *underlyingName;

+ (id)trashMailbox;
+ (id)specialMailboxForMailboxType:(int)a0;
+ (id)outboxMailbox;
+ (id)inboxMailbox;
+ (id)draftsMailbox;
+ (id)sentMessagesMailbox;
+ (id)junkMailbox;
+ (id)archiveMailbox;
+ (id)flagMailboxes;
+ (id)specialMailboxWithIdentifier:(id)a0;
+ (id)appleScriptNameForMailboxType:(int)a0;
+ (id)visibleFlagMailboxes;
+ (id)VIPSendersMailbox;
+ (void)updateVisibleFlagMailboxes;
+ (id)allMailboxesMailbox;
+ (id)flagsMailbox;
+ (void)readFlagMailboxesFromDiskForFlagMailboxes:(id)a0;
+ (id)_inboxMailboxForFavoritesV2;
+ (id)_sentMessagesMailboxForFavoritesV2;
+ (id)_draftsMailboxForFavoritesV2;
+ (id)_junkMailboxForFavoritesV2;
+ (id)_trashMailboxForFavoritesV2;
+ (id)_archiveMailboxForFavoritesV2;

- (void).cxx_destruct;
- (id)displayName;
- (id)objectSpecifier;
- (id)childAtIndex:(unsigned long long)a0;
- (id)children;
- (unsigned long long)displayCount;
- (id)account;
- (id)criteria;
- (void)setCriteria:(id)a0;
- (id)messages;
- (unsigned long long)numberOfChildren;
- (id)criterion;
- (unsigned long long)indexOfChild:(id)a0;
- (id)_loadUserInfo;
- (void)setAllCriteriaMustBeSatisfied:(BOOL)a0;
- (id)persistentUIIdentifier;
- (BOOL)allCriteriaMustBeSatisfied;
- (void)saveUserInfo;
- (BOOL)hasMessages;
- (unsigned long long)numberOfSortedChildrenHidingGmail:(BOOL)a0;
- (id)sortedChildAtIndex:(unsigned long long)a0 hidingGmail:(BOOL)a1;
- (unsigned long long)numberOfVisibleChildrenHidingGmail:(BOOL)a0;
- (id)childEnumeratorIncludingHiddenChildren:(BOOL)a0;
- (id)visibleChildAtIndex:(unsigned long long)a0;
- (void)enumerateVisibleChildrenHidingGmail:(BOOL)a0 usingBlock:(id /* block */)a1;
- (id)mutableCopyOfChildrenIncludingHiddenChildren:(BOOL)a0 hidingGmail:(BOOL)a1;
- (unsigned long long)indexToInsertChildMailbox:(id)a0;
- (void)_updateDontIndexFlagFile;
- (id)_initWithName:(id)a0 underlyingName:(id)a1 type:(int)a2 uuid:(id)a3;
- (id)_specialMailboxIdentifier;
- (id)_viewerAttributesKey;
- (id)appleScriptKey;

@end
