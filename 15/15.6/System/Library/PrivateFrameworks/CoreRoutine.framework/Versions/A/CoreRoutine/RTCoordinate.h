@interface RTCoordinate : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (readonly, nonatomic) double latitude;
@property (readonly, nonatomic) double longitude;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (id)init;
- (char)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithLatitude:(double)a0 longitude:(double)a1;
- (char)isEqualToCoordinate:(id)a0;

@end
