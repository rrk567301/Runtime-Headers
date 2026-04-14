@class NSNumber;

@interface STSCHWiFiAwareDiscoveryChannelInfo : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSNumber *supportedBands;
@property (retain, nonatomic) NSNumber *operatingClass;
@property (retain, nonatomic) NSNumber *channelNumber;

- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)asData;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithSupportedBands:(id)a0 operatingClass:(id)a1 channelNumber:(id)a2;

@end
