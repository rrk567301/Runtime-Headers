@interface CLLocationCoordinate : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) double latitude;
@property (nonatomic) double longitude;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isValid;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)initWithLatitude:(double)a0 longitude:(double)a1;
- (id)initWithCoder:(id)a0;
- (void)dealloc;
- (double)distanceFrom:(id)a0;
- (BOOL)isEqualCoordinate:(id)a0;

@end
