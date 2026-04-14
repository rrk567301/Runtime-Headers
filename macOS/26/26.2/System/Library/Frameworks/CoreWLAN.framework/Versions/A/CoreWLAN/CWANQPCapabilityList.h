@interface CWANQPCapabilityList : CWANQPElement <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) BOOL supportsVenueName;
@property (nonatomic) BOOL supportsNetworkAuthenticationType;
@property (nonatomic) BOOL supportsRoamingConsortium;
@property (nonatomic) BOOL supportsNAIRealm;
@property (nonatomic) BOOL supportsDomainName;

- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (id)initWithNetwork:(id)a0 timestamp:(id)a1 anqpResult:(id)a2;

@end
