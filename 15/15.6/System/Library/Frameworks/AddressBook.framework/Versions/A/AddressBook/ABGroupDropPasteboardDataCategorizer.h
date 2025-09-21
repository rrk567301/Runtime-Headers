@class ABGroupDropPasteboardData, NSMutableSet, ABGroupDropDestination, NSMutableArray;

@interface ABGroupDropPasteboardDataCategorizer : NSObject {
    ABGroupDropPasteboardData *_pasteboardData;
    ABGroupDropDestination *_destination;
}

@property (readonly) NSMutableSet *personUidsExistingInDestination;
@property (readonly) NSMutableArray *linkedPersonUidsToImport;
@property (readonly) NSMutableSet *groupUidsExistingInDestination;
@property (readonly) NSMutableSet *groupUidsToImport;

- (void).cxx_destruct;
- (char)canAddMembers;
- (char)canImportRecords;
- (void)categorizeGroupUid:(id)a0;
- (void)categorizeGroupUids;
- (void)categorizePasteboardData;
- (void)categorizePeopleUids;
- (char)groupWouldCauseACycleWithDestinationGroup:(id)a0;
- (char)hasGroupsToImport;
- (char)hasPeopleToImport;
- (id)initWithPasteboardData:(id)a0 dropDestination:(id)a1;
- (void)removeAllGroupsIfNoDestinationGroup;
- (void)removeGroupsAlreadyASubgroupOfTheDestinationGroup;
- (void)removeGroupsInPersonListThatWouldCauseACycle:(id)a0;
- (void)removePeopleAlreadyAMemberOfTheDestinationGroup;

@end
