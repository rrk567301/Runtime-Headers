@interface PRSTextContainer : NSTextContainer

@property struct CGSize { double width; double height; } exclusionMargin;
@property struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } exclusionRect;

- (BOOL)widthTracksTextView;
- (id)initWithContainerSize:(struct CGSize { double x0; double x1; })a0;
- (BOOL)isSimpleRectangularTextContainer;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })lineFragmentRectForProposedRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 sweepDirection:(unsigned long long)a1 movementDirection:(unsigned long long)a2 remainingRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } *)a3;

@end
