@class MFMailbox;

@interface MFLocalAccount : MFMailAccount

@property (class, readonly) MFLocalAccount *localAccount;

@property (readonly, nonatomic) MFMailbox *outboxMailbox;
@property (readonly, nonatomic) MFMailbox *sendLaterMailbox;

+ (id)allocWithZone:(struct _NSZone { } *)a0;
+ (id)accountTypeString;
+ (id)csAccountTypeString;
+ (id)outboxPathRelativeToLegacyAccountPath:(id)a0 legacyOutboxPath:(id)a1;
+ (void)test_resetLocalAccount;

- (void)dealloc;
- (id)password;
- (void)setPassword:(id)a0;
- (void)setUsername:(id)a0;
- (char)isOffline;
- (void)setIsOffline:(char)a0;
- (void)setHostname:(id)a0;
- (char)configureDynamically;
- (void)setConfigureDynamically:(char)a0;
- (char)isLocalAccount;
- (char)hasTrashMailbox;
- (char)isRemoteAccount;
- (char)shouldAutoFetch;
- (id)URLPersistenceScheme;
- (id)_copyMailboxWithParent:(id)a0 name:(id)a1 pathComponent:(id)a2 attributes:(unsigned long long)a3 existingMailbox:(id)a4 uuid:(id)a5;
- (id)_defaultSpecialMailboxRelativePathForType:(int)a0;
- (id)_outboxMailboxCreateIfNeeded:(char)a0;
- (void)_readCustomInfoFromMailboxCache:(id)a0;
- (id)_sendLaterMailboxCreateIfNeeded:(char)a0;
- (char)_setChildren:(id)a0 forMailbox:(id)a1;
- (void)_synchronouslyLoadListingForParent:(id)a0;
- (char)canFetch;
- (char)canParticipateInRules;
- (id)createMailboxWithParent:(id)a0 displayName:(id)a1 error:(id *)a2;
- (id)createMailboxWithParent:(id)a0 displayName:(id)a1 localizedDisplayName:(id)a2;
- (long long)emptyTrashFrequency;
- (void)insertInMailboxes:(id)a0 atIndex:(unsigned long long)a1;
- (char)isEditableByUser;
- (char)isWillingToGoOnline;
- (char)isZeroConfiguration;
- (id)mailboxPathExtension;
- (id)pathForMailboxWithParent:(id)a0 displayName:(id)a1;
- (id)primaryMailbox;
- (char)providesAccountInformation;
- (char)renameMailbox:(id)a0 newDisplayName:(id)a1 parent:(id)a2;
- (id)rootlessMailboxForFileSystemPath:(id)a0;
- (void)setIsWillingToGoOnline:(char)a0;
- (char)shouldMoveDeletedMessagesToTrash;
- (Class)storeClassForMailbox:(id)a0;
- (char)supportsAppleScript;
- (char)supportsNormalContainerOnlyMailboxes;
- (char)synchronizesDataWithServer;

@end
