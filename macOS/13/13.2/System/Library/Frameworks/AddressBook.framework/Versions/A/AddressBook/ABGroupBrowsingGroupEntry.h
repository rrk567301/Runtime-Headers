@class ABGroup, ABAccount, ABAddressBook;

@interface ABGroupBrowsingGroupEntry : ABBrowsingGroupEntry

@property (readonly, retain) ABAccount *account;
@property (readonly, retain) ABAddressBook *addressBook;
@property (readonly, retain) ABGroup *group;

+ (id)identifierForGroup:(id)a0;
+ (id)identifierForGroupWithIdentifier:(id)a0;

- (id)description;
- (id)debugDescription;
- (void).cxx_destruct;
- (BOOL)isRestricted;
- (BOOL)canDeletePeople;
- (BOOL)canCreatePeople;
- (BOOL)canDrop;
- (BOOL)canDelete;
- (id)actionScope;
- (BOOL)canCreateGroup;
- (id)createHelperWithFactory:(id)a0;
- (BOOL)canCreateGroupFromSelection;
- (BOOL)shouldImportToDefaultAccount;
- (BOOL)containsPeople:(id)a0;
- (id)iconWithStyleProvider:(id)a0;
- (id)initWithAccount:(id)a0 addressBook:(id)a1 group:(id)a2;
- (BOOL)canRename;
- (BOOL)canEditDistributionLists;
- (BOOL)canExportGroupVCard;
- (BOOL)canSendEmailToGroup;
- (id)renameHelperWithFactory:(id)a0;
- (id)deleteHelperWithFactory:(id)a0;
- (BOOL)canCopy;
- (id)copyHelperWithFactory:(id)a0;
- (BOOL)canCut;
- (id)cutHelperWithFactory:(id)a0;

@end
