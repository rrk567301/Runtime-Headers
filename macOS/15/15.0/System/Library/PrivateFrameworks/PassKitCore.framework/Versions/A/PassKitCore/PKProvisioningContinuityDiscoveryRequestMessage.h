@interface PKProvisioningContinuityDiscoveryRequestMessage : PKSharingGenericMessage

@property (readonly, nonatomic) unsigned long long continuityType;
@property (readonly, nonatomic) BOOL verifyProximity;

+ (BOOL)supportsSecureCoding;

- (id)description;
- (BOOL)isEqual:(id)a0;
- (BOOL)configureWithContent:(id)a0;
- (id)initWithContinuityType:(unsigned long long)a0 verifyProximity:(BOOL)a1;

@end
