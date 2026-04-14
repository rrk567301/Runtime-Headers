@class TXRTexture, NSString;

@interface CUIMutableNamedLayerImage : CUINamedLayerImage {
    struct CGImage { } *_image;
    id _gradientOrColor;
    NSString *_appearance;
}

@property (retain, nonatomic) TXRTexture *sdfTexture;

- (id)mutableCopy;
- (void)setAppearance:(id)a0;
- (void)setOpacity:(double)a0;
- (id)gradient;
- (void)setColor:(struct CGColor { } *)a0;
- (id)appearance;
- (id)description;
- (double)opacity;
- (id)init;
- (int)blendMode;
- (void)setScale:(double)a0;
- (void)setBlendMode:(int)a0;
- (struct CGColor { } *)color;
- (void)setGradient:(id)a0;
- (void)setImage:(struct CGImage { } *)a0;
- (void)dealloc;
- (struct CGImage { } *)image;
- (void)setFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)sdfTextureWithBufferAllocator:(id)a0;
- (void)setBlurStrength:(double)a0;
- (void)setGradientOrColorName:(id)a0;
- (void)setHasLightingEffects:(BOOL)a0;

@end
