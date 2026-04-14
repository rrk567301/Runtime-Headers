@class NSString;

@interface CNEmailAddressesDescription : CNMultiValuePropertyDescription <CNAbstractPropertyDescription>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)encodeUsingCoder:(id)a0 contact:(id)a1;
- (void)decodeUsingCoder:(id)a0 contact:(id)a1;
- (id)coreDataKey;
- (BOOL)isEqualForContact:(id)a0 other:(id)a1;
- (BOOL)isNonnull;
- (id)CNValueForContact:(id)a0;
- (void)setCNValue:(id)a0 onContact:(id)a1;
- (BOOL)canUnifyValue:(id)a0 withValue:(id)a1;
- (id)standardLabels;
- (id)subCoreDataPredicatePropertiesByKey;
- (id)coreDataOwnedEntityName;
- (void)copyFromCoreDataContact:(id)a0 toContact:(id)a1;
- (id /* block */)ownedObjectToLabeledValueValueTransform;
- (void)copyFromLabeledValue:(id)a0 toOwnedObject:(id)a1;

@end
