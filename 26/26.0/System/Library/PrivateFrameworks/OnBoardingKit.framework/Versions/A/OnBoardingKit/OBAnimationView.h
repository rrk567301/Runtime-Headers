@class CALayer, CAPackage, NSString;
@protocol OBAnimationAppearanceChangeDelegate;

@interface OBAnimationView : NSView <CALayerDelegate>

@property (retain, nonatomic) CALayer *packageLayer;
@property (retain, nonatomic) CAPackage *package;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } preferredFrame;
@property (nonatomic) BOOL needsBrightnessAdjustment;
@property (nonatomic) double accentRadianDelta;
@property (nonatomic) double accentBrightnessValue;
@property (nonatomic) BOOL accentUsesHSV;
@property double scale;
@property (weak, nonatomic) id<OBAnimationAppearanceChangeDelegate> appearanceChangeDelegate;
@property BOOL flipForRTL;
@property BOOL useAccentColor;
@property BOOL useHueRotation;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)drawLayer:(id)a0 inContext:(struct CGContext { } *)a1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)dealloc;
- (double)defaultScale;
- (void).cxx_destruct;
- (void)_setPackage:(id)a0;
- (void)addAccentColorToLayer:(id)a0;
- (void)appearanceChanged:(id)a0;
- (void)setPackage:(id)a0 sizingTransformScale:(double)a1;

@end
