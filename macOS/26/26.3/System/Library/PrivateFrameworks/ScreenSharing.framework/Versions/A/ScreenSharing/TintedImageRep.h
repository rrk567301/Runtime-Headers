@class NSImage, NSColor;

@interface TintedImageRep : NSImageRep

@property (readonly, nonatomic) NSImage *imageToTint;
@property (readonly, nonatomic) NSColor *tintColor;

- (BOOL)draw;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)hasAlpha;
- (id)initWithImage:(id)a0 tintColor:(id)a1;

@end
