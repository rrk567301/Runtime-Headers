@class NSView, NSString, MKImageView, CALayer, NSColor, _MKBezierPathView, NSImage, MKWalletMerchantStylingInfo, GEOFeatureStyleAttributes, _MKUILabel;

@interface MKMarkerAnnotationView : MKAnnotationView {
    CALayer *_shadow;
    CALayer *_selectedMarkerLayer;
    _MKBezierPathView *_markerView;
    MKImageView *_glyphImageView;
    _MKUILabel *_glyphLabel;
    _MKBezierPathView *_selectedMarkerView;
    MKImageView *_selectedGlyphImageView;
    _MKUILabel *_selectedGlyphLabel;
    _MKBezierPathView *_selectedDotView;
    MKWalletMerchantStylingInfo *_walletMerchantStylingInfo;
    BOOL _isObserving;
}

@property (retain, nonatomic, getter=_walletMerchantStylingInfo, setter=_setWalletMerchantStylingInfo:) MKWalletMerchantStylingInfo *walletMerchantStylingInfo;
@property (copy, nonatomic) NSColor *markerStrokeTintColor;
@property (nonatomic) double markerStrokeWidth;
@property (retain, nonatomic) NSView *selectedContentView;
@property (retain, nonatomic, getter=_styleAttributes, setter=_setStyleAttributes:) GEOFeatureStyleAttributes *styleAttributes;
@property (nonatomic) long long titleVisibility;
@property (nonatomic) long long subtitleVisibility;
@property (copy, nonatomic) NSColor *markerTintColor;
@property (copy, nonatomic) NSColor *glyphTintColor;
@property (copy, nonatomic) NSString *glyphText;
@property (copy, nonatomic) NSImage *glyphImage;
@property (copy, nonatomic) NSImage *selectedGlyphImage;
@property (nonatomic) BOOL animatesWhenAdded;

+ (Class)_mapkitLeafClass;
+ (float)_defaultDisplayPriority;

- (void)dealloc;
- (void).cxx_destruct;
- (void)prepareForReuse;
- (void)layout;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void)setFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)viewDidChangeEffectiveAppearance;
- (struct NSEdgeInsets { double x0; double x1; double x2; double x3; })alignmentRectInsets;
- (void)setTitleVisibility:(long long)a0;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void)layoutSublayersOfLayer:(id)a0;
- (void)_setSelected:(BOOL)a0 animated:(BOOL)a1;
- (void)setAnnotation:(id)a0;
- (id)initWithAnnotation:(id)a0 reuseIdentifier:(id)a1;
- (BOOL)isProvidingCustomFeature;
- (BOOL)updateCalloutViewIfNeededAnimated:(BOOL)a0;
- (void)setDragState:(unsigned long long)a0 animated:(BOOL)a1;
- (void)_didDragWithVelocity:(struct CGPoint { double x0; double x1; })a0;
- (BOOL)canShowCallout;
- (struct NSEdgeInsets { double x0; double x1; double x2; double x3; })_defaultCollisionAlignmentRectInsets;
- (void)prepareForDisplay;
- (void)_updateStyle;
- (BOOL)_shouldDeselectWhenDragged;
- (BOOL)_hasDataRequiringCallout;
- (long long)_currentMarkerState;
- (void)_updateContentForState:(long long)a0;
- (id)_effectiveMarkerTintColorForState:(long long)a0;
- (id)_resolvedColorForAppearance;
- (void)_updateSelectedMarkerLayer;
- (void)_updateContentForState:(long long)a0 forceUpdate:(BOOL)a1;
- (id)_effectiveMarkerStrokeTintColorForState:(long long)a0;
- (id)_effectiveGlyphTintColorForState:(long long)a0;
- (double)_effectiveMarkerStrokeWidthForState:(long long)a0;
- (id)_effectiveGlyphText;
- (id)_effectiveGlyphImageForState:(long long)a0 isSystemProvided:(BOOL *)a1;
- (void)_setupNormalViewsIfNeeded;
- (void)_setupSelectedViewsIfNeededUsesCallout:(BOOL)a0;
- (void)_configureViewsForState:(long long)a0 usesCallout:(BOOL)a1 animated:(BOOL)a2;
- (void)_unhideForDisplay;
- (void)prepareForSnapshotting;
- (struct { struct CGSize { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; double x2; double x3; struct CGSize { double x0; double x1; } x4; struct CGSize { double x0; double x1; } x5; struct CGSize { double x0; double x1; } x6; })_metricsForState:(long long)a0;
- (id)_layersToAnimateForViews:(id)a0;
- (double)_effectiveShadowAlphaForState:(long long)a0;
- (void)_setShadowAlpha:(double)a0 transform:(struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })a1 duration:(double)a2;
- (void)_swayAnimation;
- (long long)_stateForIsSelected:(BOOL)a0;
- (void)_configureAnimated:(BOOL)a0 fromState:(long long)a1 toState:(long long)a2;
- (void)setSubtitleVisibility:(long long)a0;
- (id)_effectiveSubtitlesIsCollidable:(BOOL *)a0;

@end
