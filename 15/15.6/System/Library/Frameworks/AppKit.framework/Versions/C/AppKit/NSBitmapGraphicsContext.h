@class NSBitmapImageRep;

@interface NSBitmapGraphicsContext : NSWindowGraphicsContext {
    NSBitmapImageRep *_imageRep;
    struct { unsigned char _isFlipped : 1; unsigned char _isDrawingToScreen : 1; unsigned int _unused : 30; } _bgcFlags;
}

- (void)dealloc;
- (struct CGImage { } *)retainedCGImage;
- (id)_initWithBitmapImageRep:(id)a0;
- (id)_initWithGraphicsPort:(void *)a0 flipped:(char)a1;
- (id)_initWithGraphicsPort:(void *)a0 flipped:(char)a1 drawingToScreen:(char)a2;
- (char)isDrawingToScreen;
- (char)isFlipped;

@end
