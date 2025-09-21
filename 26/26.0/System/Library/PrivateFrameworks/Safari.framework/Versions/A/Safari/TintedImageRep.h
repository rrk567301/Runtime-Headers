@class NSImage, NSColor;

@interface TintedImageRep : NSImageRep {
    NSImage *_image;
    NSColor *_tintColor;
}

- (BOOL)draw;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)initWithImage:(id)a0 tintColor:(id)a1 luminance:(double)a2;

@end
