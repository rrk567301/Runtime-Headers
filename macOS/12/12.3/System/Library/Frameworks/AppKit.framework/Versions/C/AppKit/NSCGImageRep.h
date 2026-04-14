@interface NSCGImageRep : NSImageRep {
    struct CGImage { } *_cgImage;
}

@property (readonly) struct CGImage { } *CGImage;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;
- (id)init;
- (struct CGImage { } *)CGImageForProposedRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } *)a0 context:(id)a1 hints:(id)a2;
- (id)initWithCGImage:(struct CGImage { } *)a0 size:(struct CGSize { double x0; double x1; })a1;
- (id)initWithCGImage:(struct CGImage { } *)a0;
- (BOOL)draw;
- (id)initWithFocusedViewRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (BOOL)_isValid;

@end
