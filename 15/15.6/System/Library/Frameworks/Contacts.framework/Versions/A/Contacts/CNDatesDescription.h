@class NSString;

@interface CNDatesDescription : CNMultiValuePropertyDescription <CNAbstractPropertyDescription>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (id)coreDataKey;
- (void)decodeUsingCoder:(id)a0 contact:(id)a1;
- (void)encodeUsingCoder:(id)a0 contact:(id)a1;
- (char)isEqualForContact:(id)a0 other:(id)a1;
- (id)CNValueForContact:(id)a0;
- (char)canUnifyValue:(id)a0 withValue:(id)a1;
- (void)copyFromCoreDataContact:(id)a0 toContact:(id)a1;
- (void)copyFromLabeledValue:(id)a0 toOwnedObject:(id)a1;
- (id)coreDataOwnedEntityName;
- (id /* block */)fromPlistTransform;
- (char)isNonnull;
- (char)isValidMultiValueValue:(id)a0 error:(id *)a1;
- (char)isValue:(id)a0 preferredToUnifiedValue:(id)a1;
- (Class)labeledValueClass;
- (id /* block */)ownedObjectToLabeledValueValueTransform;
- (void)setCNValue:(id)a0 onContact:(id)a1;
- (id)standardLabels;
- (id)subCoreDataPredicatePropertiesByKey;

@end
