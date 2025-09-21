@class NSString;

@interface SFRemoteHotspotTrafficFilterParams : NSObject <NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (copy, nonatomic) NSString *srcIPAddress;
@property (nonatomic) unsigned short srcPort;
@property (copy, nonatomic) NSString *destIPAddress;
@property (nonatomic) unsigned short destPort;
@property (nonatomic) unsigned short ipProtocol;
@property (copy, nonatomic) NSString *trafficClass;
@property (nonatomic) unsigned int ipVersion;
@property (nonatomic) unsigned int idleTimeout;

- (id)description;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
