@class PKContinuityProximityVerification;

@interface PKProvisioningContinuityDiscoveryResponseMessage : PKSharingGenericMessage

@property (readonly, nonatomic) PKContinuityProximityVerification *proximityVerification;

+ (char)supportsSecureCoding;

- (id)description;
- (id)init;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (char)configureWithContent:(id)a0;
- (id)initWithProximityVerification:(id)a0;

@end
