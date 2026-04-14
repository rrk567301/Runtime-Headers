@class NSColor, NSArray, NSDictionary, CUINamedVectorGlyph;

@interface NSSymbolImageRep : NSImageRep {
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _alignmentRect;
    CUINamedVectorGlyph *_vectorGlyph;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _imageRect;
    double _scaleFactor;
    NSArray *_colors;
    long long _colorPalette;
    NSDictionary *_namedColorOverridess;
    NSColor *_debugBackgroundColor;
    struct CGImage { } *_img;
    unsigned char _needsHorizontalFlip : 1;
}

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;
- (BOOL)isTemplate;
- (BOOL)draw;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })alignmentRect;
- (BOOL)inheritsGeometryFromImage;
- (id)initWithSize:(struct CGSize { double x0; double x1; })a0 alignmentRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 vectorGlyph:(id)a2 imageRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a3 scaleFactor:(double)a4 needsHorizontalFlip:(BOOL)a5 colors:(id)a6 colorPalette:(long long)a7 namedColorOverrides:(id)a8 debugBackgroundColor:(id)a9;

@end
