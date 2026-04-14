@class NSArray, NSDictionary;

@interface PKPassVerificationFieldsMethod : PKPassVerificationMethod {
    NSArray *_fieldIdentifiers;
    NSDictionary *_fieldConfiguration;
}

@property (readonly, copy, nonatomic) NSArray *fields;

+ (BOOL)supportsSecureCoding;

- (id)initWithDictionary:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)typeDescription;
- (void)_appendDescription:(id)a0;
- (id)initWithFieldIdentifiers:(id)a0 fieldConfiguration:(id)a1;
- (id)legacyChannelRepresentation;
- (BOOL)needsServerRequest;
- (BOOL)supportedOnCurrentDevice;

@end
