@interface QTHUDContainerView : NSView {
    struct { unsigned char leftEdgeRounded : 1; unsigned char rightEdgeRounded : 1; unsigned char style : 1; unsigned int reserved : 29; } _internal;
}

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (unsigned long long)style;
- (void)setStyle:(unsigned long long)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (char)isLeftEdgeRounded;
- (char)isRightEdgeRounded;
- (void)setLeftEdgeRounded:(char)a0;
- (void)setRightEdgeRounded:(char)a0;

@end
