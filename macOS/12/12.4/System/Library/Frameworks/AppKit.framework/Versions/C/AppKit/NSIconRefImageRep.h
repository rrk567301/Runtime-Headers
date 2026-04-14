@class NSBitmapImageRep;

@interface NSIconRefImageRep : NSImageRep {
    struct OpaqueIconRef { } *_iconRef;
    unsigned int _sizeIdentifier;
    unsigned int _scaleIdentifier;
    NSBitmapImageRep *_fallbackBitmap;
}

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;
- (id)description;
- (id)init;
- (id)methodSignatureForSelector:(SEL)a0;
- (id)forwardingTargetForSelector:(SEL)a0;
- (struct OpaqueIconRef { } *)iconRef;
- (struct CGImage { } *)CGImageForProposedRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } *)a0 context:(id)a1 hints:(id)a2;
- (long long)pixelsHigh;
- (long long)pixelsWide;
- (BOOL)hasAlpha;
- (BOOL)draw;
- (BOOL)_isValid;
- (id)initWithIconRef:(struct OpaqueIconRef { } *)a0 sizeIdentifier:(unsigned int)a1 scaleIdentifier:(unsigned int)a2;
- (struct CGImage { } *)_copyCGImage;
- (unsigned int)sizeIdentifier;
- (id)_fallbackBitmap;
- (unsigned int)scaleIdentifier;

@end
