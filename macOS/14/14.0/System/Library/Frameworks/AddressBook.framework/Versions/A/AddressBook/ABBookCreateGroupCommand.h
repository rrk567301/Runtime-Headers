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
- (void)setIgnoresGuardianRestrictions:(BOOL)a0;
- (void)executeRedo;
- (void)executeUndo;
- (BOOL)ignoresGuardianRestrictions;
- (id)groupEntryForNewGroup;
- (id)initWithAccount:(id)a0 addressBook:(id)a1 groupEntriesList:(id)a2;
- (id)makeUntitledGroup;
- (id)untitledString;
- (void)updateGroupName:(id)a0;

@end
