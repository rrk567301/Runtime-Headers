@class PAImageLayer, PALayerAnimationFactory, NSObject;
@protocol OS_dispatch_queue;

@interface PAImageContainerLayer : CALayer {
    NSObject<OS_dispatch_queue> *_animQueue;
    PALayerAnimationFactory *_animFactory;
}

@property (class, nonatomic) BOOL layerAnimationsDisabled;

@property (retain, nonatomic) PAImageLayer *imageLayer;
@property (readonly, nonatomic) struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; } imageTransform;
@property (readonly, nonatomic) struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; } contentTransform;
@property (nonatomic) struct CGSize { double width; double height; } minLayerSize;

- (id)init;
- (void).cxx_destruct;
- (void)setPosition:(struct CGPoint { double x0; double x1; })a0;
- (void)setBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (BOOL)_isAnimating;
- (BOOL)_shouldAnimate;
- (BOOL)_allowsImplicitAnimation;
- (void)_animate:(id /* block */)a0;
- (void)_setBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)_setPosition:(struct CGPoint { double x0; double x1; })a0;
- (void)PALayerDebug_decodeFromDictionary:(id)a0;
- (void)_animateSetBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_minimumContentBoundsForBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)_animateSetPosition:(struct CGPoint { double x0; double x1; })a0;
- (void)setImageTransform:(struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })a0 contentTransform:(struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })a1;
- (void)_setImageTransform:(struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })a0;
- (void)_setContentTransform:(struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })a0;
- (void)_animateSetImageTransform:(struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })a0 contentTransform:(struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })a1;
- (id)_newAnimationFactory;
- (void)_cleanupAnim;
- (void)_abortAnim;
- (void)_notifyBeginAnimate;
- (void)_notifyEndAnimate;

@end
