@class ABAccount, ABAddressBook, ABBookGroupAddMembersCommand, NSSet, ABBookCreateGroupCommand, ABGroupEntriesList;

@interface ABBookCreateGroupWithMembersCommand : ABBookUndoableCommand {
    ABAccount *_account;
    ABAddressBook *_addressBook;
    ABGroupEntriesList *_groupEntriesList;
    ABBookCreateGroupCommand *_createCommand;
    ABBookGroupAddMembersCommand *_addMembersCommand;
    NSSet *_memberUids;
    BOOL ignoresGuardianRestrictions;
}

- (void)execute;
- (BOOL)ignoresGuardianRestrictions;
- (void).cxx_destruct;
- (void)setIgnoresGuardianRestrictions:(BOOL)a0;
- (id)actionName;
- (void)executeRedo;
- (void)executeUndo;
- (id)groupEntryForNewGroup;
- (id)initWithAccount:(id)a0 addressBook:(id)a1 groupEntriesList:(id)a2 memberUids:(id)a3;
- (void)updateGroupName:(id)a0;

@end
