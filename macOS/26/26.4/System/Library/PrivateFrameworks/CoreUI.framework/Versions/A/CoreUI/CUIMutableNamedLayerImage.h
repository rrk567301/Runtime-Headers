@class TXRTexture, NSString;

@interface CUIMutableNamedLayerImage : CUINamedLayerImage {
    struct CGImage { } *_image;
    id _gradientOrColor;
    NSString *_appearance;
}

@property (retain, nonatomic) TXRTexture *sdfTexture;

- (id)appearance;
- (void)setBlendMode:(int)a0;
- (int)blendMode;
- (struct CGImage { } *)image;
- (id)mutableCopy;
- (void)setScale:(double)a0;
- (void)setOpacity:(double)a0;
- (double)opacity;
- (void)setImage:(struct CGImage { } *)a0;
- (id)gradient;
- (void)setGradient:(id)a0;
- (struct CGColor { } *)color;
- (void)setAppearance:(id)a0;
- (id)init;
- (void)setFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)description;
- (void)dealloc;
- (void)setColor:(struct CGColor { } *)a0;
- (id)sdfTextureWithBufferAllocator:(id)a0;
- (void)setBlurStrength:(double)a0;
- (void)setGradientOrColorName:(id)a0;
- (void)setHasLightingEffects:(BOOL)a0;

@end
