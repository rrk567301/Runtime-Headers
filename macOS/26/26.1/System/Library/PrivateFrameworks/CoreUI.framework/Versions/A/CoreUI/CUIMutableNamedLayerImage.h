@class TXRTexture, NSString;

@interface CUIMutableNamedLayerImage : CUINamedLayerImage {
    struct CGImage { } *_image;
    id _gradientOrColor;
    NSString *_appearance;
}

@property (retain, nonatomic) TXRTexture *sdfTexture;

- (void)setAppearance:(id)a0;
- (void)setOpacity:(double)a0;
- (void)setGradient:(id)a0;
- (id)mutableCopy;
- (double)opacity;
- (void)setBlendMode:(int)a0;
- (void)setColor:(struct CGColor { } *)a0;
- (int)blendMode;
- (struct CGImage { } *)image;
- (id)gradient;
- (void)setFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)appearance;
- (struct CGColor { } *)color;
- (void)setImage:(struct CGImage { } *)a0;
- (id)description;
- (void)dealloc;
- (void)setScale:(double)a0;
- (id)init;
- (id)sdfTextureWithBufferAllocator:(id)a0;
- (void)setBlurStrength:(double)a0;
- (void)setGradientOrColorName:(id)a0;
- (void)setHasLightingEffects:(BOOL)a0;

@end
