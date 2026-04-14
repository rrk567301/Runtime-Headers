@interface AXMRectangleDetectorNode : AXMEvaluationNode

@property (nonatomic) double cameraPixelFocalLength;
@property (nonatomic) struct CGPoint { double x; double y; } cameraOpticalOrigin;
@property (nonatomic) double minimumAspectRatio;
@property (nonatomic) double maximumAspectRatio;
@property (nonatomic) double quadratureTolerance;
@property (nonatomic) double minimumSize;
@property (nonatomic) long long maximumNumberOfRects;

+ (id)title;
+ (BOOL)supportsSecureCoding;
+ (BOOL)isSupported;

- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void)evaluate:(id)a0 metrics:(id)a1;
- (void)nodeInitialize;
- (BOOL)requiresVisionFramework;
- (BOOL)validateVisionKitSoftLinkSymbols;

@end
