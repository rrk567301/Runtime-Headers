@class NSString;

@interface NFIMAPAccountProxy : ICNFIMAPAccountProxy <NFAccountProxy>

@property (copy, nonatomic) NSString *fullName;
@property (copy, nonatomic) NSString *parentACAccountIdentifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithManagedObject:(id)a0;
- (BOOL)hasNotes;
- (id)parentACAccount;
- (id)mailboxProxyForMailbox:(id)a0;
- (BOOL)deleteMailboxFromServer:(id)a0;
- (BOOL)renameMailbox:(id)a0 newParentMailbox:(id)a1;
- (unsigned long long)maximumConnectionCount;
- (BOOL)useDefaultMailboxAsMailboxHierarchyRoot;
- (void)playOfflineActions;
- (BOOL)shouldAddMailboxToPersistence:(id)a0 withParent:(id)a1;
- (void)deleteMailboxFromPersistence:(id)a0;
- (id)newMailboxProxyWithMailbox:(id)a0;

@end
