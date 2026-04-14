@class MFMailbox;

@interface MFLocalAccount : MFMailAccount

@property (class, readonly) MFLocalAccount *localAccount;

@property (readonly, nonatomic) MFMailbox *outboxMailbox;
@property (readonly, nonatomic) MFMailbox *sendLaterMailbox;

+ (id)allocWithZone:(struct _NSZone { } *)a0;
+ (id)accountTypeString;
+ (id)csAccountTypeString;
+ (void)test_resetLocalAccount;
+ (id)outboxPathRelativeToLegacyAccountPath:(id)a0 legacyOutboxPath:(id)a1;

- (void)dealloc;
- (id)password;
- (void)setPassword:(id)a0;
- (void)setUsername:(id)a0;
- (void)setHostname:(id)a0;
- (BOOL)isOffline;
- (BOOL)configureDynamically;
- (void)setConfigureDynamically:(BOOL)a0;
- (BOOL)isLocalAccount;
- (void)setIsOffline:(BOOL)a0;
- (BOOL)isWillingToGoOnline;
- (void)setIsWillingToGoOnline:(BOOL)a0;
- (id)mailboxPathExtension;
- (BOOL)_setChildren:(id)a0 forMailbox:(id)a1;
- (id)_defaultSpecialMailboxRelativePathForType:(int)a0;
- (id)createMailboxWithParent:(id)a0 displayName:(id)a1 localizedDisplayName:(id)a2;
- (BOOL)renameMailbox:(id)a0 newDisplayName:(id)a1 parent:(id)a2;
- (id)URLPersistenceScheme;
- (Class)storeClassForMailbox:(id)a0;
- (BOOL)shouldMoveDeletedMessagesToTrash;
- (id)primaryMailbox;
- (void)_synchronouslyLoadListingForParent:(id)a0;
- (void)_readCustomInfoFromMailboxCache:(id)a0;
- (void)insertInMailboxes:(id)a0 atIndex:(unsigned long long)a1;
- (id)_sendLaterMailboxCreateIfNeeded:(BOOL)a0;
- (id)_outboxMailboxCreateIfNeeded:(BOOL)a0;
- (BOOL)canFetch;
- (BOOL)shouldAutoFetch;
- (long long)emptyTrashFrequency;
- (id)_copyMailboxWithParent:(id)a0 name:(id)a1 pathComponent:(id)a2 attributes:(unsigned long long)a3 existingMailbox:(id)a4 uuid:(id)a5;
- (BOOL)supportsNormalContainerOnlyMailboxes;
- (id)pathForMailboxWithParent:(id)a0 displayName:(id)a1;
- (id)createMailboxWithParent:(id)a0 displayName:(id)a1 error:(id *)a2;
- (id)rootlessMailboxForFileSystemPath:(id)a0;
- (BOOL)synchronizesDataWithServer;
- (BOOL)isEditableByUser;
- (BOOL)canParticipateInRules;
- (BOOL)providesAccountInformation;
- (BOOL)isZeroConfiguration;
- (BOOL)isRemoteAccount;
- (BOOL)hasTrashMailbox;
- (BOOL)supportsAppleScript;

@end
