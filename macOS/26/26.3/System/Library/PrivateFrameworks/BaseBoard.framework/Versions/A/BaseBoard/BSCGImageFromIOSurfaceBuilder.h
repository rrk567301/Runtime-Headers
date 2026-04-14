@class IOSurface;

@interface BSCGImageFromIOSurfaceBuilder : NSObject {
    IOSurface *_surface;
    struct CGImage { } *_image;
    BOOL _isDirty;
}

@property (readonly, nonatomic, getter=isOpaque) BOOL opaque;

- (void).cxx_destruct;
- (void)dealloc;
- (id)setOpaque:(BOOL)a0;
- (struct CGImage { } *)buildCGImage;

@end
