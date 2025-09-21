@class NSNumber;

@interface STSCHWiFiAwareDiscoveryChannelInfo : NSObject <NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (retain, nonatomic) NSNumber *supportedBands;
@property (retain, nonatomic) NSNumber *operatingClass;
@property (retain, nonatomic) NSNumber *channelNumber;

- (id)description;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)asData;
- (id)initWithSupportedBands:(id)a0 operatingClass:(id)a1 channelNumber:(id)a2;

@end
