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
    char ignoresGuardianRestrictions;
}

- (void).cxx_destruct;
- (id)actionName;
- (void)execute;
- (void)setIgnoresGuardianRestrictions:(char)a0;
- (void)executeUndo;
- (char)ignoresGuardianRestrictions;
- (id)importPerson:(id)a0;
- (id)importGroupsWithImportedPeople:(id)a0;
- (id)importAllPeople;
- (id)importGroup:(id)a0 withImportedPeople:(id)a1;
- (void)addMembers:(id)a0 toGroup:(id)a1;
- (void)addPeopleFromSourceGroups:(id)a0;
- (void)addPeopleFromSourcePersonUid:(id)a0;
- (id)allPeopleToImport;
- (id)importGroup:(id)a0;
- (id)importPeople:(id)a0;
- (id)initWithSourceRecordContext:(id)a0 sourcePersonUids:(id)a1 sourceGroupUids:(id)a2 destinationRecordContext:(id)a3 destinationGroup:(id)a4 groupEntriesList:(id)a5;
- (void)makeImportedGroupsSubgroupsOfDestinationGroup:(id)a0;
- (void)makeImportedPeopleMembersOfDestinationGroup:(id)a0;
- (void)rememberImportedGroupsForUndo:(id)a0;
- (void)rememberImportedPeopleForUndo:(id)a0;
- (void)removeRecords:(id)a0;
- (void)undoImportedGroups;
- (void)undoImportedPeople;

@end
