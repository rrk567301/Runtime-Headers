@class NSWindow;

@interface NSCachedImageRep : NSImageRep {
    struct CGPoint { double x; double y; } _origin;
    NSWindow *_window;
    BOOL _paramsComputed;
}

+ (void)initialize;
+ (BOOL)supportsSecureCoding;

- (id)colorSpaceName;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })rect;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)init;
- (id)window;
- (id)initWithCoder:(id)a0;
- (void)setAlpha:(BOOL)a0;
- (BOOL)draw;
- (void)dealloc;
- (struct CGImage { } *)CGImageForProposedRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } *)a0 context:(id)a1 hints:(id)a2;
- (id)_imageRepsForEncodingWithCoder:(id)a0;
- (id)_makeCGImageRep;
- (void)_computeParams;
- (id)_initWithSize:(struct CGSize { double x0; double x1; })a0 depth:(int)a1;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_logicalWindowSpaceRect;
- (void)_performBlockWithFocusLocked:(id /* block */)a0;
- (long long)bitsPerSample;
- (BOOL)hasAlpha;
- (id)initWithSize:(struct CGSize { double x0; double x1; })a0 depth:(int)a1 separate:(BOOL)a2 alpha:(BOOL)a3;
- (id)initWithWindow:(id)a0 rect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (long long)pixelsHigh;
- (long long)pixelsWide;

@end
