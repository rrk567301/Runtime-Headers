@interface VNPoint : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) VNPoint *zeroPoint;
@property (class, readonly) char supportsSecureCoding;

@property (readonly) struct CGPoint { double x0; double x1; } location;
@property (readonly) double x;
@property (readonly) double y;

+ (double)distanceBetweenPoint:(id)a0 point:(id)a1;
+ (id)pointByApplyingVector:(id)a0 toPoint:(id)a1;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (id)init;
- (char)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithLocation:(struct CGPoint { double x0; double x1; })a0;
- (id)initWithX:(double)a0 y:(double)a1;
- (double)distanceToPoint:(id)a0;
- (id)transformedWith:(struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })a0;

@end
