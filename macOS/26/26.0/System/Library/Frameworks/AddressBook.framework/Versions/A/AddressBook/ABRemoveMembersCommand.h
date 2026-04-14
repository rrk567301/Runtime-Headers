@class NSString, NSArray, ABAddressBook;

@interface ABRemoveMembersCommand : ABBookUndoableCommand {
    NSString *_groupIdentifier;
    NSArray *_memberIdentifiers;
    ABAddressBook *_addressBook;
    BOOL ignoresGuardianRestrictions;
}

- (void)execute;
- (BOOL)ignoresGuardianRestrictions;
- (void).cxx_destruct;
- (void)setIgnoresGuardianRestrictions:(BOOL)a0;
- (void)executeUndo;
- (void)_addPeople:(id)a0 toGroup:(id)a1;
- (void)_addSubgroups:(id)a0 toGroup:(id)a1;
- (id)_fetchGroup;
- (id)_fetchMembers;
- (void)_removePeople:(id)a0 fromGroup:(id)a1;
- (void)_removeSubgroups:(id)a0 fromGroup:(id)a1;
- (id)initWithGroup:(id)a0 members:(id)a1 addressBook:(id)a2;

@end
