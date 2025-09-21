@class ABGroupEntriesList, NSString, ABSearchElement, ABAccount, ABAddressBook;

@interface ABBookCreateSmartGroupCommand : ABBookUndoableCommand {
    ABSearchElement *_searchElement;
    char _tracksModification;
    ABAddressBook *_addressBook;
    ABGroupEntriesList *_groupEntriesList;
    ABAccount *_account;
    NSString *_smartGroupUid;
    char ignoresGuardianRestrictions;
}

@property (copy) NSString *name;

- (void).cxx_destruct;
- (id)actionName;
- (void)execute;
- (void)setIgnoresGuardianRestrictions:(char)a0;
- (void)executeUndo;
- (char)ignoresGuardianRestrictions;
- (id)groupEntryForNewSmartGroup;
- (id)initWithName:(id)a0 searchElement:(id)a1 tracksModification:(char)a2 addressBook:(id)a3 account:(id)a4 groupEntriesList:(id)a5;
- (id)smartGroup;
- (void)updateSmartGroupName:(id)a0;

@end
