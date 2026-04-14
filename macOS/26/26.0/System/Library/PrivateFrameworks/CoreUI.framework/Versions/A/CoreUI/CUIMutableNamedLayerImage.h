@class TXRTexture, NSString;

@interface CUIMutableNamedLayerImage : CUINamedLayerImage {
    struct CGImage { } *_image;
    id _gradientOrColor;
    NSString *_appearance;
}

@property (retain, nonatomic) TXRTexture *sdfTexture;

- (double)opacity;
- (void)setFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)mutableCopy;
- (void)setOpacity:(double)a0;
- (void)dealloc;
- (void)setScale:(double)a0;
- (void)setBlendMode:(int)a0;
- (void)setGradient:(id)a0;
- (void)setImage:(struct CGImage { } *)a0;
- (struct CGColor { } *)color;
- (int)blendMode;
- (void)setAppearance:(id)a0;
- (id)gradient;
- (id)init;
- (struct CGImage { } *)image;
- (id)description;
- (void)setColor:(struct CGColor { } *)a0;
- (id)appearance;
- (id)sdfTextureWithBufferAllocator:(id)a0;
- (void)setBlurStrength:(double)a0;
- (void)setGradientOrColorName:(id)a0;
- (void)setHasLightingEffects:(BOOL)a0;

@end
