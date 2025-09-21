@class NSNumber;

@interface CTLazuliLocationCoordinates : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (copy, nonatomic) NSNumber *longitude;
@property (copy, nonatomic) NSNumber *latitude;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithReflection:(const struct LocationCoordinates { double x0; double x1; } *)a0;
- (char)isEqualToCTLazuliLocationCoordinates:(id)a0;

@end
