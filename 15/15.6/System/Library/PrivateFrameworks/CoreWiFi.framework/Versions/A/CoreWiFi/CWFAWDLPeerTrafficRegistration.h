@class NSString, NSArray;

@interface CWFAWDLPeerTrafficRegistration : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (copy, nonatomic) NSString *serviceName;
@property (nonatomic, getter=isActive) char active;
@property (nonatomic) int sessionFlags;
@property (nonatomic) unsigned long long desiredBandwidth;
@property (nonatomic) unsigned long long desiredLatency;
@property (nonatomic) unsigned long long preferredChannel;
@property (nonatomic) unsigned long long secondaryPreferredChannel;
@property (copy, nonatomic) NSArray *peerContextList;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (char)isEqualToAWDLPeerTrafficRegistration:(id)a0;
- (id)serializedRegistrationInfo;

@end
