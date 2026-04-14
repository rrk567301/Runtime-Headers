@class NSSet, ABBookGroupAddMembersCommand, ABBookGroupAddSubgroupsCommand;

@interface ABBookGroupAddRecordsCommand : ABBookUndoableCommand {
    ABBookGroupAddMembersCommand *_addMembersCommand;
    ABBookGroupAddSubgroupsCommand *_addSubgroupsCommand;
    BOOL ignoresGuardianRestrictions;
}

@property (readonly) NSSet *newMemberUids;
@property (readonly) NSSet *newSubgroupUids;

- (BOOL)ignoresGuardianRestrictions;
- (void)execute;
- (void)setIgnoresGuardianRestrictions:(BOOL)a0;
- (void).cxx_destruct;
- (id)actionName;
- (void)executeUndo;
- (id)initWithAddressBook:(id)a0 group:(id)a1 newMemberUids:(id)a2 newSubgroupUids:(id)a3;

@end
