@class NSString, CALayer, QLControlTooltip;

@interface QLPreviewScroller : NSView <CALayerDelegate, NSEditor> {
    int _mode;
    CALayer *_knobLayer;
    QLControlTooltip *_pageIndicator;
    BOOL _enableAnimation;
}

@property (nonatomic) double totalScroll;
@property (nonatomic) double currentScroll;
@property unsigned long long numberOfPages;
@property unsigned long long currentPage;
@property long long indicatorWindowLevel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)initialize;
+ (void)_aquaScrollerBehaviorChanged:(id)a0;
+ (double)scrollerWidth;
+ (id)keyPathsForValuesAffectingCurrentPage;
+ (double)minKnobHeight;
+ (id)keyPathsForValuesAffectingPageIndicatorText;

- (void)dealloc;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)mouseDown:(id)a0;
- (void)mouseEntered:(id)a0;
- (void)mouseExited:(id)a0;
- (void)setFrameSize:(struct CGSize { double x0; double x1; })a0;
- (BOOL)isFlipped;
- (void)bind:(id)a0 toObject:(id)a1 withKeyPath:(id)a2 options:(id)a3;
- (void)unbind:(id)a0;
- (void)drawLayer:(id)a0 inContext:(struct CGContext { } *)a1;
- (void)layoutSublayersOfLayer:(id)a0;
- (id)actionForLayer:(id)a0 forKey:(id)a1;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_trackRect;
- (unsigned int)_CAViewFlags;
- (void)unbindAll;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_innerTrackRect;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_knobRect;
- (void)_showPageIndicatorWithAnchor:(struct CGPoint { double x0; double x1; })a0;
- (void)_hidePageIndicator;
- (id)pageIndicatorText;
- (void)_updateScroll:(double)a0;

@end
