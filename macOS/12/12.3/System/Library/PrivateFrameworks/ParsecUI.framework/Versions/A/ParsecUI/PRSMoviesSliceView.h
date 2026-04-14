@interface PRSMoviesSliceView : NSView

- (unsigned long long)columnCount;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)drawRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)titleTextFieldAtIndex:(unsigned long long)a0;
- (id)subtitleTextViewAtIndex:(unsigned long long)a0;
- (id)posterImageViewAtIndex:(unsigned long long)a0;
- (id)subtitleTextViewMinHeightConstraintAtIndex:(unsigned long long)a0;

@end
