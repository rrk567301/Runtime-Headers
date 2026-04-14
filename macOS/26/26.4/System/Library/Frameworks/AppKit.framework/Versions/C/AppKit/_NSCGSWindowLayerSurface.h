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

- (id)layer;
- (BOOL)isOpaque;
- (void)setLayer:(id)a0;
- (unsigned int)surfaceID;
- (void)setScale:(double)a0;
- (id)initWithWindow:(id)a0;
- (void)setOpaque:(BOOL)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (void)setDisplayMask:(unsigned int)a0;
- (void)setDisplayNumber:(unsigned int)a0;
- (void)setColorSpace:(struct CGColorSpace { } *)a0;
- (struct CGColorSpace { } *)colorSpace;
- (unsigned int)displayNumber;
- (unsigned int)displayMask;
- (id)window;
- (void)setFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)dealloc;
- (double)scale;

@end
