@class NSString;

@interface CNAddressingGrammarsEncryptedDescription : CNMultiValuePropertyDescription <CNAbstractPropertyDescription>

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
- (id)coreDataOwnedEntityName;
- (void)copyFromCoreDataContact:(id)a0 toContact:(id)a1;
- (void)copyFromLabeledValue:(id)a0 toOwnedObject:(id)a1;
- (id)coreDataKey;
- (void)decodeUsingCoder:(id)a0 contact:(id)a1;
- (id /* block */)ownedObjectToLabeledValueValueTransform;
- (id)equivalentLabelSets;
- (id)_encryptedValueFromLabeledValue:(id)a0;
- (BOOL)canSaveLabeledValue:(id)a0;
- (Class)labeledValueClass;
- (id)standardLabels;
- (id)stringForIndexingForContact:(id)a0;
- (id)subCoreDataPredicatePropertiesByKey;

@end
