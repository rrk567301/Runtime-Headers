@class NSLayoutPoint, NSGradient;

@interface NSLinearGradientView : NSView {
    void /* unknown type, empty encoding */ _displayLink;
    void /* unknown type, empty encoding */ _speedApplicationTime;
    void /* unknown type, empty encoding */ _normalizedGradientStartPointXConstraint;
    void /* unknown type, empty encoding */ _normalizedGradientStartPointYConstraint;
    void /* unknown type, empty encoding */ _normalizedGradientEndPointXConstraint;
    void /* unknown type, empty encoding */ _normalizedGradientEndPointYConstraint;
    void /* unknown type, empty encoding */ _observations;
    void /* unknown type, empty encoding */ _effectiveGradientStartPoint;
    void /* unknown type, empty encoding */ _effectiveGradientEndPoint;
}

@property (nonatomic, retain) NSGradient *gradient;
@property (nonatomic, retain) NSLayoutPoint *gradientStartPoint;
@property (nonatomic, retain) NSLayoutPoint *gradientEndPoint;
@property (nonatomic) double speed;
@property (nonatomic) double offset;
@property (nonatomic) unsigned long long startEdgeMode;
@property (nonatomic) unsigned long long endEdgeMode;
@property (nonatomic) struct CGPoint { double x0; double x1; } normalizedGradientStartPoint;
@property (nonatomic) struct CGPoint { double x0; double x1; } normalizedGradientEndPoint;
@property (nonatomic) float normalizedPointHoldingPriority;

+ (id)defaultAnimationForKey:(id)a0;

- (void)drawRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)dealloc;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (void)_setLayoutEngine:(id)a0;

@end
