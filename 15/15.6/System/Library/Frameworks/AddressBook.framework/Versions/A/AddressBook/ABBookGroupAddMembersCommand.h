@class ABLazyGroup, NSSet, NSMutableDictionary, ABAddressBook;

@interface ABBookGroupAddMembersCommand : ABBookUndoableCommand {
    ABAddressBook *_addressBook;
    ABLazyGroup *_lazyGroup;
    NSSet *_newMemberUids;
    NSMutableDictionary *_memberUidToLazyParentGroupUids;
    char ignoresGuardianRestrictions;
}

@property (readonly, copy) NSSet *newMemberUids;

- (void).cxx_destruct;
- (id)actionName;
- (void)execute;
- (void)setIgnoresGuardianRestrictions:(char)a0;
- (void)executeUndo;
- (char)ignoresGuardianRestrictions;
- (void)addMemberToPreviousGroup:(id)a0;
- (void)addMembersToGroup:(id)a0;
- (void)addMembersToPreviousGroups;
- (id)initWithAddressBook:(id)a0 group:(id)a1 newMemberUids:(id)a2;
- (id)newMembers;
- (void)removeMembersFromGroup:(id)a0;
- (void)setMemberUidToLazyParentGroupUids;

@end
