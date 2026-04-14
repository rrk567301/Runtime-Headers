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

- (void)setLayer:(id)a0;
- (unsigned int)surfaceID;
- (id)window;
- (void)setColorSpace:(struct CGColorSpace { } *)a0;
- (BOOL)isOpaque;
- (struct CGColorSpace { } *)colorSpace;
- (void)setDisplayNumber:(unsigned int)a0;
- (id)layer;
- (void)setScale:(double)a0;
- (void)setDisplayMask:(unsigned int)a0;
- (void)dealloc;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (unsigned int)displayNumber;
- (double)scale;
- (void)setFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (unsigned int)displayMask;
- (void)setOpaque:(BOOL)a0;
- (id)initWithWindow:(id)a0;
- (BOOL)isLocallyRendered;

@end
