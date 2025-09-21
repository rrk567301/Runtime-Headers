@interface W5WiFiChannel : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (readonly, nonatomic) long long channel;
@property (readonly, nonatomic) unsigned int flags;

- (char)conformsToProtocol:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (id)init;
- (char)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (long long)band;
- (long long)channelWidth;
- (char)isEqualToChannel:(id)a0;
- (id)initWithChannel:(long long)a0 flags:(unsigned int)a1;
- (id)snifferDescription;

@end
