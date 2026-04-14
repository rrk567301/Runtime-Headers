@interface CNAddressingGrammarsDescription : CNAddressingGrammarsEncryptedDescription

- (void)copyFromCoreDataContact:(id)a0 toContact:(id)a1;
- (BOOL)isNonnull;
- (id /* block */)ownedObjectToLabeledValueValueTransform;
- (BOOL)isEqualForContact:(id)a0 other:(id)a1;
- (void)setCNValue:(id)a0 onContact:(id)a1;
- (id)CNValueForContact:(id)a0;
- (BOOL)canUnifyValue:(id)a0 withValue:(id)a1;
- (id)init;
- (void)decodeUsingCoder:(id)a0 contact:(id)a1;
- (void)encodeUsingCoder:(id)a0 contact:(id)a1;
- (id)_encryptedValueFromLabeledValue:(id)a0;
- (BOOL)canSaveLabeledValue:(id)a0;
- (BOOL)crashOnNilTransformedValues;
- (id /* block */)fromPlistTransform;
- (Class)labeledValueClass;
- (id /* block */)plistTransform;

@end
