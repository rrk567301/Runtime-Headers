@interface ABSearchElement : NSObject

+ (id)searchElementForConjunction:(long long)a0 children:(id)a1;
+ (long long)baseEncodingVersion;
+ (void)setEncodingVersion:(long long)a0;
+ (void)checkCurrentVersionCompatibleWithCoder:(id)a0;
+ (BOOL)_testPredicatesMatchRecordInStore;
+ (void)_setTestPredicatesMatchRecordInStore:(BOOL)a0;

- (BOOL)isEqual:(id)a0;
- (id)_predicateForImplClass:(Class)a0 context:(id)a1 basePersistenceURL:(id)a2;
- (id)affectedStoresInAddressBook:(id)a0;
- (BOOL)nts_MatchesRecord:(id)a0;
- (BOOL)searchPeople;
- (BOOL)searchGroups;
- (id)prefetchingRelationshipKeyPathsForImplClass:(Class)a0 inAddressBook:(id)a1;
- (id)searchRecordClasses;
- (id)_predicateForImplClass:(Class)a0 addressBook:(id)a1;
- (id)groupsUsedInDefinition;
- (void)setDiacriticInsensitiveOption:(BOOL)a0;
- (BOOL)usesGroupInDefinition:(id)a0;
- (long long)encodingVersion;
- (void)setSearchValue:(id)a0;
- (BOOL)diacriticInsensitiveOption;
- (BOOL)isReferencingGroup:(id)a0;
- (BOOL)isSimpleSearch;
- (BOOL)nts_PredicateMatchesRecord:(id)a0;
- (BOOL)predicateMatchesRecord:(id)a0;
- (BOOL)matchesRecord:(id)a0;
- (id)_withinDate;

@end
