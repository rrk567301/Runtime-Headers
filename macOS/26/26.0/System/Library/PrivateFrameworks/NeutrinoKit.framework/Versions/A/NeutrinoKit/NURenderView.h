@class NUImageGeometry, NSString, _NURenderViewContainerLayer, NUTiledImageLayer;

@interface NURenderView : NSView <CALayerDelegate> {
    NUTiledImageLayer *_backfillLayer;
    NUTiledImageLayer *_roiLayer;
    BOOL _debugMode;
    _NURenderViewContainerLayer *_containerLayer;
}

@property (nonatomic) BOOL debugMode;
@property (retain, nonatomic) NUImageGeometry *geometry;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)actionForLayer:(id)a0 forKey:(id)a1;
- (BOOL)isOpaque;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithCoder:(id)a0;
- (void)viewDidChangeBackingProperties;
- (void).cxx_destruct;
- (BOOL)inLiveResize;
- (BOOL)wantsUpdateLayer;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })convertRectToImage:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)_containerLayer;
- (id)_backfillLayer;
- (id)_roiLayer;
- (BOOL)hasTransitionAnimation;
- (void)renderFrameReachedTargetSize;
- (void)transitionToSize:(struct CGSize { double x0; double x1; })a0 duration:(double)a1 animationCurve:(id)a2 completion:(id /* block */)a3;
- (void)transitionToSize:(struct CGSize { double x0; double x1; })a0 offset:(struct CGPoint { double x0; double x1; })a1 duration:(double)a2 animationCurve:(id)a3 completion:(id /* block */)a4;

@end
