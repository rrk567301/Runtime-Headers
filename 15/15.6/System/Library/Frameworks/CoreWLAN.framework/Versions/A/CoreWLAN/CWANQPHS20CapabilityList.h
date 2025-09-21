@interface CWANQPHS20CapabilityList : CWANQPElement <NSSecureCoding, NSCopying>

@property (class, readonly) char supportsSecureCoding;

@property (nonatomic) char supportsHSQueryList;
@property (nonatomic) char supportsHSCapabilityList;
@property (nonatomic) char supportsOperatorFriendlyName;
@property (nonatomic) char supportsWANMetrics;
@property (nonatomic) char supportsConnectionCapability;
@property (nonatomic) char supportsNAIHomeRealmQuery;
@property (nonatomic) char supportsOperatingClassIndication;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithNetwork:(id)a0 timestamp:(id)a1 anqpResult:(id)a2;

@end
