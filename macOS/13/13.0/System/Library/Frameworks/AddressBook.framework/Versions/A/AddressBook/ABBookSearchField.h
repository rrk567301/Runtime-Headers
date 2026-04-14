@class NSProgressIndicator, NSNumber;

@interface ABBookSearchField : NSSearchField {
    NSProgressIndicator *_progressIndicator;
    NSNumber *_trackingTag;
}

@property (nonatomic, getter=isAnimatingProgress) BOOL animatingProgress;
@property (nonatomic) BOOL hidesProgress;

- (void)dealloc;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)viewDidMoveToWindow;
- (void)mouseEntered:(id)a0;
- (void)mouseExited:(id)a0;
- (void)setFrameSize:(struct CGSize { double x0; double x1; })a0;
- (void)setNeedsDisplay:(BOOL)a0;
- (void)setBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)viewDidEndLiveResize;
- (void)viewWillMoveToWindow:(id)a0;
- (void)BookSearchField_commonInit;
- (id)bookSearchFieldCell;
- (void)updateAnimationForState:(BOOL)a0;
- (void)clearTrackingIfNeeded;
- (void)resetTracking;

@end
