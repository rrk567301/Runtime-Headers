@class NSCGSWindow;

@interface _NSCGSWindowLocallyRenderedLayerSurface : NSCGSWindowLayerSurface {
    NSCGSWindow *_window;
    unsigned int _surfaceID;
    struct _CAView { } *_view;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _frame;
    struct CGColorSpace { } *_colorSpace;
    double _scale;
    unsigned char _opaque : 1;
}

+ (void)initialize;

- (id)initWithWindow:(id)a0;
- (void)setOpaque:(BOOL)a0;
- (unsigned int)displayNumber;
- (struct CGColorSpace { } *)colorSpace;
- (void)setLayer:(id)a0;
- (void)setDisplayMask:(unsigned int)a0;
- (double)scale;
- (void)setDisplayNumber:(unsigned int)a0;
- (id)window;
- (void)setColorSpace:(struct CGColorSpace { } *)a0;
- (BOOL)isOpaque;
- (unsigned int)displayMask;
- (id)layer;
- (void)setFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (unsigned int)surfaceID;
- (void)setScale:(double)a0;
- (void)dealloc;
- (BOOL)isLocallyRendered;

@end
