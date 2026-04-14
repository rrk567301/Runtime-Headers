@class NSArray;

@interface NSCompositeImage : NSImage {
    NSArray *_constituentImages;
}

+ (id)compositeImageWithConstituentImages:(id)a0;

- (void)dealloc;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (struct CGImage { } *)CGImageForProposedRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } *)a0 context:(id)a1 hints:(id)a2;
- (void)drawInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 fromRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 operation:(unsigned long long)a2 fraction:(double)a3;
- (void)_drawMappingAlignmentRectToRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 withState:(unsigned long long)a1 backgroundStyle:(int)a2 tintColor:(id)a3 operation:(unsigned long long)a4 fraction:(double)a5 flip:(BOOL)a6 hints:(id)a7;

@end
