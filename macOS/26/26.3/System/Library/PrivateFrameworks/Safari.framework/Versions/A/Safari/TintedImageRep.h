@class NSImage, NSColor;

@interface TintedImageRep : NSImageRep {
    NSImage *_image;
    NSColor *_tintColor;
}

- (BOOL)draw;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithImage:(id)a0 tintColor:(id)a1 luminance:(double)a2;

@end
