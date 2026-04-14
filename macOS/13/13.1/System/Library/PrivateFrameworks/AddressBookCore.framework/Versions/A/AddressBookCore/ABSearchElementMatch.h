@class NSString;

@interface ABSearchElementMatch : ABSearchElement <NSSecureCoding> {
    NSString *_searchProperty;
    long long _searchPropertyType;
    id _searchValue;
    long long _searchValueType;
    NSString *_searchLabel;
    NSString *_searchKey;
    long long _testCase;
    BOOL _searchPeople;
    BOOL _diacriticInsensitive;
    long long _comparison;
}

@property (class, readonly) BOOL supportsSecureCoding;

+ (void)initialize;

- (BOOL)isEqual:(id)a0;
- (id)description;
- (id)_key;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)_label;
- (id)_value;
- (id)_searchProperty;
- (long long)encodingVersion;
- (void)_nts_CalculatePropertyTypeForRecord:(id)a0;
- (void)setSearchValue:(id)a0;
- (id)initWithProperty:(id)a0 label:(id)a1 key:(id)a2 value:(id)a3 searchPeople:(BOOL)a4 comparison:(long long)a5;
- (id)_predicateForKeyPath:(id)a0 comparison:(long long)a1 value:(id)a2;
- (id)_predicateForUnknownKeyWithComparison:(long long)a0 value:(id)a1;
- (id)_predicateForYearlessSearchOnDatePropertyKeyPath:(id)a0 toManyRelationshipName:(id)a1 futureOnly:(BOOL)a2 allNotMatch:(BOOL)a3 customPropertyPath:(id)a4 customProperty:(id)a5 searchValue:(id)a6 label:(id)a7;
- (id)_predicateForToManyRelationshipName:(id)a0 relativeKeyPath:(id)a1 comparison:(long long)a2 value:(id)a3 label:(id)a4;
- (id)_predicateForMessagingAddressService:(id)a0 comparison:(long long)a1 value:(id)a2 label:(id)a3;
- (id)_predicateForCustomProperty:(id)a0 comparison:(long long)a1 value:(id)a2 label:(id)a3;
- (BOOL)isReferencingGroup:(id)a0;
- (id)_predicateForImplClass:(Class)a0 addressBook:(id)a1;
- (id)_predicateForImplClass:(Class)a0 context:(id)a1 basePersistenceURL:(id)a2;
- (BOOL)compareWithRecordValue:(id)a0;
- (id)_valueInMultiValue:(id)a0;
- (BOOL)_compareSingleScalarWithRecordValue:(id)a0;
- (BOOL)_compareSingleArrayWithRecordValue:(id)a0;
- (BOOL)_compareSingleDictionaryKeyWithRecordValue:(id)a0;
- (BOOL)_compareSingleDictionaryNoKeyWithRecordValue:(id)a0;
- (BOOL)_compareMultiLabelScalarWithRecordValue:(id)a0;
- (BOOL)_compareMultiLabelArrayWithRecordValue:(id)a0;
- (BOOL)_compareMultiLabelDictionaryKeyWithRecordValue:(id)a0;
- (BOOL)_compareMultiLabelDictionaryNoKeyWithRecordValue:(id)a0;
- (BOOL)_compareMultiNoLabelScalarWithRecordValue:(id)a0;
- (BOOL)_compareMultiNoLabelArrayWithRecordValue:(id)a0;
- (BOOL)_compareMultiNoLabelDictionaryKeyWithRecordValue:(id)a0;
- (BOOL)_compareMultiNoLabelDictionaryNoKeyWithRecordValue:(id)a0;
- (BOOL)nts_MatchesRecord:(id)a0;
- (BOOL)predicateMatchesRecord:(id)a0;
- (BOOL)matchesRecord:(id)a0;
- (id)searchRecordClasses;
- (BOOL)searchGroups;
- (BOOL)usesGroupInDefinition:(id)a0;
- (id)groupsUsedInDefinition;
- (BOOL)searchPeople;
- (id)prefetchingRelationshipKeyPathsForImplClass:(Class)a0 inAddressBook:(id)a1;
- (void)setDiacriticInsensitiveOption:(BOOL)a0;
- (BOOL)diacriticInsensitiveOption;
- (long long)_comparison;
- (BOOL)isSimpleSearch;
- (BOOL)_isNegation;
- (id)_withinDate;
- (id)affectedStoresInAddressBook:(id)a0;
- (id)storesInAddressBook:(id)a0 exceptStore:(id)a1;
- (id)decodeParentGroupsWithCoder:(id)a0;
- (id)decodeDatabasePathWithCoder:(id)a0;
- (id)addressBookWithCoder:(id)a0 databaseDirectory:(id)a1;
- (id)decodeAccountWithCoder:(id)a0;

@end
