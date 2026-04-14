@interface PCLatLon : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) double latitudeDeg;
@property (nonatomic) double longitudeDeg;

- (id)initWithLatitude:(double)a0 longitude:(double)a1;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)initWithCoder:(id)a0;
- (id)init;
- (double)distanceTo:(id)a0;

@end
