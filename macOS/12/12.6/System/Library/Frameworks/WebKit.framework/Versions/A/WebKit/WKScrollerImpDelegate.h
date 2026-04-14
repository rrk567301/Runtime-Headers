@class NSString;

@interface WKScrollerImpDelegate : NSObject <NSAnimationDelegate, NSScrollerImpDelegate> {
    void *_scroller;
    struct RetainPtr<WKScrollbarPartAnimation> { void *m_ptr; } _knobAlphaAnimation;
    struct RetainPtr<WKScrollbarPartAnimation> { void *m_ptr; } _trackAlphaAnimation;
    struct RetainPtr<WKScrollbarPartAnimation> { void *m_ptr; } _uiStateTransitionAnimation;
    struct RetainPtr<WKScrollbarPartAnimation> { void *m_ptr; } _expansionTransitionAnimation;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)invalidate;
- (void).cxx_destruct;
- (id).cxx_construct;
- (id)layer;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })convertRectToLayer:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })convertRectToBacking:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })convertRectFromBacking:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)scrollerImp:(id)a0 animateKnobAlphaTo:(double)a1 duration:(double)a2;
- (void)scrollerImp:(id)a0 animateTrackAlphaTo:(double)a1 duration:(double)a2;
- (void)scrollerImp:(id)a0 overlayScrollerStateChangedTo:(unsigned long long)a1;
- (void)scrollerImp:(id)a0 animateUIStateTransitionWithDuration:(double)a1;
- (void)scrollerImp:(id)a0 animateExpansionTransitionWithDuration:(double)a1;
- (struct CGPoint { double x0; double x1; })mouseLocationInScrollerForScrollerImp:(id)a0;
- (BOOL)shouldUseLayerPerPartForScrollerImp:(id)a0;
- (id)effectiveAppearanceForScrollerImp:(id)a0;
- (void)cancelAnimations;
- (void)setUpAlphaAnimation:(void *)a0 featureToAnimate:(int)a1 animateAlphaTo:(double)a2 duration:(double)a3;
- (id)initWithScroller:(void *)a0;

@end
