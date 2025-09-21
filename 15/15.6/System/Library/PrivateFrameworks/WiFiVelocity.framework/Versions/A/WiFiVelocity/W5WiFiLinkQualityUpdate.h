@interface W5WiFiLinkQualityUpdate : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (nonatomic) long long rssi;
@property (nonatomic) long long txRate;
@property (nonatomic) float cca;
@property (nonatomic) double timestamp;

- (char)conformsToProtocol:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
