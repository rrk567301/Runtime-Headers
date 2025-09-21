@interface PRBTRSSI : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (readonly, nonatomic) double timestamp;
@property (readonly, nonatomic) int rssi_dbm;
@property (readonly, nonatomic) int channel;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (char)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithTimeStamp:(double)a0 rssi_dbm:(int)a1 channel:(int)a2;

@end
