@class NSString;

@interface SFRemoteHotspotCellularBearerParams : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *srcIPAddress;
@property (nonatomic) unsigned short srcPort;
@property (copy, nonatomic) NSString *destIPAddress;
@property (nonatomic) unsigned short destPort;
@property (nonatomic) unsigned short ipProtocol;
@property (copy, nonatomic) NSString *trafficClass;

- (id)description;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;

@end
