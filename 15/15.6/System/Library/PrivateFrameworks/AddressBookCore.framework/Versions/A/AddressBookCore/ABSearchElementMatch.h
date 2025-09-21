@class NSString;

@interface ABSearchElementMatch : ABSearchElement <NSSecureCoding> {
    NSString *_searchProperty;
    long long _searchPropertyType;
    id _searchValue;
    long long _searchValueType;
    NSString *_searchLabel;
    NSString *_searchKey;
    long long _testCase;
    char _searchPeople;
    char _diacriticInsensitive;
    long long _comparison;
}

@property (class, readonly) char supportsSecureCoding;

+ (void)initialize;

- (id)description;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)_value;
- (id)_label;
- (id)_key;
- (id)_searchProperty;
- (void)setSearchValue:(id)a0;
- (long long)encodingVersion;
- (char)_compareMultiLabelArrayWithRecordValue:(id)a0;
- (char)_compareMultiLabelDictionaryKeyWithRecordValue:(id)a0;
- (char)_compareMultiLabelDictionaryNoKeyWithRecordValue:(id)a0;
- (char)_compareMultiLabelScalarWithRecordValue:(id)a0;
- (char)_compareMultiNoLabelArrayWithRecordValue:(id)a0;
- (char)_compareMultiNoLabelDictionaryKeyWithRecordValue:(id)a0;
- (char)_compareMultiNoLabelDictionaryNoKeyWithRecordValue:(id)a0;
- (char)_compareMultiNoLabelScalarWithRecordValue:(id)a0;
- (char)_compareSingleArrayWithRecordValue:(id)a0;
- (char)_compareSingleDictionaryKeyWithRecordValue:(id)a0;
- (char)_compareSingleDictionaryNoKeyWithRecordValue:(id)a0;
- (char)_compareSingleScalarWithRecordValue:(id)a0;
- (long long)_comparison;
- (char)_isNegation;
- (void)_nts_CalculatePropertyTypeForRecord:(id)a0;
- (id)_predicateForCustomProperty:(id)a0 comparison:(long long)a1 value:(id)a2 label:(id)a3;
- (id)_predicateForImplClass:(Class)a0 addressBook:(id)a1;
- (id)_predicateForImplClass:(Class)a0 context:(id)a1 basePersistenceURL:(id)a2;
- (id)_predicateForKeyPath:(id)a0 comparison:(long long)a1 value:(id)a2;
- (id)_predicateForMessagingAddressService:(id)a0 comparison:(long long)a1 value:(id)a2 label:(id)a3;
- (id)_predicateForToManyRelationshipName:(id)a0 relativeKeyPath:(id)a1 comparison:(long long)a2 value:(id)a3 label:(id)a4;
- (id)_predicateForUnknownKeyWithComparison:(long long)a0 value:(id)a1;
- (id)_predicateForYearlessSearchOnDatePropertyKeyPath:(id)a0 toManyRelationshipName:(id)a1 futureOnly:(char)a2 allNotMatch:(char)a3 customPropertyPath:(id)a4 customProperty:(id)a5 searchValue:(id)a6 label:(id)a7;
- (id)_valueInMultiValue:(id)a0;
- (id)_withinDate;
- (id)addressBookWithCoder:(id)a0 databaseDirectory:(id)a1;
- (id)affectedStoresInAddressBook:(id)a0;
- (char)compareWithRecordValue:(id)a0;
- (id)decodeAccountWithCoder:(id)a0;
- (id)decodeDatabasePathWithCoder:(id)a0;
- (id)decodeParentGroupsWithCoder:(id)a0;
- (char)diacriticInsensitiveOption;
- (id)groupsUsedInDefinition;
- (id)initWithProperty:(id)a0 label:(id)a1 key:(id)a2 value:(id)a3 searchPeople:(char)a4 comparison:(long long)a5;
- (char)isReferencingGroup:(id)a0;
- (char)isSimpleSearch;
- (char)matchesRecord:(id)a0;
- (char)nts_MatchesRecord:(id)a0;
- (char)predicateMatchesRecord:(id)a0;
- (id)prefetchingRelationshipKeyPathsForImplClass:(Class)a0 inAddressBook:(id)a1;
- (char)searchGroups;
- (char)searchPeople;
- (id)searchRecordClasses;
- (void)setDiacriticInsensitiveOption:(char)a0;
- (id)storesInAddressBook:(id)a0 exceptStore:(id)a1;
- (char)usesGroupInDefinition:(id)a0;

@end
