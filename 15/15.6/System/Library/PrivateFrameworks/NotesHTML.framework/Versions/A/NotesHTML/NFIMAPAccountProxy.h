@class NSString;

@interface NFIMAPAccountProxy : ICNFIMAPAccountProxy <NFAccountProxy>

@property (copy, nonatomic) NSString *fullName;
@property (copy, nonatomic) NSString *parentACAccountIdentifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithManagedObject:(id)a0;
- (char)hasNotes;
- (id)parentACAccount;
- (char)renameMailbox:(id)a0 newParentMailbox:(id)a1;
- (void)deleteMailboxFromPersistence:(id)a0;
- (char)deleteMailboxFromServer:(id)a0;
- (id)mailboxProxyForMailbox:(id)a0;
- (unsigned long long)maximumConnectionCount;
- (id)newMailboxProxyWithMailbox:(id)a0;
- (void)playOfflineActions;
- (char)shouldAddMailboxToPersistence:(id)a0 withParent:(id)a1;
- (char)useDefaultMailboxAsMailboxHierarchyRoot;

@end
