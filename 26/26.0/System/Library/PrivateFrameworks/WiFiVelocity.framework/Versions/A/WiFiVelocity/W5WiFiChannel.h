@interface W5WiFiChannel : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) long long channel;
@property (readonly, nonatomic) unsigned int flags;

- (long long)channelWidth;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqualToChannel:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)init;
- (long long)band;
- (BOOL)conformsToProtocol:(id)a0;
- (id)description;
- (id)initWithCoder:(id)a0;
- (id)snifferDescription;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)initWithChannel:(long long)a0 flags:(unsigned int)a1;

@end
