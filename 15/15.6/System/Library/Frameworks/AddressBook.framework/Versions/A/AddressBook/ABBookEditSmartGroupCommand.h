@class ABGroupEntriesList, NSString, ABSearchElement, ABAddressBook;

@interface ABBookEditSmartGroupCommand : ABBookUndoableCommand {
    ABAddressBook *_addressBook;
    NSString *_smartGroupUid;
    NSString *_name;
    ABSearchElement *_searchElement;
    char _tracksModification;
    NSString *_oldName;
    ABSearchElement *_oldSearchElement;
    char _oldTracksModification;
    ABGroupEntriesList *_groupEntriesList;
}

- (void).cxx_destruct;
- (id)actionName;
- (void)execute;
- (void)executeUndo;
- (id)initWithSmartGroup:(id)a0 name:(id)a1 searchElement:(id)a2 tracksModification:(char)a3 groupEntriesList:(id)a4;
- (void)rememberOldState;
- (id)smartGroup;

@end
