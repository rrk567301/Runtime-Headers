@class CHSubstroke;

@interface CHSubstrokePlacement : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) CHSubstroke *substroke;
@property (nonatomic) struct CGVector { double dx; double dy; } writingOrientation;
@property (nonatomic) struct CGVector { double dx; double dy; } strokeDeviation;
@property (nonatomic) long long originalWritingDirectionIndex;
@property (nonatomic) struct CGPoint { double x; double y; } coalescedCenter;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } rotatedBounds;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })orientedBounds;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })boundsRotatedAroundPoint:(struct CGPoint { double x0; double x1; })a0 byAngle:(double)a1;
- (id)initWithSubstroke:(id)a0;
- (struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })orientationTransform;

@end
