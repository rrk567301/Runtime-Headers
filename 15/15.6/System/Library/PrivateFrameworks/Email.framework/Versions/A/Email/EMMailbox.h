@class EMMailboxRepository, NSString, EMReceivingAccount, EMMailboxCollection, EMObjectID, EMMailboxObjectID, NSURL;

@interface EMMailbox : EMRepositoryObject <EMMailboxBuilder, NSSecureCoding, EFPubliclyDescribable> {
    EMReceivingAccount *_account;
    char _descriptionUsesRealName;
}

@property (class, readonly) char supportsSecureCoding;

@property (weak, nonatomic) EMMailbox *parent;
@property (readonly, nonatomic) EMMailboxObjectID *parentID;
@property (retain, nonatomic) EMMailboxCollection *children;
@property (copy) NSString *name;
@property long long type;
@property (nonatomic) char canContainMessages;
@property (nonatomic) char canArchive;
@property (retain, nonatomic) EMMailboxRepository *repository;
@property (readonly, copy, nonatomic) EMMailboxObjectID *objectID;
@property (readonly, nonatomic) EMReceivingAccount *account;
@property (readonly, nonatomic) EMReceivingAccount *accountIfAvailable;
@property (readonly, nonatomic) EMObjectID *accountIdentifier;
@property (readonly, copy) NSString *redactedName;
@property (readonly) NSURL *externalURL;
@property (readonly, nonatomic) char isTopLevelMailbox;
@property (readonly, nonatomic) char isSmartMailbox;
@property (readonly, nonatomic) char isInboxMailbox;
@property (readonly, nonatomic) char isDraftsMailbox;
@property (readonly, nonatomic) char isOutgoingMailbox;
@property (readonly, nonatomic) char isSentMailbox;
@property (readonly, nonatomic) char isSendLaterMailbox;
@property (readonly, nonatomic) char supportsSelectAll;
@property (readonly, nonatomic) char shouldArchiveByDefault;
@property (readonly, nonatomic) char isCoreSpotlightMailbox;
@property (readonly, nonatomic) char isTrashMailbox;
@property (nonatomic) char descriptionUsesRealName;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy, nonatomic) NSString *ef_publicDescription;
@property (readonly, copy, nonatomic) NSString *ef_shortPublicDescription;

+ (char)deleteMovesToTrashForMailboxes:(id)a0;
+ (char)shouldArchiveByDefaultForMailboxes:(id)a0;
+ (char)supportsArchivingForMailboxes:(id)a0;
+ (id)sortDescriptorForNameAscending:(char)a0;
+ (char)typeIsValidTransferDestination:(long long)a0;
+ (char)_isOutgoingMailboxType:(long long)a0;
+ (id)_predicateForSmartMailboxes:(char)a0;
+ (id)predicateForMailboxAccount:(id)a0;
+ (id)predicateForMailboxAccount:(id)a0 topLevelOnly:(char)a1;
+ (id)predicateForMailboxAccountIdentifier:(id)a0 topLevelOnly:(char)a1;
+ (id)predicateForMailboxChildren:(id)a0;
+ (id)predicateForMailboxName:(id)a0;
+ (id)predicateForMailboxType:(long long)a0;
+ (id)predicateForPrimaryMailboxWithAccount:(id)a0;
+ (id)predicateForRegularMailboxes;
+ (id)predicateForSmartMailboxes;
+ (id)predicateForTopLevelMailboxes;
+ (id)sortDescriptorForDisplayOrder;
+ (char)supportsSelectAllForMailboxes:(id)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithObjectID:(id)a0;
- (char)_canArchiveForMailboxType:(long long)a0;
- (void)_commonInitName:(id)a0 accountIdentifier:(id)a1 type:(long long)a2 canContainMessages:(char)a3 children:(id)a4 parentID:(id)a5 builder:(id /* block */)a6;
- (char)_hasFetchedAccount;
- (char)_shouldArchiveByDefault;
- (id)_shouldArchiveByDefaultString;
- (id)initWithObjectID:(id)a0 name:(id)a1 accountIdentifier:(id)a2 type:(long long)a3 builder:(id /* block */)a4;
- (id)initWithObjectID:(id)a0 repository:(id)a1 name:(id)a2 accountIdentifier:(id)a3 type:(long long)a4 builder:(id /* block */)a5;
- (void)setParentFromMailboxes:(id)a0;

@end
