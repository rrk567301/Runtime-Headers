@class CIImage;

@interface NSCIImageRep : NSImageRep {
    CIImage *_ciImage;
}

@property (readonly) CIImage *CIImage;

+ (void)initialize;
+ (id)imageRepWithCIImage:(id)a0;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (id)init;
- (struct CGImage { } *)CGImageForProposedRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } *)a0 context:(id)a1 hints:(id)a2;
- (char)_isValid;
- (char)draw;
- (char)drawAtPoint:(struct CGPoint { double x0; double x1; })a0;
- (char)drawInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (char)drawInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 fromRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 operation:(unsigned long long)a2 fraction:(double)a3 respectFlipped:(char)a4 hints:(id)a5;
- (id)initWithCIImage:(id)a0;

@end
