@interface ABSearchElement : NSObject

+ (void)_setTestPredicatesMatchRecordInStore:(char)a0;
+ (char)_testPredicatesMatchRecordInStore;
+ (long long)baseEncodingVersion;
+ (void)checkCurrentVersionCompatibleWithCoder:(id)a0;
+ (id)searchElementForConjunction:(long long)a0 children:(id)a1;
+ (void)setEncodingVersion:(long long)a0;

- (char)isEqual:(id)a0;
- (void)setSearchValue:(id)a0;
- (long long)encodingVersion;
- (id)_predicateForImplClass:(Class)a0 addressBook:(id)a1;
- (id)_predicateForImplClass:(Class)a0 context:(id)a1 basePersistenceURL:(id)a2;
- (id)_withinDate;
- (id)affectedStoresInAddressBook:(id)a0;
- (char)diacriticInsensitiveOption;
- (id)groupsUsedInDefinition;
- (char)isReferencingGroup:(id)a0;
- (char)isSimpleSearch;
- (char)matchesRecord:(id)a0;
- (char)nts_MatchesRecord:(id)a0;
- (char)nts_PredicateMatchesRecord:(id)a0;
- (char)predicateMatchesRecord:(id)a0;
- (id)prefetchingRelationshipKeyPathsForImplClass:(Class)a0 inAddressBook:(id)a1;
- (char)searchGroups;
- (char)searchPeople;
- (id)searchRecordClasses;
- (void)setDiacriticInsensitiveOption:(char)a0;
- (char)usesGroupInDefinition:(id)a0;

@end
