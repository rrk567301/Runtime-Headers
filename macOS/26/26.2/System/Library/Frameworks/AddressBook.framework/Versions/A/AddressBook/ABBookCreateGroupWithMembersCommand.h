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
- (void)setIgnoresGuardianRestrictions:(BOOL)a0;
- (void).cxx_destruct;
- (BOOL)ignoresGuardianRestrictions;
- (id)actionName;
- (void)executeRedo;
- (void)executeUndo;
- (id)groupEntryForNewGroup;
- (id)initWithAccount:(id)a0 addressBook:(id)a1 groupEntriesList:(id)a2 memberUids:(id)a3;
- (void)updateGroupName:(id)a0;

@end
