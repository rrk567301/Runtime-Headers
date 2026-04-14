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
- (long long)encodingVersion;
- (void)setSearchValue:(id)a0;
- (BOOL)isReferencingGroup:(id)a0;
- (id)_predicateForImplClass:(Class)a0 addressBook:(id)a1;
- (id)_predicateForImplClass:(Class)a0 context:(id)a1 basePersistenceURL:(id)a2;
- (BOOL)nts_MatchesRecord:(id)a0;
- (BOOL)predicateMatchesRecord:(id)a0;
- (BOOL)matchesRecord:(id)a0;
- (id)searchRecordClasses;
- (BOOL)searchGroups;
- (BOOL)usesGroupInDefinition:(id)a0;
- (id)groupsUsedInDefinition;
- (BOOL)searchPeople;
- (id)prefetchingRelationshipKeyPathsForImplClass:(Class)a0 inAddressBook:(id)a1;
- (BOOL)_isNegation;
- (id)_withinDate;
- (id)affectedStoresInAddressBook:(id)a0;
- (id)initWithConjunctionOperator:(long long)a0 children:(id)a1;
- (long long)conjunction;
- (BOOL)isRuleGrouping;
- (void)setIsRuleGrouping:(BOOL)a0;
- (id)storesPresentInAllChildrenArrays:(id)a0;
- (id)storesPresentInAnyChildrenArrays:(id)a0;

@end
