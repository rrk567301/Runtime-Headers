@class NSError, NSString, NSUUID, NSDate, CWFScanResult, CWFNetworkProfile;

@interface CWFJoinStatus : NSObject <CWFJSONEncodable, NSCopying, NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (copy, nonatomic) NSUUID *UUID;
@property (copy, nonatomic) NSString *interfaceName;
@property (copy, nonatomic) CWFScanResult *scanResult;
@property (copy, nonatomic) CWFNetworkProfile *knownNetworkProfile;
@property (nonatomic) unsigned int EAP8021XSupplicantState;
@property (nonatomic) unsigned int EAP8021XControlMode;
@property (nonatomic) unsigned int EAP8021XControlState;
@property (nonatomic) int EAP8021XClientStatus;
@property (copy, nonatomic) NSDate *startedAt;
@property (copy, nonatomic) NSDate *endedAt;
@property (readonly) double duration;
@property (copy, nonatomic) NSDate *associationEndedAt;
@property (readonly) double durationUntilAssociationEnded;
@property (copy, nonatomic) NSDate *authenticationEndedAt;
@property (readonly) double durationUntilAuthenticationEnded;
@property (copy, nonatomic) NSDate *linkUpAt;
@property (readonly) double durationUntilLinkUp;
@property (copy, nonatomic) NSDate *IPv4AssignedAt;
@property (readonly) double durationUntilIPv4Assigned;
@property (copy, nonatomic) NSDate *IPv4PrimaryAt;
@property (readonly) double durationUntilIPv4Primary;
@property (copy, nonatomic) NSDate *IPv6AssignedAt;
@property (readonly) double durationUntilIPv6Assigned;
@property (copy, nonatomic) NSDate *IPv6PrimaryAt;
@property (readonly) double durationUntilIPv6Primary;
@property (copy, nonatomic) NSError *error;
@property (nonatomic, getter=isAutoJoin) char autoJoin;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)JSONCompatibleKeyValueMap;
- (id)descriptionForEAPOLClientStatus;
- (id)descriptionForEAP8021XControlState;
- (id)descriptionForEAPOLControlMode;
- (char)isEqualToJoinStatus:(id)a0;

@end
