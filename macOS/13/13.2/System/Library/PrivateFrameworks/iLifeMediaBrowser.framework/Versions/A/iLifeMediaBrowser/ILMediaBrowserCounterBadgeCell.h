@interface ILMediaBrowserCounterBadgeCell : NSTextFieldCell {
    double _scaleFactor;
}

- (id)initTextCell:(id)a0;
- (void)drawWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 inView:(id)a1;
- (struct CGSize { double x0; double x1; })cellSize;
- (id)renderedImage;
- (id)initTextCell:(id)a0 scaleFactor:(double)a1;
- (id)gradientStartingColor;
- (id)gradientEndingColor;

@end
