@class NSString, HMMatterHome;

@interface HMCHIPEcosystemPairAccessoryRequest : HMCHIPEcosystemRequest

@property (readonly, copy, nonatomic) HMMatterHome *home;
@property (readonly, copy, nonatomic) NSString *pairingIdentifier;

+ (BOOL)supportsSecureCoding;

- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)messageType;
- (id)attributeDescriptions;
- (id)initWithPairingIdentifier:(id)a0 home:(id)a1;

@end
