@interface ABTextContainer : NSTextContainer {
    struct CGSize { double width; double height; } _imageSize;
}

- (double)offset;
- (id)initWithContainerSize:(struct CGSize { double x0; double x1; })a0;
- (BOOL)containsPoint:(struct CGPoint { double x0; double x1; })a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })titleRect;
- (struct CGSize { double x0; double x1; })imageSize;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })lineFragmentRectForProposedRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 sweepDirection:(unsigned long long)a1 movementDirection:(unsigned long long)a2 remainingRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } *)a3;
- (BOOL)isSimpleRectangularTextContainer;
- (struct CGPoint { double x0; double x1; })imageOffset;
- (void)setImageSize:(struct CGSize { double x0; double x1; })a0;

@end
