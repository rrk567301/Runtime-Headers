@class NSNumber;

@interface CTLazuliSuggestedActionShowCoordinates : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSNumber *latitude;
@property (retain, nonatomic) NSNumber *longitude;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithReflection:(const struct SuggestedActionShowCoordinates { double x0; double x1; } *)a0;
- (BOOL)isEqualToCTLazuliSuggestedActionShowCoordinates:(id)a0;

@end
