@class NSArray;

@interface ABSearchElementConjunction : ABSearchElement <NSSecureCoding> {
    long long _conjunction;
    NSArray *_children;
    char _ruleGrouping;
}

@property (class, readonly) char supportsSecureCoding;

- (id)description;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)_children;
- (void)setSearchValue:(id)a0;
- (long long)encodingVersion;
- (char)_isNegation;
- (id)_predicateForImplClass:(Class)a0 addressBook:(id)a1;
- (id)_predicateForImplClass:(Class)a0 context:(id)a1 basePersistenceURL:(id)a2;
- (id)_withinDate;
- (id)affectedStoresInAddressBook:(id)a0;
- (long long)conjunction;
- (id)groupsUsedInDefinition;
- (id)initWithConjunctionOperator:(long long)a0 children:(id)a1;
- (char)isReferencingGroup:(id)a0;
- (char)isRuleGrouping;
- (char)matchesRecord:(id)a0;
- (char)nts_MatchesRecord:(id)a0;
- (char)predicateMatchesRecord:(id)a0;
- (id)prefetchingRelationshipKeyPathsForImplClass:(Class)a0 inAddressBook:(id)a1;
- (char)searchGroups;
- (char)searchPeople;
- (id)searchRecordClasses;
- (void)setIsRuleGrouping:(char)a0;
- (id)storesPresentInAllChildrenArrays:(id)a0;
- (id)storesPresentInAnyChildrenArrays:(id)a0;
- (char)usesGroupInDefinition:(id)a0;

@end
