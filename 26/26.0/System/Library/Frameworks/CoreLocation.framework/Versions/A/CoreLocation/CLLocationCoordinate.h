@interface CLLocationCoordinate : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) double latitude;
@property (nonatomic) double longitude;

- (id)initWithLatitude:(double)a0 longitude:(double)a1;
- (BOOL)isValid;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)initWithCoder:(id)a0;
- (double)distanceFrom:(id)a0;
- (BOOL)isEqualCoordinate:(id)a0;

@end
