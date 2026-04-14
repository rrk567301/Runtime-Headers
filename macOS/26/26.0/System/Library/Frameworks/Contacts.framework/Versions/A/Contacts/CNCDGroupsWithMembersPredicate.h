@class NSArray, NSString;

@interface CNCDGroupsWithMembersPredicate : CNPredicate <CNCDGroupPredicate, CNCDGroupPredicateExpansion>

@property (retain) NSArray *recordIdentifiers;
@property BOOL includeAllParentGroups;
@property (retain) NSString *relationshipKey;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)cn_coreDataPredicate;
- (void).cxx_destruct;
- (id)cn_coreDataPredicateForExpansionFromFetchedRecords:(id)a0;
- (id)initWithContact:(id)a0 includeAllParentGroups:(BOOL)a1;
- (id)initWithGroup:(id)a0 includeAllParentGroups:(BOOL)a1;
- (BOOL)shouldExpandInitialResults;

@end
