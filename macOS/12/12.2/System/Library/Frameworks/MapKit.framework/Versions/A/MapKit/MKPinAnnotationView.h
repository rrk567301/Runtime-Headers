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

+ (id)_reuseIdentifier;
+ (id)_imageCache;
+ (id)_shadowImage;
+ (Class)layerClass;
+ (Class)_mapkitLeafClass;
+ (id)redPinColor;
+ (struct CGSize { double x0; double x1; })_perceivedSize;
+ (struct CGPoint { double x0; double x1; })_calloutOffset;
+ (id)_imageForLayer:(long long)a0 state:(long long)a1 mapType:(unsigned long long)a2;
+ (id)_imageForState:(long long)a0 mapType:(unsigned long long)a1 pinColor:(id)a2 effectiveAppearance:(id)a3;
+ (struct CGPoint { double x0; double x1; })_leftCalloutOffset;
+ (struct CGPoint { double x0; double x1; })_rightCalloutOffset;
+ (id)greenPinColor;
+ (id)purplePinColor;
+ (id)_pinsWithMapType:(unsigned long long)a0 pinColor:(id)a1 effectiveAppearance:(id)a2;
+ (id)_bounceAnimation;
+ (id)_dropBounceAnimation;
+ (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_pinFrameForPosition:(struct CGPoint { double x0; double x1; })a0;
+ (struct CGPoint { double x0; double x1; })_perceivedAnchorPoint;
+ (struct CGPoint { double x0; double x1; })_shadowAnchorPoint;

- (id)description;
- (void).cxx_destruct;
- (int)_state;
- (void)updateLayer;
- (void)setHighlighted:(BOOL)a0;
- (BOOL)isHighlighted;
- (id)accessibilityAttributeValue:(id)a0;
- (void)setFrameOrigin:(struct CGPoint { double x0; double x1; })a0;
- (id)_image;
- (id)_highlightedImage;
- (void)animationDidStart:(id)a0;
- (void)animationDidStop:(id)a0 finished:(BOOL)a1;
- (void)setCenter:(struct CGPoint { double x0; double x1; })a0;
- (id)initWithAnnotation:(id)a0 reuseIdentifier:(id)a1;
- (void)_setMapType:(unsigned long long)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_significantBounds;
- (void)setDragState:(unsigned long long)a0 animated:(BOOL)a1;
- (struct CGPoint { double x0; double x1; })_draggingDropOffset;
- (void)_dropFromDistance:(double)a0 maxDistance:(double)a1 withDelay:(double)a2;
- (void)_stopDrop;
- (void)_updateAnchorPosition:(struct CGPoint { double x0; double x1; })a0 alignToPixels:(BOOL)a1;
- (void)_didUpdatePosition;
- (struct NSEdgeInsets { double x0; double x1; double x2; double x3; })_defaultCollisionAlignmentRectInsets;
- (void)_removeAllAnimations;
- (void)_invalidateImage;
- (id)_pins;
- (void)_setRotationRadians:(double)a0 withAnimation:(id)a1;
- (void)_updateShadowLayer;
- (id)_pinBounceImages;
- (id)_pinJumpImages;
- (id)_floatingImage;
- (id)_bounceAnimation:(BOOL)a0 withDelay:(double)a1 addToLayer:(BOOL)a2;
- (void)_liftForDraggingAnimated:(BOOL)a0;
- (void)_dropAfterDraggingAndRevertPosition:(BOOL)a0 animated:(BOOL)a1;
- (void)_liftForDraggingAfterBounceAnimated:(BOOL)a0;
- (void)_liftDidEnd:(id)a0;
- (void)_cleanupAfterPinDropAnimation;
- (void)_jump;

@end
