@class ABAccount, ABAddressBook;

@interface ABAccountBrowsingGroupEntry : ABBrowsingGroupEntry

@property (readonly, retain) ABAccount *account;
@property (readonly, retain) ABAddressBook *addressBook;

+ (id)identifierForAccount:(id)a0;

- (id)description;
- (void).cxx_destruct;
- (BOOL)canDeletePeople;
- (BOOL)canCreatePeople;
- (BOOL)canDrop;
- (id)initWithName:(id)a0 account:(id)a1 addressBook:(id)a2;
- (id)actionScope;
- (BOOL)canCreateGroup;
- (id)createHelperWithFactory:(id)a0;
- (BOOL)canCreateGroupFromSelection;
- (BOOL)shouldImportToDefaultAccount;
- (BOOL)containsPeople:(id)a0;
- (id)iconWithStyleProvider:(id)a0;

@end
