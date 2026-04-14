@interface NSCGImageRep : NSImageRep {
    struct CGImage { } *_cgImage;
}

@property (readonly) struct CGImage { } *CGImage;

- (id)initWithCGImage:(struct CGImage { } *)a0;
- (BOOL)_isValid;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (BOOL)draw;
- (void)dealloc;
- (struct CGImage { } *)CGImageForProposedRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } *)a0 context:(id)a1 hints:(id)a2;
- (id)initWithCGImage:(struct CGImage { } *)a0 size:(struct CGSize { double x0; double x1; })a1;
- (id)initWithFocusedViewRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
