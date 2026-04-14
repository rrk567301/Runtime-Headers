@interface W5WiFiChannel : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) long long channel;
@property (readonly, nonatomic) unsigned int flags;

- (BOOL)isEqualToChannel:(id)a0;
- (long long)band;
- (long long)channelWidth;
- (BOOL)conformsToProtocol:(id)a0;
- (id)description;
- (id)init;
- (id)initWithChannel:(long long)a0 flags:(unsigned int)a1;
- (id)snifferDescription;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;

@end
