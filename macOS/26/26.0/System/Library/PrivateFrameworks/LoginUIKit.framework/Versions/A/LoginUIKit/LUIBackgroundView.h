@interface LUIBackgroundView : NSImageView {
    int _style;
}

- (void)mouseUp:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)dealloc;
- (void)_commonInit;
- (id)initWithCoder:(id)a0;
- (void)setStyle:(int)a0;
- (void)setDisplayID:(unsigned int)a0;
- (BOOL)acceptsFirstMouse:(id)a0;
- (id)accessibilityChildren;
- (void)setFrameSize:(struct CGSize { double x0; double x1; })a0;

@end
