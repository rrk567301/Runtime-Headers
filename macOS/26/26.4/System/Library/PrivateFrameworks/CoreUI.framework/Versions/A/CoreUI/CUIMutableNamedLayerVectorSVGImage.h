@class NSString;

@interface CUIMutableNamedLayerVectorSVGImage : CUINamedLayerVectorSVGImage {
    struct CGSVGDocument { } *_svgDocument;
    double _scale;
    id _gradientOrColor;
    NSString *_appearance;
}

- (id)appearance;
- (void)setBlendMode:(int)a0;
- (void)setScale:(double)a0;
- (id)gradient;
- (void)setGradient:(id)a0;
- (struct CGSVGDocument { } *)svgDocument;
- (struct CGColor { } *)color;
- (void)setAppearance:(id)a0;
- (id)init;
- (void)setFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)description;
- (void)dealloc;
- (double)scale;
- (void)setColor:(struct CGColor { } *)a0;
- (void)setSvgDocument:(struct CGSVGDocument { } *)a0;
- (void)setBlurStrength:(double)a0;
- (void)setGradientOrColorName:(id)a0;
- (void)setHasLightingEffects:(BOOL)a0;
- (void)setSvgDocumentURL:(id)a0;

@end
