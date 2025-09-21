@interface CNPermissivePolicy : CNPolicy

+ (char)supportsSecureCoding;
+ (id)sharedPermissivePolicy;

- (id)initWithCoder:(id)a0;
- (char)isReadonly;
- (char)isContactPropertySupported:(id)a0;
- (unsigned long long)maximumCountOfValuesForContactProperty:(id)a0;
- (unsigned long long)maximumCountOfValuesForContactProperty:(id)a0 label:(id)a1;
- (char)shouldAddContact:(id)a0;
- (char)shouldRemoveContact:(id)a0;
- (char)shouldSetValue:(id)a0 ofProperty:(id)a1 onContact:(id)a2 replacementValue:(id *)a3;
- (id)supportedLabelsForContactProperty:(id)a0;
- (id)unsupportedAttributesForLabeledContactProperty:(id)a0;
- (id)unsupportedKeyPathsForContactProperty:(id)a0;

@end
