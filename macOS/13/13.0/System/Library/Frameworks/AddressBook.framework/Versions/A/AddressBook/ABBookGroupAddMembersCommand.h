@class ABLazyGroup, NSSet, NSMutableDictionary, ABAddressBook;

@interface ABBookGroupAddMembersCommand : ABBookUndoableCommand {
    ABAddressBook *_addressBook;
    ABLazyGroup *_lazyGroup;
    NSSet *_newMemberUids;
    NSMutableDictionary *_memberUidToLazyParentGroupUids;
    BOOL ignoresGuardianRestrictions;
}

@property (readonly, copy) NSSet *newMemberUids;

- (void).cxx_destruct;
- (id)actionName;
- (void)execute;
- (BOOL)ignoresGuardianRestrictions;
- (void)setIgnoresGuardianRestrictions:(BOOL)a0;
- (void)executeUndo;
- (id)initWithAddressBook:(id)a0 group:(id)a1 newMemberUids:(id)a2;
- (void)setMemberUidToLazyParentGroupUids;
- (void)addMembersToGroup:(id)a0;
- (void)removeMembersFromGroup:(id)a0;
- (void)addMembersToPreviousGroups;
- (void)addMemberToPreviousGroup:(id)a0;
- (id)newMembers;

@end
