@class NSString, NSProgressIndicatorConfiguration, NSProgressIndicator, CALayer, CADisplayLink;

@interface NSProgressIndicatorLegacyVisualProvider : NSObject <NSProgressIndicatorVisualProvider> {
    NSProgressIndicator *_progressIndicator;
    NSProgressIndicatorConfiguration *_configuration;
    CALayer *_indicatorLayer;
    unsigned int _animationIndex;
    CADisplayLink *_displayLink;
    double _animationStartTime;
}

@property (weak) NSProgressIndicator *progressIndicator;
@property (readonly) struct CGSize { double x0; double x1; } intrinsicContentSize;
@property (readonly) struct NSEdgeInsets { double x0; double x1; double x2; double x3; } alignmentRectInsets;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)drawRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)startAnimation;
- (void)setStyle:(unsigned long long)a0;
- (void)setProgress:(double)a0;
- (id)init;
- (void)step:(id)a0;
- (void)_updateDisplayLink;
- (void).cxx_destruct;
- (void)updateConfiguration:(id)a0;
- (void)updateLayer;
- (void)dealloc;
- (void)setIndeterminate:(BOOL)a0;
- (void)setControlSize:(unsigned long long)a0;
- (void)stopAnimation;
- (unsigned long long)effectiveControlSize;
- (void)setBackgroundEmphasized:(BOOL)a0;
- (void)setRoundDeterminateColor:(id)a0;
- (void)setUsesThreadedAnimation:(BOOL)a0;
- (int)vibrancyBlendMode;
- (BOOL)wantsUpdateLayer;

@end
