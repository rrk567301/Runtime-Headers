@interface W5WiFiChannel : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) long long channel;
@property (readonly, nonatomic) unsigned int flags;

- (BOOL)conformsToProtocol:(id)a0;
- (long long)band;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqualToChannel:(id)a0;
- (unsigned long long)hash;
- (long long)channelWidth;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (id)initWithChannel:(long long)a0 flags:(unsigned int)a1;
- (id)init;
- (id)snifferDescription;

@end
