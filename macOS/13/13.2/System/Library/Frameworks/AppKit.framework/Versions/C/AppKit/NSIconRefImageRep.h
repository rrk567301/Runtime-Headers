@class NSBitmapImageRep;

@interface NSIconRefImageRep : NSImageRep {
    struct OpaqueIconRef { } *_iconRef;
    unsigned int _sizeIdentifier;
    unsigned int _scaleIdentifier;
    NSBitmapImageRep *_fallbackBitmap;
}

- (void)dealloc;
- (id)methodSignatureForSelector:(SEL)a0;
- (id)forwardingTargetForSelector:(SEL)a0;
- (id)description;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (struct OpaqueIconRef { } *)iconRef;
- (struct CGImage { } *)CGImageForProposedRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } *)a0 context:(id)a1 hints:(id)a2;
- (BOOL)draw;
- (BOOL)_isValid;
- (long long)pixelsWide;
- (long long)pixelsHigh;
- (BOOL)hasAlpha;
- (id)initWithIconRef:(struct OpaqueIconRef { } *)a0 sizeIdentifier:(unsigned int)a1 scaleIdentifier:(unsigned int)a2;
- (unsigned int)sizeIdentifier;
- (unsigned int)scaleIdentifier;
- (struct CGImage { } *)_copyCGImage;
- (id)_fallbackBitmap;

@end
