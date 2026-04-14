@class NSDictionary;

@interface FAEligibilityRequirements : NSObject <NSSecureCoding> {
    NSDictionary *_properties;
}

@property (class, readonly) BOOL supportsSecureCoding;

- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithDictionaryRepresentation:(id)a0;
- (id)init;
- (id)requirementsForPropertyName:(id)a0;
- (id)initWithPropertyRequirements:(id)a0;

@end
