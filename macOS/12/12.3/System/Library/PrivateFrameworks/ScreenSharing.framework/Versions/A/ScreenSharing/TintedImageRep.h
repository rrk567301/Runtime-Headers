@class NSImage, NSColor;

@interface TintedImageRep : NSImageRep {
    NSImage *_imageToTint;
    NSColor *_tintColor;
}

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;
- (BOOL)hasAlpha;
- (BOOL)draw;
- (id)initWithImage:(id)a0 tintColor:(id)a1;

@end
