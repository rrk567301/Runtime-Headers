@class ABAccount, ABAddressBook;

@interface ABAccountBrowsingGroupEntry : ABBrowsingGroupEntry

@property (readonly, retain) ABAccount *account;
@property (readonly, retain) ABAddressBook *addressBook;

+ (id)identifierForAccount:(id)a0;

- (id)description;
- (void).cxx_destruct;
- (BOOL)canCreatePeople;
- (BOOL)canDeletePeople;
- (BOOL)canDrop;
- (id)actionScope;
- (id)initWithName:(id)a0 account:(id)a1 addressBook:(id)a2;
- (BOOL)canCreateGroup;
- (id)createHelperWithFactory:(id)a0;
- (BOOL)canCreateGroupFromSelection;
- (BOOL)shouldImportToDefaultAccount;
- (BOOL)containsPeople:(id)a0;
- (id)iconWithStyleProvider:(id)a0;

@end
