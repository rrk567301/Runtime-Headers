@class NSString;

@interface CUIMutableNamedLayerVectorSVGImage : CUINamedLayerVectorSVGImage {
    struct CGSVGDocument { } *_svgDocument;
    double _scale;
    id _gradientOrColor;
    NSString *_appearance;
}

- (void)setFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGSVGDocument { } *)svgDocument;
- (double)scale;
- (void)dealloc;
- (void)setScale:(double)a0;
- (void)setBlendMode:(int)a0;
- (void)setGradient:(id)a0;
- (struct CGColor { } *)color;
- (void)setAppearance:(id)a0;
- (id)gradient;
- (id)init;
- (id)description;
- (void)setColor:(struct CGColor { } *)a0;
- (id)appearance;
- (void)setSvgDocument:(struct CGSVGDocument { } *)a0;
- (void)setBlurStrength:(double)a0;
- (void)setGradientOrColorName:(id)a0;
- (void)setHasLightingEffects:(BOOL)a0;
- (void)setSvgDocumentURL:(id)a0;

@end
