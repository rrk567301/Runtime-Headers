@class NSColor, NSArray, NSDictionary, CUINamedVectorGlyph;

@interface NSSymbolImageRep : NSImageRep {
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _alignmentRect;
    CUINamedVectorGlyph *_vectorGlyph;
    double _scaleFactor;
    NSDictionary *_namedColorOverrides;
    long long _renderingStyle;
    NSColor *_debugBackgroundColor;
    struct CGImage { } *_img;
    unsigned char _needsHorizontalFlip : 1;
}

@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } imageRect;
@property (readonly, getter=isTintedMonochrome) BOOL tintedMonochrome;
@property (readonly, nonatomic) long long renderingStyle;
@property (readonly, nonatomic) NSArray *colors;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })alignmentRect;
- (BOOL)draw;
- (BOOL)inheritsGeometryFromImage;
- (id)initWithSize:(struct CGSize { double x0; double x1; })a0 geometry:(struct _NSSymbolImageRepGeometry { struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } x0; struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } x1; double x2; BOOL x3; })a1 vectorGlyph:(id)a2 colors:(id)a3 renderingStyle:(long long)a4 namedColorOverrides:(id)a5 debugBackgroundColor:(id)a6;
- (BOOL)isTemplate;

@end
