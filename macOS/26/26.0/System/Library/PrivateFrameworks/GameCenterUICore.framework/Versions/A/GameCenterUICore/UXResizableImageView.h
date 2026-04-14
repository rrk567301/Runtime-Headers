@class NSImage;

@interface UXResizableImageView : NSView

@property (retain, nonatomic) NSImage *image;

- (void)setContentScaleFactor:(double)a0;
- (double)contentScaleFactor;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (void)_setContentStretchInPixels:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 forContentSize:(struct CGSize { double x0; double x1; })a1;

@end
