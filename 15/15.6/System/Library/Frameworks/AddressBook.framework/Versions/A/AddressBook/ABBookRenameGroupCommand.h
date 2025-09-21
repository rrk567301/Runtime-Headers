@class ABAddressBook, NSString, ABAccount, ABGroupEntriesList;

@interface ABBookRenameGroupCommand : ABBookUndoableCommand {
    ABAddressBook *_addressBook;
    NSString *_groupUid;
    NSString *_oldName;
    NSString *_newName;
    ABGroupEntriesList *_groupEntriesList;
    ABAccount *_account;
    char ignoresGuardianRestrictions;
}

+ (id)commandWithAddressBook:(id)a0 group:(id)a1 newName:(id)a2 groupEntriesList:(id)a3;

- (void).cxx_destruct;
- (id)group;
- (id)actionName;
- (void)setGroupName:(id)a0;
- (void)execute;
- (void)setIgnoresGuardianRestrictions:(char)a0;
- (void)executeUndo;
- (char)ignoresGuardianRestrictions;
- (id)validGroup;

@end
