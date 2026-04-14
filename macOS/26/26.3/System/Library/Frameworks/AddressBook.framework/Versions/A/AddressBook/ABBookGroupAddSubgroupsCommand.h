@class NSSet, ABRecordContext, ABLazyGroup;

@interface ABBookGroupAddSubgroupsCommand : ABBookUndoableCommand {
    ABRecordContext *_recordContext;
    ABLazyGroup *_lazyGroup;
    NSSet *_newSubgroupUids;
    BOOL ignoresGuardianRestrictions;
}

@property (readonly, copy) NSSet *newSubgroupUids;

- (void)setIgnoresGuardianRestrictions:(BOOL)a0;
- (void).cxx_destruct;
- (void)execute;
- (BOOL)ignoresGuardianRestrictions;
- (id)actionName;
- (void)executeUndo;
- (void)addSubgroupsToGroup:(id)a0;
- (id)initWithAddressBook:(id)a0 group:(id)a1 newSubgroupUids:(id)a2;
- (id)initWithRecordContext:(id)a0 group:(id)a1 newSubgroupUids:(id)a2;
- (id)newSubgroups;
- (void)removeSubgroupsFromGroup:(id)a0;

@end
