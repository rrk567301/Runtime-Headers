@class NSString;

@interface CNPostalAddressesDescription : CNCompoundMultiValuePropertyDescription <CNAbstractPropertyDescription>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (char)address:(id)a0 winsTieBreakerAgainstAddressUsingStateNameCompleteness:(id)a1;
- (unsigned long long)indexOfUSState:(id)a0;
- (char)isStateValue:(id)a0 equivalentToValue:(id)a1;
- (char)address:(id)a0 winsTieBreakerAgainstAddress:(id)a1;
- (char)address:(id)a0 winsTieBreakerAgainstAddressUsingPostalCodeCompleteness:(id)a1;
- (id)coreDataKey;
- (void)decodeUsingCoder:(id)a0 contact:(id)a1;
- (void)encodeUsingCoder:(id)a0 contact:(id)a1;
- (char)isEqualForContact:(id)a0 other:(id)a1;
- (char)isPostalCodeValue:(id)a0 equivalentToValue:(id)a1;
- (char)isValue:(id)a0 equivalentToValue:(id)a1 forKey:(id)a2;
- (char)postalCodeIsMoreComplete:(id)a0;
- (unsigned long long)preferenceScoreForAddress:(id)a0;
- (unsigned long long)preferenceScoreForKey:(id)a0;
- (id)CNValueForContact:(id)a0;
- (char)canUnifyValue:(id)a0 withValue:(id)a1;
- (void)copyFromCoreDataContact:(id)a0 toContact:(id)a1;
- (void)copyFromLabeledValue:(id)a0 toOwnedObject:(id)a1;
- (id)coreDataOwnedEntityName;
- (id /* block */)dictionaryTransform;
- (id /* block */)fromDictionaryTransform;
- (char)isNonnull;
- (char)isValue:(id)a0 preferredToUnifiedValue:(id)a1;
- (Class)labeledValueClass;
- (id /* block */)ownedObjectToLabeledValueValueTransform;
- (void)setCNValue:(id)a0 onContact:(id)a1;
- (id)subCoreDataPredicatePropertiesByKey;
- (id)summarizationKeys;

@end
