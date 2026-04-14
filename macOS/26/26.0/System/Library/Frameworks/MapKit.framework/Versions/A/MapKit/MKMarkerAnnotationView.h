@class NSView, NSString, MKMarkerBalloonView, CALayer, NSColor, MKMarkerStyle, NSImage, GEOFeatureStyleAttributes, MKWalletMerchantStylingInfo, MKMarkerDotView;

@interface MKMarkerAnnotationView : MKAnnotationView {
    CALayer *_selectedMarkerSnapshotLayer;
    MKMarkerBalloonView *_markerView;
    MKMarkerDotView *_selectedDotView;
    MKMarkerBalloonView *_selectedMarkerView;
    MKMarkerStyle *_selectedMarkerStyle;
    MKMarkerStyle *_unselectedMarkerStyle;
    MKWalletMerchantStylingInfo *_walletMerchantStylingInfo;
    BOOL _isObserving;
    struct CGSize { double width; double height; } _size;
}

@property (retain, nonatomic, getter=_walletMerchantStylingInfo, setter=_setWalletMerchantStylingInfo:) MKWalletMerchantStylingInfo *walletMerchantStylingInfo;
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

+ (float)_defaultDisplayPriority;
+ (Class)_mapkitLeafClass;

- (void)layoutSublayersOfLayer:(id)a0;
- (void)_updateStyle;
- (struct NSEdgeInsets { double x0; double x1; double x2; double x3; })alignmentRectInsets;
- (void)setFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)dealloc;
- (void)layout;
- (void)prepareForDisplay;
- (void)setAnnotation:(id)a0;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void)viewDidChangeEffectiveAppearance;
- (void)prepareForReuse;
- (void).cxx_destruct;
- (void)_setSelected:(BOOL)a0 animated:(BOOL)a1;
- (void)setTitleVisibility:(long long)a0;
- (double)_preferredScale;
- (struct CGPoint { double x0; double x1; })_anchorPointForCalloutAnchorPosition:(long long)a0;
- (void)_configureAnimated:(BOOL)a0 fromState:(long long)a1 toState:(long long)a2;
- (void)_configureCalloutOffset;
- (void)_configureViewsForState:(long long)a0 usesCallout:(BOOL)a1 animated:(BOOL)a2;
- (id)_createMarkerStyleConfigurationForState:(long long)a0;
- (long long)_currentMarkerState;
- (id)_currentMarkerStyleForState:(long long)a0;
- (id)_customLegibleGlyphColor;
- (struct NSEdgeInsets { double x0; double x1; double x2; double x3; })_defaultCollisionAlignmentRectInsets;
- (void)_didDragWithVelocity:(struct CGPoint { double x0; double x1; })a0;
- (id)_effectiveGlyphImageForState:(long long)a0;
- (id)_effectiveGlyphText;
- (id)_effectiveGlyphTintColorForState:(long long)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_frameForSelectionAdjustment;
- (id)_glyphImageForImage:(id)a0;
- (BOOL)_hasCustomGlyphContent;
- (BOOL)_hasCustomSelectedGlyphContent;
- (BOOL)_hasDataRequiringCallout;
- (id)_layersToAnimateForViews:(id)a0;
- (struct { struct CGSize { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; double x2; struct CGSize { double x0; double x1; } x3; struct CGSize { double x0; double x1; } x4; struct CGSize { double x0; double x1; } x5; })_metricsForState:(long long)a0;
- (id)_resolveColor:(id)a0;
- (id)_resolvedCustomGlyphTintColor;
- (id)_resolvedMarkerTintColor;
- (void)_setupNormalViewsIfNeeded;
- (void)_setupSelectedViewsIfNeededUsesCallout:(BOOL)a0;
- (BOOL)_shouldDeselectWhenDragged;
- (long long)_stateForIsSelected:(BOOL)a0;
- (void)_swayAnimation;
- (void)_unhideForDisplay;
- (void)_updateContentForState:(long long)a0;
- (void)_updateContentForState:(long long)a0 forceUpdate:(BOOL)a1;
- (void)_updateContentView:(id)a0 forState:(long long)a1;
- (void)_updateMarkerStyleForState:(long long)a0;
- (void)_updateMarkerStyleIfNeededForState:(long long)a0;
- (void)_updateSelectedMarkerSnapshotLayer;
- (BOOL)canShowCallout;
- (id)initWithAnnotation:(id)a0 reuseIdentifier:(id)a1;
- (BOOL)isProvidingCustomFeature;
- (void)prepareForSnapshotting;
- (void)setDragState:(unsigned long long)a0 animated:(BOOL)a1;
- (void)setSubtitleVisibility:(long long)a0;
- (BOOL)updateCalloutViewIfNeededAnimated:(BOOL)a0;

@end
