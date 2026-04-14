@interface ICDocCamImageQuad : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) struct CGPoint { double x; double y; } topLeft;
@property (nonatomic) struct CGPoint { double x; double y; } topRight;
@property (nonatomic) struct CGPoint { double x; double y; } bottomLeft;
@property (nonatomic) struct CGPoint { double x; double y; } bottomRight;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } boundingBox;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } bounds;
@property (readonly, nonatomic) BOOL isConvex;
@property (readonly, nonatomic) BOOL containsIntersectingLines;
@property (readonly, nonatomic) BOOL containsPointsLessThanDistanceThreshold;
@property (readonly, nonatomic) BOOL containsPointOutsideOfExtendedImageBounds;
@property (readonly, nonatomic) BOOL containsAngleOutOfValidThreshold;
@property (readonly, nonatomic) double mininumAllowedDistanceBetweenPoints;
@property (readonly, nonatomic) BOOL isValid;

+ (id)quadFromCGRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)imageQuadByScalingBy:(struct CGSize { double x0; double x1; })a0;
- (id)initWithBottomLeft:(struct CGPoint { double x0; double x1; })a0 bottomRight:(struct CGPoint { double x0; double x1; })a1 topLeft:(struct CGPoint { double x0; double x1; })a2 topRight:(struct CGPoint { double x0; double x1; })a3;
- (void)addPointToQuadPoints:(struct CGPoint { double x0; double x1; })a0;
- (id)intersectionOfLineFrom:(struct CGPoint { double x0; double x1; })a0 to:(struct CGPoint { double x0; double x1; })a1 withLineFrom:(struct CGPoint { double x0; double x1; })a2 to:(struct CGPoint { double x0; double x1; })a3;
- (void)flipPointsWithSourceFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)rotatePointsByOrientation:(long long)a0;
- (void)rotatePointsRemovingOrientation:(long long)a0;
- (void)rotatePointsClockwise;
- (struct CGPoint { double x0; double x1; })pointRotatedClockwiseAroundOrigin:(struct CGPoint { double x0; double x1; })a0;
- (struct CGSize { double x0; double x1; })perspectiveCorrectedSize;
- (void)clampQuadToRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)orientIfNecessary;
- (id)flippedQuadFromSourceFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)applyOrientation:(long long)a0 boundingBox:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (void)removeOrientation:(long long)a0 boundingBox:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (id)quadByConvertingFromView:(id)a0 toView:(id)a1 isNormalized:(BOOL)a2;
- (id)normalizedQuadByConvertingFromView:(id)a0 toView:(id)a1 toViewSize:(struct CGSize { double x0; double x1; })a2;

@end
