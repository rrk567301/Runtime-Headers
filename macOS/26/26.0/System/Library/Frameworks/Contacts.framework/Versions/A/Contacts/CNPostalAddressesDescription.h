@class NSString;

@interface CNPostalAddressesDescription : CNCompoundMultiValuePropertyDescription <CNAbstractPropertyDescription>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)isNonnull;
- (id)CNValueForContact:(id)a0;
- (BOOL)isEqualForContact:(id)a0 other:(id)a1;
- (void)setCNValue:(id)a0 onContact:(id)a1;
- (void)encodeUsingCoder:(id)a0 contact:(id)a1;
- (id)init;
- (BOOL)canUnifyValue:(id)a0 withValue:(id)a1;
- (id)coreDataOwnedEntityName;
- (void)copyFromCoreDataContact:(id)a0 toContact:(id)a1;
- (void)copyFromLabeledValue:(id)a0 toOwnedObject:(id)a1;
- (id)coreDataKey;
- (void)decodeUsingCoder:(id)a0 contact:(id)a1;
- (id /* block */)ownedObjectToLabeledValueValueTransform;
- (BOOL)address:(id)a0 winsTieBreakerAgainstAddressUsingStateNameCompleteness:(id)a1;
- (unsigned long long)indexOfUSState:(id)a0;
- (BOOL)isStateValue:(id)a0 equivalentToValue:(id)a1;
- (BOOL)address:(id)a0 winsTieBreakerAgainstAddress:(id)a1;
- (BOOL)address:(id)a0 winsTieBreakerAgainstAddressUsingPostalCodeCompleteness:(id)a1;
- (BOOL)isPostalCodeValue:(id)a0 equivalentToValue:(id)a1;
- (BOOL)isValue:(id)a0 equivalentToValue:(id)a1 forKey:(id)a2;
- (BOOL)postalCodeIsMoreComplete:(id)a0;
- (unsigned long long)preferenceScoreForAddress:(id)a0;
- (unsigned long long)preferenceScoreForKey:(id)a0;
- (id /* block */)dictionaryTransform;
- (id /* block */)fromDictionaryTransform;
- (BOOL)isValue:(id)a0 preferredToUnifiedValue:(id)a1;
- (Class)labeledValueClass;
- (id)subCoreDataPredicatePropertiesByKey;
- (id)summarizationKeys;

@end
