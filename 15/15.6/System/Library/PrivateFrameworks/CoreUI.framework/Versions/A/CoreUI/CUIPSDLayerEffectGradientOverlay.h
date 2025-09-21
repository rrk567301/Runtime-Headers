@class CUIPSDGradient;

@interface CUIPSDLayerEffectGradientOverlay : CUIPSDLayerEffectComponent

@property (retain) CUIPSDGradient *gradient;

- (void)dealloc;
- (id)init;
- (unsigned int)effectType;
- (id)initWithEffectFromPreset:(id)a0 atIndex:(unsigned int)a1;
- (char)updateLayerEffectPreset:(id)a0 error:(id *)a1;

@end
