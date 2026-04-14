@class NSString;

@interface SFRemoteHotspotTrafficFilterParams : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *srcIPAddress;
@property (nonatomic) unsigned short srcPort;
@property (copy, nonatomic) NSString *destIPAddress;
@property (nonatomic) unsigned short destPort;
@property (nonatomic) unsigned short ipProtocol;
@property (copy, nonatomic) NSString *trafficClass;
@property (nonatomic) unsigned int ipVersion;
@property (nonatomic) unsigned int idleTimeout;

- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)description;

@end
