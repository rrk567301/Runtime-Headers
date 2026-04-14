@interface CNAddressingGrammarsDescription : CNAddressingGrammarsEncryptedDescription

- (BOOL)isNonnull;
- (id)CNValueForContact:(id)a0;
- (BOOL)isEqualForContact:(id)a0 other:(id)a1;
- (void)setCNValue:(id)a0 onContact:(id)a1;
- (void)encodeUsingCoder:(id)a0 contact:(id)a1;
- (id)init;
- (BOOL)canUnifyValue:(id)a0 withValue:(id)a1;
- (void)copyFromCoreDataContact:(id)a0 toContact:(id)a1;
- (void)decodeUsingCoder:(id)a0 contact:(id)a1;
- (id /* block */)ownedObjectToLabeledValueValueTransform;
- (id)_encryptedValueFromLabeledValue:(id)a0;
- (BOOL)canSaveLabeledValue:(id)a0;
- (BOOL)crashOnNilTransformedValues;
- (id /* block */)fromPlistTransform;
- (Class)labeledValueClass;
- (id /* block */)plistTransform;

@end
