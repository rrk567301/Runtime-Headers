@class ABLazyGroup, NSArray, ABRecordContext, ABImportRecordFactory, NSMutableArray, ABGroupEntriesList;

@interface ABBookGroupImportCommand : ABBookUndoableCommand {
    ABRecordContext *_sourceContext;
    NSArray *_sourceGroups;
    NSArray *_sourcePersonUids;
    ABRecordContext *_destinationContext;
    ABLazyGroup *_destinationGroup;
    ABGroupEntriesList *_groupEntriesList;
    ABImportRecordFactory *_importRecordFactory;
    NSMutableArray *_importedGroups;
    NSMutableArray *_importedPeopleUids;
    BOOL ignoresGuardianRestrictions;
}

- (void).cxx_destruct;
- (id)actionName;
- (void)execute;
- (BOOL)ignoresGuardianRestrictions;
- (void)setIgnoresGuardianRestrictions:(BOOL)a0;
- (void)executeUndo;
- (id)importPerson:(id)a0;
- (id)initWithSourceRecordContext:(id)a0 sourcePersonUids:(id)a1 sourceGroupUids:(id)a2 destinationRecordContext:(id)a3 destinationGroup:(id)a4 groupEntriesList:(id)a5;
- (id)importAllPeople;
- (id)allPeopleToImport;
- (void)addPeopleFromSourcePersonUid:(id)a0;
- (void)addPeopleFromSourceGroups:(id)a0;
- (id)importPeople:(id)a0;
- (id)importGroupsWithImportedPeople:(id)a0;
- (id)importGroup:(id)a0 withImportedPeople:(id)a1;
- (id)importGroup:(id)a0;
- (void)addMembers:(id)a0 toGroup:(id)a1;
- (void)makeImportedPeopleMembersOfDestinationGroup:(id)a0;
- (void)makeImportedGroupsSubgroupsOfDestinationGroup:(id)a0;
- (void)rememberImportedGroupsForUndo:(id)a0;
- (void)rememberImportedPeopleForUndo:(id)a0;
- (void)undoImportedPeople;
- (void)undoImportedGroups;
- (void)removeRecords:(id)a0;

@end
