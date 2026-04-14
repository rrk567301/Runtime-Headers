@class NSView;

@interface _NSIntelligenceUIPlatterView : NSView {
    void /* unknown type, empty encoding */ _isBordered;
    void /* unknown type, empty encoding */ interiorLightView;
    void /* unknown type, empty encoding */ exteriorLightView;
    void /* unknown type, empty encoding */ latencyLightView;
    void /* unknown type, empty encoding */ fresnelView;
    void /* unknown type, empty encoding */ _contentView;
    void /* unknown type, empty encoding */ shimmerViews;
}

@property (nonatomic) BOOL hasInteriorLight;
@property (nonatomic) BOOL hasExteriorLight;
@property (nonatomic) BOOL bordered;
@property (nonatomic) BOOL indicatesIndeterminateProgress;
@property (nonatomic, retain) NSView *contentView;
@property (nonatomic) double cornerRadius;
@property (nonatomic) BOOL usesAudioLevels;
@property (nonatomic) double audioLevel;
@property (nonatomic) BOOL clipsToBounds;
@property (nonatomic) double _interiorLightFraction;
@property (nonatomic) double _exteriorLightFraction;
@property (nonatomic) double _borderFraction;
@property (nonatomic) double _indeterminateIndicatorFraction;

+ (id)defaultAnimationForKey:(id)a0;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (void)shimmer;
- (BOOL)isBordered;
- (void)shimmerFromEdge:(unsigned long long)a0;
- (void)shimmerFromPoint:(struct CGPoint { double x0; double x1; })a0;

@end
