@interface SHRange : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) double lowerBound;
@property (readonly) double upperBound;

+ (id)rangeWithLowerBound:(double)a0 upperBound:(double)a1;
+ (id)mergedRangesFrom:(id)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithSerializedRepresentation:(id)a0;
- (id)serializedRepresentation;
- (BOOL)contains:(double)a0;
- (BOOL)intersects:(id)a0;
- (id)initWithStart:(double)a0 duration:(double)a1;
- (id)initWithLowerBound:(double)a0 upperBound:(double)a1;

@end
