@interface SiriUIScrollView : NSScrollView

@property (getter=isScrollEnabled) BOOL scrollEnabled;
@property struct CGPoint { double x0; double x1; } contentOffset;

- (void)setContentOffset:(struct CGPoint { double x0; double x1; })a0 animated:(BOOL)a1;
- (void)setContentOffset:(struct CGPoint { double x0; double x1; })a0 animated:(BOOL)a1 completion:(id /* block */)a2;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (double)firstBaselineOffsetFromTop;
- (void)scrollWheel:(id)a0;
- (void)hideScrollBar;

@end
