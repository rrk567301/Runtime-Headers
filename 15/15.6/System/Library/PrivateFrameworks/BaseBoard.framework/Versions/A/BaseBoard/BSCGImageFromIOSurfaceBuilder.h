@class IOSurface;

@interface BSCGImageFromIOSurfaceBuilder : NSObject {
    IOSurface *_surface;
    struct CGImage { } *_image;
    char _isDirty;
}

@property (readonly, nonatomic, getter=isOpaque) char opaque;

- (void)dealloc;
- (void).cxx_destruct;
- (id)setOpaque:(char)a0;
- (struct CGImage { } *)buildCGImage;

@end
