@interface CWANQPCapabilityList : CWANQPElement <NSSecureCoding, NSCopying>

@property (class, readonly) char supportsSecureCoding;

@property (nonatomic) char supportsVenueName;
@property (nonatomic) char supportsNetworkAuthenticationType;
@property (nonatomic) char supportsRoamingConsortium;
@property (nonatomic) char supportsNAIRealm;
@property (nonatomic) char supportsDomainName;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithNetwork:(id)a0 timestamp:(id)a1 anqpResult:(id)a2;

@end
