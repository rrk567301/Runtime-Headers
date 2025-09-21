@class NSMapTable, NSArray, NSString, NSLayoutConstraint, NSMutableArray;

@interface PXNSAssetsStackView : NSView <PXChangeObserver> {
    BOOL _isPerformingUpdates;
    struct { BOOL imageProviders; BOOL imageViews; BOOL layout; } _needsUpdateFlags;
}

@property (readonly, nonatomic) NSMapTable *imageProviders;
@property (readonly, nonatomic) NSMutableArray *imageViews;
@property (retain, nonatomic) NSLayoutConstraint *aspectRatioConstraint;
@property (nonatomic) struct NSEdgeInsets { double top; double left; double bottom; double right; } contentInsets;
@property (nonatomic) struct CGSize { double width; double height; } stackingOffset;
@property (nonatomic) double backgroundImageViewAlpha;
@property (copy, nonatomic) NSArray *assets;
@property (nonatomic) long long stackDepth;
@property (nonatomic) double aspectRatio;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)_updateIfNeeded;
- (BOOL)_needsUpdate;
- (void)_setNeedsUpdate;
- (void)observable:(id)a0 didChange:(unsigned long long)a1 context:(void *)a2;
- (struct NSEdgeInsets { double x0; double x1; double x2; double x3; })alignmentRectInsets;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layout;
- (void)_invalidateLayout;
- (BOOL)isFlipped;
- (void)_updateLayoutIfNeeded;
- (void)viewDidChangeBackingProperties;
- (void)updateConstraints;
- (void).cxx_destruct;
- (BOOL)acceptsFirstMouse:(id)a0;
- (BOOL)shouldDelayWindowOrderingForEvent:(id)a0;
- (void)_invalidateImageProviders;
- (void)_invalidateImageViews;
- (void)_updateImageProvidersIfNeeded;
- (void)_updateImageViewsIfNeeded;

@end
