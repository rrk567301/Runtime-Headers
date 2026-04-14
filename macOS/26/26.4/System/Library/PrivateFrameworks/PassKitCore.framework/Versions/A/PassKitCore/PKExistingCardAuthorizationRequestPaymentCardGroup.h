@class NSArray, PKExistingCardAuthorizationRequestDestinationDeviceSignature;

@interface PKExistingCardAuthorizationRequestPaymentCardGroup : PKExistingCardAuthorizationRequestGroup

@property (readonly, nonatomic) NSArray *entries;
@property (readonly, nonatomic) PKExistingCardAuthorizationRequestDestinationDeviceSignature *destinationDeviceSignature;

+ (BOOL)supportsSecureCoding;

- (id)initWithDict:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void).cxx_destruct;
- (id)description;
- (id)initWithCoder:(id)a0;
- (id)initWithEntries:(id)a0 destinationDeviceSignature:(id)a1;
- (BOOL)isEqualToPaymentCardGroup:(id)a0;

@end
