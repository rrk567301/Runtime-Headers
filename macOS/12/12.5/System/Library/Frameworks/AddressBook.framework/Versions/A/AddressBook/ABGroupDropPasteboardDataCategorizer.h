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
- (BOOL)canAddMembers;
- (BOOL)groupWouldCauseACycleWithDestinationGroup:(id)a0;
- (void)removeGroupsInPersonListThatWouldCauseACycle:(id)a0;
- (void)removePeopleAlreadyAMemberOfTheDestinationGroup;
- (void)categorizeGroupUid:(id)a0;
- (void)removeAllGroupsIfNoDestinationGroup;
- (void)removeGroupsAlreadyASubgroupOfTheDestinationGroup;
- (void)categorizePeopleUids;
- (void)categorizeGroupUids;
- (id)initWithPasteboardData:(id)a0 dropDestination:(id)a1;
- (void)categorizePasteboardData;
- (BOOL)canImportRecords;
- (BOOL)hasPeopleToImport;
- (BOOL)hasGroupsToImport;

@end
