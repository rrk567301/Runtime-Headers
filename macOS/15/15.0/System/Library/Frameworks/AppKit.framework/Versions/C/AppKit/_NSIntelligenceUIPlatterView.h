@class NSView;

@interface _NSIntelligenceUIPlatterView : NSView {
    void /* unknown type, empty encoding */ _backgroundView;
    void /* unknown type, empty encoding */ _backgroundMaskView;
    void /* unknown type, empty encoding */ _interiorLightView;
    void /* unknown type, empty encoding */ _shimmerLightView;
    void /* unknown type, empty encoding */ _shimmerLightMaskView;
    void /* unknown type, empty encoding */ _contentView;
    void /* unknown type, empty encoding */ _borderLightView;
    void /* unknown type, empty encoding */ _borderLightMaskView;
    void /* unknown type, empty encoding */ _indeterminateLightView;
    void /* unknown type, empty encoding */ _indeterminateLightShapeView;
    void /* unknown type, empty encoding */ _indeterminateLightSpokeView;
    void /* unknown type, empty encoding */ _constraints;
    void /* unknown type, empty encoding */ _subviews;
    void /* unknown type, empty encoding */ _contentViewConstraints;
    void /* unknown type, empty encoding */ _bordered;
    void /* unknown type, empty encoding */ _shimmerCount;
}

@property (nonatomic, retain) NSView *contentView;
@property (nonatomic) void /* unknown type, empty encoding */ _exteriorLightFraction;
@property (nonatomic) void /* unknown type, empty encoding */ hasExteriorLight;
@property (nonatomic) void /* unknown type, empty encoding */ _interiorLightFraction;
@property (nonatomic) void /* unknown type, empty encoding */ hasInteriorLight;
@property (nonatomic) void /* unknown type, empty encoding */ _borderFraction;
@property (nonatomic) double cornerRadius;
@property (nonatomic) void /* unknown type, empty encoding */ _indeterminateIndicatorFraction;
@property (nonatomic) void /* unknown type, empty encoding */ indicatesIndeterminateProgress;
@property (nonatomic) void /* unknown type, empty encoding */ usesAudioLevels;
@property (nonatomic) void /* unknown type, empty encoding */ audioLevel;

+ (id)defaultAnimationForKey:(id)a0;
+ (BOOL)mightNeedToClipToBoundsBecauseOfSomeOtherProperty;

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)shimmer;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (BOOL)isBordered;
- (void)setBordered:(BOOL)a0;
- (void)shimmerFromEdge:(unsigned long long)a0;
- (void)shimmerFromPoint:(struct CGPoint { double x0; double x1; })a0;
- (void)updateConstraints;
- (void)viewDidChangeEffectiveAppearance;

@end
