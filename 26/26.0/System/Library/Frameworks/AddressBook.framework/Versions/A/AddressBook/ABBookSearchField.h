@class NSProgressIndicator, NSNumber;

@interface ABBookSearchField : NSSearchField {
    NSProgressIndicator *_progressIndicator;
    NSNumber *_trackingTag;
}

@property (nonatomic, getter=isAnimatingProgress) BOOL animatingProgress;
@property (nonatomic) BOOL hidesProgress;

- (void)viewWillMoveToWindow:(id)a0;
- (void)setFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)dealloc;
- (void)viewDidMoveToWindow;
- (id)initWithCoder:(id)a0;
- (void)mouseEntered:(id)a0;
- (void)mouseExited:(id)a0;
- (void).cxx_destruct;
- (void)setBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setFrameSize:(struct CGSize { double x0; double x1; })a0;
- (void)setNeedsDisplay:(BOOL)a0;
- (void)viewDidEndLiveResize;
- (void)BookSearchField_commonInit;
- (id)bookSearchFieldCell;
- (void)clearTrackingIfNeeded;
- (void)resetTracking;
- (void)updateAnimationForState:(BOOL)a0;

@end
