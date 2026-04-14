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
- (id)initWithPasteboardData:(id)a0 dropDestination:(id)a1;
- (void)removePeopleAlreadyAMemberOfTheDestinationGroup;
- (BOOL)groupWouldCauseACycleWithDestinationGroup:(id)a0;
- (void)removeGroupsInPersonListThatWouldCauseACycle:(id)a0;
- (void)categorizePeopleUids;
- (void)removeAllGroupsIfNoDestinationGroup;
- (void)removeGroupsAlreadyASubgroupOfTheDestinationGroup;
- (void)categorizeGroupUid:(id)a0;
- (void)categorizeGroupUids;
- (void)categorizePasteboardData;
- (BOOL)canImportRecords;
- (BOOL)hasPeopleToImport;
- (BOOL)hasGroupsToImport;

@end
