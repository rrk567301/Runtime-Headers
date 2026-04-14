@class NSString;

@interface CUIMutableNamedLayerVectorSVGImage : CUINamedLayerVectorSVGImage {
    struct CGSVGDocument { } *_svgDocument;
    double _scale;
    id _gradientOrColor;
    NSString *_appearance;
}

- (void)setAppearance:(id)a0;
- (id)gradient;
- (void)setColor:(struct CGColor { } *)a0;
- (id)appearance;
- (id)description;
- (id)init;
- (void)setScale:(double)a0;
- (void)setBlendMode:(int)a0;
- (struct CGColor { } *)color;
- (void)setGradient:(id)a0;
- (struct CGSVGDocument { } *)svgDocument;
- (void)dealloc;
- (double)scale;
- (void)setFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setSvgDocument:(struct CGSVGDocument { } *)a0;
- (void)setBlurStrength:(double)a0;
- (void)setGradientOrColorName:(id)a0;
- (void)setHasLightingEffects:(BOOL)a0;
- (void)setSvgDocumentURL:(id)a0;

@end
