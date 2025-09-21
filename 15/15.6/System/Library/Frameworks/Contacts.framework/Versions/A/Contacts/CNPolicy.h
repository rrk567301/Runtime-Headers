@interface CNPolicy : NSObject <NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (readonly, nonatomic, getter=isReadonly) char readonly;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)_replacementLabeledValue:(id)a0 omittingKeys:(id)a1;
- (char)_validateLabeledValueArrayAttributeSupport:(id)a0 forContactProperty:(id)a1 replacementValue:(id *)a2;
- (char)_validateLabeledValueArrayLabels:(id)a0 forContactProperty:(id)a1 replacementValue:(id *)a2;
- (char)isContactPropertySupported:(id)a0;
- (unsigned long long)maximumCountOfValuesForContactProperty:(id)a0;
- (unsigned long long)maximumCountOfValuesForContactProperty:(id)a0 label:(id)a1;
- (char)shouldAddContact:(id)a0;
- (char)shouldRemoveContact:(id)a0;
- (char)shouldSetValue:(id)a0 property:(id)a1 contact:(id)a2 replacementValue:(id *)a3;
- (id)supportedLabelsForContactProperty:(id)a0;
- (id)unsupportedAttributesForLabeledContactProperty:(id)a0;

@end
