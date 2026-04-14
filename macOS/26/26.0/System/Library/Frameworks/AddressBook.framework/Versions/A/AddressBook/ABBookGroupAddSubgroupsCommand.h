@class NSSet, ABRecordContext, ABLazyGroup;

@interface ABBookGroupAddSubgroupsCommand : ABBookUndoableCommand {
    ABRecordContext *_recordContext;
    ABLazyGroup *_lazyGroup;
    NSSet *_newSubgroupUids;
    BOOL ignoresGuardianRestrictions;
}

@property (readonly, copy) NSSet *newSubgroupUids;

- (void)execute;
- (BOOL)ignoresGuardianRestrictions;
- (void).cxx_destruct;
- (void)setIgnoresGuardianRestrictions:(BOOL)a0;
- (id)actionName;
- (void)executeUndo;
- (void)addSubgroupsToGroup:(id)a0;
- (id)initWithAddressBook:(id)a0 group:(id)a1 newSubgroupUids:(id)a2;
- (id)initWithRecordContext:(id)a0 group:(id)a1 newSubgroupUids:(id)a2;
- (id)newSubgroups;
- (void)removeSubgroupsFromGroup:(id)a0;

@end
