@interface NSPrefCrossFadeView : NSPrefAnimatedView {
    struct CGImage { } *mDestImage;
}

- (void)dealloc;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (BOOL)isOpaque;
- (void)drawRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)willStartAnimation;
- (void)didStopAnimation;
- (void)setSourceCGImage:(struct CGImage { } *)a0;
- (void)setDestCGImage:(struct CGImage { } *)a0;

@end
