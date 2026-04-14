@class NSImage, CALayer;

@interface MorphingDragImageView : NSView {
    CALayer *_previousImageLayer;
    CALayer *_currentImageLayer;
}

@property (retain, nonatomic) NSImage *image;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (void)setFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setImage:(id)a0 animated:(BOOL)a1;
- (id)_animationWithKeyPath:(id)a0 fromValue:(id)a1;
- (id)_createImageLayer;

@end
