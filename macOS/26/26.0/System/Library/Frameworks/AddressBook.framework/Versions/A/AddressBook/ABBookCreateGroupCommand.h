@class ABAccount, NSString, ABGroupEntriesList, ABGroup, ABAddressBook;

@interface ABBookCreateGroupCommand : ABBookUndoableCommand {
    ABAccount *_account;
    ABAddressBook *_addressBook;
    ABGroupEntriesList *_groupEntriesList;
    BOOL ignoresGuardianRestrictions;
}

@property (copy) NSString *groupUid;
@property (readonly) ABGroup *group;
@property (copy) NSString *groupName;

- (void)execute;
- (BOOL)ignoresGuardianRestrictions;
- (void).cxx_destruct;
- (void)setIgnoresGuardianRestrictions:(BOOL)a0;
- (id)actionName;
- (void)executeRedo;
- (void)executeUndo;
- (id)groupEntryForNewGroup;
- (id)initWithAccount:(id)a0 addressBook:(id)a1 groupEntriesList:(id)a2;
- (id)makeGroup;
- (id)untitledString;
- (void)updateGroupName:(id)a0;

@end
