@class NSString, PADisplay, NSObject, PFTimeIntervalCoalescer;
@protocol OS_dispatch_queue, PAImageDrawingDelegate;

@interface PAImageItemView : PAItemView <CALayerDelegate, NSViewLayerContentScaleDelegate> {
    NSObject<OS_dispatch_queue> *_queue;
    PADisplay *_display;
    int _animationCount;
    PFTimeIntervalCoalescer *_liveResizeRedrawCoalescer;
}

@property (retain, nonatomic) id<PAImageDrawingDelegate> drawingDelegate;
@property (readonly, nonatomic) PADisplay *displayDevice;
@property (readonly, nonatomic) BOOL isAnimating;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)isOpaque;
- (void)setImages:(id)a0;
- (void)viewWillMoveToWindow:(id)a0;
- (BOOL)acceptsFirstResponder;
- (id)images;
- (void)setConfiguration:(id)a0;
- (void)moveDown:(id)a0;
- (void).cxx_destruct;
- (void)animationDidStart:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)animationDidStop:(id)a0 finished:(BOOL)a1;
- (void)viewDidMoveToWindow;
- (void)moveUp:(id)a0;
- (void)pageUp:(id)a0;
- (BOOL)acceptsFirstMouse:(id)a0;
- (BOOL)layer:(id)a0 shouldInheritContentsScale:(double)a1 fromWindow:(id)a2;
- (void)moveLeft:(id)a0;
- (void)moveRight:(id)a0;
- (void)pageDown:(id)a0;
- (void)setNeedsDisplay:(BOOL)a0;
- (void)viewDidEndLiveResize;
- (void)viewWillStartLiveResize;
- (void)setImage:(id)a0 forKey:(id)a1;
- (void)_windowDidChangeBackingProperties:(id)a0;
- (void)_windowDidChangeScreen:(id)a0;
- (id)imageForKey:(id)a0;
- (id)containerLayer;
- (id)imageLayer;
- (void)_updateTransforms;
- (void)removeAllImages;
- (void)removeImageForKey:(id)a0;
- (void)_updateDisplay:(id)a0;
- (void)_didUpdateDisplayWithUserInfo:(id)a0;
- (id)_displayWithScreen:(id)a0;
- (void)_updateDisplayIfNeededWithUserInfo:(id)a0;
- (void)_willUpdateDisplay:(id)a0;
- (void)beginAnimate;
- (void)endAnimate;
- (void)panImageBy:(struct CGPoint { double x0; double x1; })a0;
- (void)panTo:(struct CGPoint { double x0; double x1; })a0;
- (void)setImageNeedsDisplay;
- (void)showCaptionsProfile:(id)a0;
- (void)stopShowingCaptions;
- (void)updateTransforms;

@end
