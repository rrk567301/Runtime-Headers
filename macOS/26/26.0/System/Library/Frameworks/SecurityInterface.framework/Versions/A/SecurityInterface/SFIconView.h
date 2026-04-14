@class NSImage;

@interface SFIconView : NSImageView {
    NSImage *_badge;
}

- (void)drawRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)dealloc;
- (BOOL)acceptsFirstResponder;
- (void)setImage:(id)a0 badge:(id)a1;

@end
