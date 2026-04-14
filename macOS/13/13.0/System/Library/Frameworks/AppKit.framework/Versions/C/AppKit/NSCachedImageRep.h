@class NSWindow;

@interface NSCachedImageRep : NSImageRep {
    struct CGPoint { double x; double y; } _origin;
    NSWindow *_window;
    BOOL _paramsComputed;
}

+ (void)initialize;
+ (BOOL)supportsSecureCoding;

- (void)dealloc;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)window;
- (struct CGImage { } *)CGImageForProposedRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } *)a0 context:(id)a1 hints:(id)a2;
- (BOOL)draw;
- (id)colorSpaceName;
- (long long)bitsPerSample;
- (long long)pixelsWide;
- (long long)pixelsHigh;
- (id)initWithWindow:(id)a0 rect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (id)initWithSize:(struct CGSize { double x0; double x1; })a0 depth:(int)a1 separate:(BOOL)a2 alpha:(BOOL)a3;
- (id)_initWithSize:(struct CGSize { double x0; double x1; })a0 depth:(int)a1;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_logicalWindowSpaceRect;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })rect;
- (id)_makeCGImageRep;
- (id)_imageRepsForEncodingWithCoder:(id)a0;
- (void)_performBlockWithFocusLocked:(id /* block */)a0;
- (void)_computeParams;
- (void)setAlpha:(BOOL)a0;
- (BOOL)hasAlpha;

@end
