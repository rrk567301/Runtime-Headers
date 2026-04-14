@class CAContext, NSCGSWindow;

@interface _NSCGSWindowLayerSurface : NSCGSWindowLayerSurface {
    NSCGSWindow *_window;
    unsigned int _surfaceID;
    CAContext *_context;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _frame;
    struct CGColorSpace { } *_colorSpace;
    double _scale;
    unsigned char _opaque : 1;
}

- (void)setOpaque:(BOOL)a0;
- (BOOL)isOpaque;
- (void)setColorSpace:(struct CGColorSpace { } *)a0;
- (id)layer;
- (struct CGColorSpace { } *)colorSpace;
- (void)setFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)window;
- (double)scale;
- (void)setLayer:(id)a0;
- (void)dealloc;
- (void)setScale:(double)a0;
- (void)setDisplayNumber:(unsigned int)a0;
- (unsigned int)surfaceID;
- (id)initWithWindow:(id)a0;
- (void)setDisplayMask:(unsigned int)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (unsigned int)displayNumber;
- (unsigned int)displayMask;

@end
