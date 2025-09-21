@class NSString;

@interface PKPassVerificationOneTimePinMethod : PKPassVerificationMethod

@property (readonly, nonatomic) unsigned long long channel;
@property (readonly, nonatomic) NSString *sourceAddress;
@property (readonly, nonatomic) NSString *destinationAddress;

+ (BOOL)supportsSecureCoding;

- (id)initWithDictionary:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)typeDescription;
- (void)_appendDescription:(id)a0;
- (id)_initWithChannel:(id)a0;
- (id)legacyChannelRepresentation;
- (BOOL)needsServerRequest;
- (id)supplementalTypeDescription;
- (BOOL)supportedOnCurrentDevice;

@end
