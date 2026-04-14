@interface NSCGImageRep : NSImageRep {
    struct CGImage { } *_cgImage;
}

@property (readonly) struct CGImage { } *CGImage;

- (void)dealloc;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (struct CGImage { } *)CGImageForProposedRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } *)a0 context:(id)a1 hints:(id)a2;
- (BOOL)draw;
- (id)initWithCGImage:(struct CGImage { } *)a0;
- (id)initWithFocusedViewRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (BOOL)_isValid;
- (id)initWithCGImage:(struct CGImage { } *)a0 size:(struct CGSize { double x0; double x1; })a1;

@end
