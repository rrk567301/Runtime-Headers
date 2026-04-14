@class NSString;

@interface CNEmailAddressesDescription : CNMultiValuePropertyDescription <CNAbstractPropertyDescription>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)canUnifyValue:(id)a0 withValue:(id)a1;
- (void)setCNValue:(id)a0 onContact:(id)a1;
- (id)coreDataKey;
- (BOOL)isEqualForContact:(id)a0 other:(id)a1;
- (id /* block */)ownedObjectToLabeledValueValueTransform;
- (id)CNValueForContact:(id)a0;
- (void)decodeUsingCoder:(id)a0 contact:(id)a1;
- (void)copyFromCoreDataContact:(id)a0 toContact:(id)a1;
- (id)coreDataOwnedEntityName;
- (id)init;
- (void)copyFromLabeledValue:(id)a0 toOwnedObject:(id)a1;
- (void)encodeUsingCoder:(id)a0 contact:(id)a1;
- (BOOL)isNonnull;
- (id)standardLabels;
- (id)subCoreDataPredicatePropertiesByKey;

@end
