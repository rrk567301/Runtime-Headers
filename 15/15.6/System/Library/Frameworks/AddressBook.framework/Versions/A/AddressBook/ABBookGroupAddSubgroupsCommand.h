@class NSSet, ABRecordContext, ABLazyGroup;

@interface ABBookGroupAddSubgroupsCommand : ABBookUndoableCommand {
    ABRecordContext *_recordContext;
    ABLazyGroup *_lazyGroup;
    NSSet *_newSubgroupUids;
    char ignoresGuardianRestrictions;
}

@property (readonly, copy) NSSet *newSubgroupUids;

- (void).cxx_destruct;
- (id)actionName;
- (void)execute;
- (void)setIgnoresGuardianRestrictions:(char)a0;
- (void)executeUndo;
- (char)ignoresGuardianRestrictions;
- (void)addSubgroupsToGroup:(id)a0;
- (id)initWithAddressBook:(id)a0 group:(id)a1 newSubgroupUids:(id)a2;
- (id)initWithRecordContext:(id)a0 group:(id)a1 newSubgroupUids:(id)a2;
- (id)newSubgroups;
- (void)removeSubgroupsFromGroup:(id)a0;

@end
