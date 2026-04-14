@class NSDictionary;

@interface PKExistingCardAuthorizationDiscoveryResponseMessage : PKProvisioningContinuityDiscoveryResponseMessage

@property (readonly, nonatomic) NSDictionary *availablePassesBySessionIdentifier;

+ (BOOL)supportsSecureCoding;

- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)description;
- (BOOL)configureWithContent:(id)a0;
- (id)initWithAvailablePassesBySessionIdentifier:(id)a0 proximityVerification:(id)a1;

@end
