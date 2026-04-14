@class NSString;

@interface CUIMutableNamedIconLayerGroup : CUINamedIconLayerGroup {
    NSString *_appearance;
}

- (void)setOpacity:(double)a0;
- (void)dealloc;
- (void)setBlendMode:(int)a0;
- (void)setGradient:(id)a0;
- (void)setAppearance:(id)a0;
- (void)setShadowOpacity:(double)a0;
- (void)setColor:(struct CGColor { } *)a0;
- (id)appearance;
- (void)setShadowStyle:(long long)a0;
- (void)addLayer:(id)a0;
- (void)setHasSpecular:(BOOL)a0;
- (void)removeLayerAtIndex:(unsigned long long)a0;
- (void)setBlurStrength:(double)a0;
- (void)setGathersSpecularByElement:(BOOL)a0;
- (void)setHasLightingEffects:(BOOL)a0;
- (void)setTranslucency:(double)a0;

@end
