@class CUIColor;

@interface CUIPSDLayerEffectColorOverlay : CUIPSDLayerEffectComponent

@property int blendMode;
@property (retain) CUIColor *color;
@property double opacity;

- (void)dealloc;
- (id)description;
- (id)init;
- (unsigned int)effectType;
- (id)initWithEffectFromPreset:(id)a0 atIndex:(unsigned int)a1;
- (char)updateLayerEffectPreset:(id)a0 error:(id *)a1;

@end
