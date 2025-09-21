@class NSString;

@interface TVRMSService : NSObject

@property (retain, nonatomic) NSString *displayName;
@property (retain, nonatomic) NSString *networkName;
@property (retain, nonatomic) NSString *hostName;
@property (nonatomic) int port;
@property (nonatomic) long long serviceType;
@property (nonatomic) long long serviceDiscoverySource;
@property (nonatomic) long long serviceLegacyFlags;
@property (retain, nonatomic) NSString *homeSharingGroupKey;

+ (id)protobufsFromServices:(id)a0;
+ (id)servicesFromProtobufs:(id)a0;

- (id)description;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)data;
- (id)initWithData:(id)a0;
- (char)isLegacy;
- (id)protobuf;
- (char)isEqualToService:(id)a0;
- (id)initWithProtobuf:(id)a0;

@end
