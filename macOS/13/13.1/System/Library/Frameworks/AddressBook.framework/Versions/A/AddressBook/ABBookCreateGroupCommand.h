@class ABAccount, NSString, ABGroupEntriesList, ABAddressBook;

@interface ABBookCreateGroupCommand : ABBookUndoableCommand {
    ABAccount *_account;
    ABAddressBook *_addressBook;
    ABGroupEntriesList *_groupEntriesList;
    BOOL ignoresGuardianRestrictions;
}

@property (copy) NSString *groupUid;
@property (copy) NSString *groupName;

- (void).cxx_destruct;
- (id)group;
- (id)actionName;
- (void)execute;
- (BOOL)ignoresGuardianRestrictions;
- (void)setIgnoresGuardianRestrictions:(BOOL)a0;
- (void)executeUndo;
- (void)executeRedo;
- (id)initWithAccount:(id)a0 addressBook:(id)a1 groupEntriesList:(id)a2;
- (id)untitledString;
- (id)makeUntitledGroup;
- (id)groupEntryForNewGroup;
- (void)updateGroupName:(id)a0;

@end
