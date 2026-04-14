@class CUIColor;

@interface CUIPSDLayerEffectInnerGlow : CUIPSDLayerEffectComponent

@property int blendMode;
@property double opacity;
@property (retain) CUIColor *color;
@property unsigned long long blurSize;

- (void)dealloc;
- (id)description;
- (id)init;
- (BOOL)updateLayerEffectPreset:(id)a0 error:(id *)a1;
- (id)initWithEffectFromPreset:(id)a0 atIndex:(unsigned int)a1;
- (unsigned int)effectType;

@end
