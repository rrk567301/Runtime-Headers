@interface CUIVectorGlyphEncapsulation : NSObject <NSCopying> {
    void /* unknown type, empty encoding */ shape;
    void /* unknown type, empty encoding */ rect;
    void /* unknown type, empty encoding */ canvasSize;
    void /* unknown type, empty encoding */ representativePointSize;
    void /* unknown type, empty encoding */ _samples;
}

+ (id)newEncapsulationWithShape:(id)a0 rect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 canvasSize:(struct CGSize { double x0; double x1; })a2 representativePointSize:(double)a3;

- (id)copyWithZone:(void *)a0;
- (id)init;
- (void).cxx_destruct;

@end
