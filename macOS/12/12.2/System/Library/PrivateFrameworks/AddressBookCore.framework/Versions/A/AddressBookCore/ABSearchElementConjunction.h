@class NSArray;

@interface ABSearchElementConjunction : ABSearchElement <NSSecureCoding> {
    long long _conjunction;
    NSArray *_children;
    BOOL _ruleGrouping;
}

@property (class, readonly) BOOL supportsSecureCoding;

- (BOOL)isEqual:(id)a0;
- (id)description;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)_children;
- (id)_predicateForImplClass:(Class)a0 context:(id)a1 basePersistenceURL:(id)a2;
- (id)affectedStoresInAddressBook:(id)a0;
- (BOOL)nts_MatchesRecord:(id)a0;
- (BOOL)searchPeople;
- (BOOL)searchGroups;
- (id)prefetchingRelationshipKeyPathsForImplClass:(Class)a0 inAddressBook:(id)a1;
- (id)searchRecordClasses;
- (id)_predicateForImplClass:(Class)a0 addressBook:(id)a1;
- (id)groupsUsedInDefinition;
- (BOOL)usesGroupInDefinition:(id)a0;
- (BOOL)isRuleGrouping;
- (long long)conjunction;
- (void)setIsRuleGrouping:(BOOL)a0;
- (long long)encodingVersion;
- (void)setSearchValue:(id)a0;
- (BOOL)isReferencingGroup:(id)a0;
- (BOOL)_isNegation;
- (BOOL)predicateMatchesRecord:(id)a0;
- (BOOL)matchesRecord:(id)a0;
- (id)_withinDate;
- (id)storesPresentInAllChildrenArrays:(id)a0;
- (id)storesPresentInAnyChildrenArrays:(id)a0;
- (id)initWithConjunctionOperator:(long long)a0 children:(id)a1;

@end
