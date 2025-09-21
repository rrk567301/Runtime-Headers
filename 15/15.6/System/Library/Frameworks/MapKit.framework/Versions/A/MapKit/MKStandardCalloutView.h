@class NSView, NSString, MKCalloutLayer, MKSmallCalloutView, NSVisualEffectView, NSColor, NSLayoutConstraint, MKCalloutShadowView;

@interface MKStandardCalloutView : MKCalloutView <CALayerDelegate> {
    struct { struct CGPoint { double x; double y; } origin; struct CGPoint { double x; double y; } offset; long long position; struct CGPoint { double x; double y; } desiredPoint; struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } desiredBounds; } _anchor;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _frame;
    struct { unsigned char animated : 1; unsigned char didMoveCalled : 1; unsigned char hasPendingAnimatedLayout : 1; unsigned char needsCalloutUpdate : 1; unsigned char isObserving : 1; unsigned int reserved : 26; } _flags;
    char _animatingMapToShow;
    char _dismissed;
    NSColor *_leftViewColor;
    NSView *_leftViewBackground;
    NSView *_contentView;
    MKSmallCalloutView *_calloutView;
    NSVisualEffectView *_backdropView;
    MKCalloutLayer *_maskLayer;
    MKCalloutShadowView *_shadowView;
    NSLayoutConstraint *_calloutViewTopInsetConstraint;
    NSLayoutConstraint *_calloutViewLeftInsetConstraint;
    NSLayoutConstraint *_calloutViewRightInsetConstraint;
    NSLayoutConstraint *_calloutViewBottomInsetConstraint;
    long long _style;
    struct { double margin; double cornerRadius; double arrowBase; double arrowHeight; char useRadialSmoothing; union { struct { double arrowBaseRadius; double arrowRadius; } radialSmoothing; struct { double arrowSmoothing; double arrowPointFactor; } nonRadialSmoothing; } ; char alignDetailViewBaseline; char scaleVerticalPaddingForDynamicType; struct NSEdgeInsets { double top; double left; double bottom; double right; } padding; } _metrics;
}

@property (nonatomic) char hideTitle;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (double)defaultHeight;

- (void)dealloc;
- (void).cxx_destruct;
- (void)setTitle:(id)a0;
- (struct CGPoint { double x0; double x1; })offset;
- (void)setOffset:(struct CGPoint { double x0; double x1; })a0;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void)setSubtitle:(id)a0;
- (id)subtitle;
- (id)accessibilityAttributeNames;
- (id)accessibilityAttributeValue:(id)a0;
- (struct CGPoint { double x0; double x1; })anchorPoint;
- (char)isFlipped;
- (char)layer:(id)a0 shouldInheritContentsScale:(double)a1 fromWindow:(id)a2;
- (void)setFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)updateConstraints;
- (void)updateLayer;
- (void)viewDidMoveToWindow;
- (void)_frameDidChange;
- (void)_calculateActualAnchorPoint:(struct CGPoint { double x0; double x1; } *)a0 frame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } *)a1 forDesiredAnchorPoint:(struct CGPoint { double x0; double x1; })a2 boundaryRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a3;
- (long long)_calculateAnchorPosition:(struct CGPoint { double x0; double x1; } *)a0 visibleRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } *)a1;
- (void)_layoutSubviews:(char)a0;
- (void)_markDidMoveCalled;
- (struct CGPoint { double x0; double x1; })_originForScale:(double)a0;
- (void)_runBounceAnimationWithCompletionBlock:(id /* block */)a0;
- (void)_setNeedsCalloutUpdate;
- (void)_setOriginForScale:(double)a0;
- (void)_showFromAnchorPoint:(struct CGPoint { double x0; double x1; })a0 boundaryRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 animate:(char)a2 completionBlock:(id /* block */)a3;
- (void)_startObservingAnnotationView:(id)a0;
- (void)_stopObservingAnnotationView:(id)a0;
- (void)_updateAppearance;
- (void)_updateCallout;
- (void)_updateCalloutAnimated:(char)a0;
- (void)_updateLeftBackgroundView;
- (long long)anchorPosition;
- (void)animationDidStop:(id)a0 finished:(id)a1 context:(void *)a2;
- (void)annotationViewFrameDidChange;
- (void)completeBounceAnimation;
- (void)dismissAnimated:(char)a0 completionBlock:(id /* block */)a1;
- (void)forceAnchorPosition:(long long)a0;
- (char)hasPendingVisibility;
- (id)initWithAnnotationView:(id)a0;
- (char)isLeftAnchored;
- (void)setDetailView:(id)a0 animated:(char)a1;
- (void)setLeftView:(id)a0 backgroundColor:(id)a1 animated:(char)a2;
- (void)setRightView:(id)a0 animated:(char)a1;
- (void)setSubtitle:(id)a0 animated:(char)a1;
- (void)showAnimated:(char)a0 completionBlock:(id /* block */)a1;
- (void)systemColorsDidChangeNotification:(id)a0;

@end
