@interface ABTextContainer : NSTextContainer {
    struct CGSize { double width; double height; } _imageSize;
}

- (void)setImageSize:(struct CGSize { double x0; double x1; })a0;
- (double)offset;
- (struct CGSize { double x0; double x1; })imageSize;
- (struct CGPoint { double x0; double x1; })imageOffset;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })titleRect;
- (BOOL)containsPoint:(struct CGPoint { double x0; double x1; })a0;
- (id)initWithContainerSize:(struct CGSize { double x0; double x1; })a0;
- (BOOL)isSimpleRectangularTextContainer;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })lineFragmentRectForProposedRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 sweepDirection:(unsigned long long)a1 movementDirection:(unsigned long long)a2 remainingRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } *)a3;

@end
