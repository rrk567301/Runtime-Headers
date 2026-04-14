@class NSDictionary;

@interface CNDictionaryPolicy : CNPermissivePolicy {
    NSDictionary *_policyDictionary;
}

+ (BOOL)supportsSecureCoding;

- (id)initWithDictionary:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)contactRestrictionsForLabeledProperty:(id)a0;
- (BOOL)isContactPropertySupported:(id)a0;
- (unsigned long long)maximumCountOfValuesForContactProperty:(id)a0;
- (unsigned long long)maximumCountOfValuesForContactProperty:(id)a0 label:(id)a1;
- (id)supportedLabelsForContactProperty:(id)a0;
- (id)unsupportedAttributesForLabeledContactProperty:(id)a0;

@end
