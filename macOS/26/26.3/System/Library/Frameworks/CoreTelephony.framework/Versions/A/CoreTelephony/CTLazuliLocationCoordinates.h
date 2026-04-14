@class NSNumber;

@interface CTLazuliLocationCoordinates : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSNumber *longitude;
@property (copy, nonatomic) NSNumber *latitude;

- (id)description;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithReflection:(const struct LocationCoordinates { double x0; double x1; } *)a0;
- (BOOL)isEqualToCTLazuliLocationCoordinates:(id)a0;

@end
