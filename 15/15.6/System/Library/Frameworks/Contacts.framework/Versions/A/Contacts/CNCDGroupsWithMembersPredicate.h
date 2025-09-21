@class NSArray, NSString;

@interface CNCDGroupsWithMembersPredicate : CNPredicate <CNCDGroupPredicate, CNCDGroupPredicateExpansion>

@property (retain) NSArray *recordIdentifiers;
@property char includeAllParentGroups;
@property (retain) NSString *relationshipKey;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (char)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)cn_coreDataPredicate;
- (id)cn_coreDataPredicateForExpansionFromFetchedRecords:(id)a0;
- (id)initWithContact:(id)a0 includeAllParentGroups:(char)a1;
- (id)initWithGroup:(id)a0 includeAllParentGroups:(char)a1;
- (char)shouldExpandInitialResults;

@end
