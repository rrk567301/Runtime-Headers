@class NSString;

@interface CNEmailAddressesDescription : CNMultiValuePropertyDescription <CNAbstractPropertyDescription>

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
- (id)standardLabels;
- (id)subCoreDataPredicatePropertiesByKey;

@end
