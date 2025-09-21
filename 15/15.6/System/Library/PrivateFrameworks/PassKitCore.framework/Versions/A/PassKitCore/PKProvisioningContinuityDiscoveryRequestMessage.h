@class PKContinuityProximityAdvertisement;

@interface PKProvisioningContinuityDiscoveryRequestMessage : PKSharingGenericMessage

@property (readonly, nonatomic) unsigned long long continuityType;
@property (readonly, nonatomic) PKContinuityProximityAdvertisement *advertisement;

+ (char)supportsSecureCoding;

- (id)description;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (char)configureWithContent:(id)a0;
- (id)initWithContinuityType:(unsigned long long)a0 advertisement:(id)a1;

@end
