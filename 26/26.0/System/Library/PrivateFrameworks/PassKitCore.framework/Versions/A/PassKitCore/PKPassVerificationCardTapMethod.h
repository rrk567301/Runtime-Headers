@interface PKPassVerificationCardTapMethod : PKPassVerificationMethod

+ (BOOL)supportsSecureCoding;

- (id)initWithDictionary:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)typeDescription;
- (void)_appendDescription:(id)a0;
- (id)legacyChannelRepresentation;
- (BOOL)needsServerRequest;
- (id)supplementalTypeDescription;
- (BOOL)supportedOnCurrentDevice;

@end
