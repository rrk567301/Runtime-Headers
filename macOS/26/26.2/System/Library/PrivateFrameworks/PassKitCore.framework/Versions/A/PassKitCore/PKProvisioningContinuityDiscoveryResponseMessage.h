@class PKContinuityProximityVerification;

@interface PKProvisioningContinuityDiscoveryResponseMessage : PKSharingGenericMessage

@property (readonly, nonatomic) PKContinuityProximityVerification *proximityVerification;

+ (BOOL)supportsSecureCoding;

- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)description;
- (id)init;
- (BOOL)configureWithContent:(id)a0;
- (id)initWithProximityVerification:(id)a0;

@end
