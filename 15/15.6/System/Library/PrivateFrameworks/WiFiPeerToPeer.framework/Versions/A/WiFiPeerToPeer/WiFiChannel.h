@interface WiFiChannel : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) char supportsSecureCoding;

@property (readonly, nonatomic) char extensionChannelAbove;
@property (readonly, nonatomic) unsigned int channelNumber;
@property (readonly, nonatomic) BOOL is2_4GHz;
@property (readonly, nonatomic) BOOL is5GHz;
@property (readonly, nonatomic) BOOL is6GHz;
@property (readonly, nonatomic) BOOL isDFS;
@property (readonly, nonatomic) long long bandwidth;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithChannelNumber:(unsigned int)a0 bandwidth:(long long)a1 is2_4GHz:(char)a2 is5GHz:(char)a3 is6GHz:(char)a4 isDFS:(char)a5 extensionChannelAbove:(char)a6;

@end
