@class NSString;

@interface CNInstantMessageAddressesDescription : CNCompoundMultiValuePropertyDescription <CNAbstractPropertyDescription>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)copyFromCoreDataContact:(id)a0 toContact:(id)a1;
- (BOOL)isNonnull;
- (id /* block */)ownedObjectToLabeledValueValueTransform;
- (BOOL)isEqualForContact:(id)a0 other:(id)a1;
- (void)setCNValue:(id)a0 onContact:(id)a1;
- (id)CNValueForContact:(id)a0;
- (BOOL)canUnifyValue:(id)a0 withValue:(id)a1;
- (id)init;
- (void)decodeUsingCoder:(id)a0 contact:(id)a1;
- (void)copyFromLabeledValue:(id)a0 toOwnedObject:(id)a1;
- (void)encodeUsingCoder:(id)a0 contact:(id)a1;
- (id)coreDataKey;
- (id)coreDataOwnedEntityName;
- (id)coreDataRelationshipKeyPathsForPrefetching;
- (id /* block */)dictionaryTransform;
- (id /* block */)fromDictionaryTransform;
- (Class)labeledValueClass;
- (id)subCoreDataPredicatePropertiesByKey;
- (id)summarizationKeys;

@end
