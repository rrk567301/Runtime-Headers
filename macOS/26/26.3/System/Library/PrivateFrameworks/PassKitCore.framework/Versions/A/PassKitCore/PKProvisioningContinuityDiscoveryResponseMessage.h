@class PKContinuityProximityVerification;

@interface PKProvisioningContinuityDiscoveryResponseMessage : PKSharingGenericMessage

@property (readonly, nonatomic) PKContinuityProximityVerification *proximityVerification;

+ (BOOL)supportsSecureCoding;

- (id)description;
- (id)init;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (BOOL)configureWithContent:(id)a0;
- (id)initWithProximityVerification:(id)a0;

@end
