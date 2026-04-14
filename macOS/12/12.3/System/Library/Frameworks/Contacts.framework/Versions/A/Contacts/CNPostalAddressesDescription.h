@class NSString;

@interface CNPostalAddressesDescription : CNCompoundMultiValuePropertyDescription <CNAbstractPropertyDescription>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (id)coreDataKey;
- (void)encodeUsingCoder:(id)a0 contact:(id)a1;
- (void)decodeUsingCoder:(id)a0 contact:(id)a1;
- (BOOL)isEqualForContact:(id)a0 other:(id)a1;
- (BOOL)isNonnull;
- (id)CNValueForContact:(id)a0;
- (void)setCNValue:(id)a0 onContact:(id)a1;
- (BOOL)canUnifyValue:(id)a0 withValue:(id)a1;
- (Class)labeledValueClass;
- (id /* block */)dictionaryTransform;
- (id /* block */)fromDictionaryTransform;
- (id)summarizationKeys;
- (void)copyFromLabeledValue:(id)a0 toOwnedObject:(id)a1;
- (id)subCoreDataPredicatePropertiesByKey;
- (id)coreDataOwnedEntityName;
- (void)copyFromCoreDataContact:(id)a0 toContact:(id)a1;
- (id /* block */)ownedObjectToLabeledValueValueTransform;

@end
