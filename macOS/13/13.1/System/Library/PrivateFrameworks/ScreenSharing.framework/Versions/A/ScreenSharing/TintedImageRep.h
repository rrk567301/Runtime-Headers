@class NSImage, NSColor;

@interface TintedImageRep : NSImageRep {
    NSImage *_imageToTint;
    NSColor *_tintColor;
}

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)draw;
- (BOOL)hasAlpha;
- (id)initWithImage:(id)a0 tintColor:(id)a1;

@end
