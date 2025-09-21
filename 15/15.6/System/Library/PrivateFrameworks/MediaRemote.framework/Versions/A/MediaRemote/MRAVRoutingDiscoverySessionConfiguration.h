@class NSString, _MRDiscoverySessionConfigurationProtobuf;

@interface MRAVRoutingDiscoverySessionConfiguration : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (nonatomic) char populatesExternalDevice;
@property (copy, nonatomic) NSString *outputDeviceUID;
@property (readonly, copy, nonatomic) _MRDiscoverySessionConfigurationProtobuf *protobuf;
@property (readonly, nonatomic) unsigned int features;
@property (copy, nonatomic) NSString *routingContextUID;
@property (nonatomic) char enableThrottling;
@property (nonatomic) char alwaysAllowUpdates;
@property (nonatomic) unsigned int targetAudioSessionID;
@property (readonly, nonatomic) char isLocal;

+ (id)configurationWithEndpointFeatures:(unsigned int)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithEndpointFeatures:(unsigned int)a0;
- (id)initWithProtobuf:(id)a0;

@end
