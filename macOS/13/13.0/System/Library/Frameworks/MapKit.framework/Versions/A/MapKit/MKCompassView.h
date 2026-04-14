@class NSString, MKBlurBackingLayer, MKCompassLayer;

@interface MKCompassView : NSView <MKCompassView> {
    MKBlurBackingLayer *_blurLayer;
    MKCompassLayer *_displayLayer;
    MKCompassLayer *_maskLayer;
    long long _outerRingTooltipTag;
    long long _innerDiscTooltipTag;
    long long _innerDiscTrackingRectTag;
}

@property (class, readonly) double diameter;

@property (nonatomic) double mapHeading;
@property (nonatomic, getter=isEnabled) BOOL enabled;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)_initMetrics;

- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (void)layout;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (BOOL)wantsUpdateLayer;
- (void)updateLayer;
- (void)setFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)viewDidChangeEffectiveAppearance;
- (void)viewDidMoveToWindow;
- (BOOL)accessibilityIsIgnored;
- (void)mouseEntered:(id)a0;
- (void)mouseExited:(id)a0;
- (void)_commonInit;
- (BOOL)canBecomeKeyView;
- (id)view:(id)a0 stringForToolTip:(long long)a1 point:(struct CGPoint { double x0; double x1; })a2 userData:(void *)a3;
- (void)updateBlurVisibility;
- (void)updateAccessibilityDescriptionWithAngle:(double)a0;
- (void)resetCompassFlatWithMapPitch:(double)a0 pitchEnabled:(BOOL)a1 mapType:(int)a2 changeButtonTextWithPitch:(BOOL)a3;
- (BOOL)isPointInCompass:(struct CGPoint { double x0; double x1; })a0;
- (BOOL)isPointInInnerPortion:(struct CGPoint { double x0; double x1; })a0;
- (BOOL)isPointInOuterRing:(struct CGPoint { double x0; double x1; })a0;
- (BOOL)isPointInNorthEastHalf:(struct CGPoint { double x0; double x1; })a0;
- (void)updateHighlight;
- (void)updateTooltip;
- (void)updateTooltipForInnerDiscHovered:(BOOL)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_innerDiscRect;

@end
