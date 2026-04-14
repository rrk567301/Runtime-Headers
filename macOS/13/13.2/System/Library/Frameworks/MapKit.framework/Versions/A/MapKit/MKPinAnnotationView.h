@class NSColor, MKImageView;
@protocol _MKPinAnnotationViewDelegate;

@interface MKPinAnnotationView : MKAnnotationView {
    MKImageView *_shadowView;
    NSColor *_pinTintColor;
    int _state;
    BOOL _animatesDrop;
}

@property (weak, nonatomic, setter=_setDelegate:) id<_MKPinAnnotationViewDelegate> _delegate;
@property (retain) NSColor *pinTintColor;
@property (nonatomic) BOOL animatesDrop;
@property (nonatomic) unsigned long long pinColor;

+ (id)_imageCache;
+ (id)_reuseIdentifier;
+ (id)_shadowImage;
+ (Class)layerClass;
+ (Class)_mapkitLeafClass;
+ (struct CGPoint { double x0; double x1; })_calloutOffset;
+ (struct CGSize { double x0; double x1; })_perceivedSize;
+ (id)redPinColor;
+ (id)greenPinColor;
+ (id)purplePinColor;
+ (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_pinFrameForPosition:(struct CGPoint { double x0; double x1; })a0;
+ (id)_bounceAnimation;
+ (id)_dropBounceAnimation;
+ (id)_imageForLayer:(long long)a0 state:(long long)a1 mapType:(unsigned long long)a2;
+ (id)_imageForState:(long long)a0 mapType:(unsigned long long)a1 pinColor:(id)a2 effectiveAppearance:(id)a3;
+ (id)_pinsWithMapType:(unsigned long long)a0 pinColor:(id)a1 effectiveAppearance:(id)a2;
+ (struct CGPoint { double x0; double x1; })_perceivedAnchorPoint;
+ (struct CGPoint { double x0; double x1; })_shadowAnchorPoint;
+ (struct CGPoint { double x0; double x1; })_leftCalloutOffset;
+ (struct CGPoint { double x0; double x1; })_rightCalloutOffset;

- (id)description;
- (void).cxx_destruct;
- (int)_state;
- (id)_image;
- (void)updateLayer;
- (id)accessibilityAttributeValue:(id)a0;
- (BOOL)isHighlighted;
- (void)setHighlighted:(BOOL)a0;
- (void)setFrameOrigin:(struct CGPoint { double x0; double x1; })a0;
- (void)animationDidStart:(id)a0;
- (void)animationDidStop:(id)a0 finished:(BOOL)a1;
- (id)_highlightedImage;
- (void)setCenter:(struct CGPoint { double x0; double x1; })a0;
- (void)setDragState:(unsigned long long)a0 animated:(BOOL)a1;
- (id)initWithAnnotation:(id)a0 reuseIdentifier:(id)a1;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_significantBounds;
- (void)_setMapType:(unsigned long long)a0;
- (struct NSEdgeInsets { double x0; double x1; double x2; double x3; })_defaultCollisionAlignmentRectInsets;
- (void)_setRotationRadians:(double)a0 withAnimation:(id)a1;
- (void)_didUpdatePosition;
- (void)_updateAnchorPosition:(struct CGPoint { double x0; double x1; })a0 alignToPixels:(BOOL)a1;
- (struct CGPoint { double x0; double x1; })_draggingDropOffset;
- (id)_pins;
- (id)_floatingImage;
- (id)_pinBounceImages;
- (id)_pinJumpImages;
- (void)_invalidateImage;
- (void)_updateShadowLayer;
- (void)_removeAllAnimations;
- (void)_stopDrop;
- (void)_cleanupAfterPinDropAnimation;
- (id)_bounceAnimation:(BOOL)a0 withDelay:(double)a1 addToLayer:(BOOL)a2;
- (void)_dropFromDistance:(double)a0 maxDistance:(double)a1 withDelay:(double)a2;
- (void)_dropAfterDraggingAndRevertPosition:(BOOL)a0 animated:(BOOL)a1;
- (void)_liftForDraggingAnimated:(BOOL)a0;
- (void)_liftForDraggingAfterBounceAnimated:(BOOL)a0;
- (void)_jump;
- (void)_liftDidEnd:(id)a0;

@end
